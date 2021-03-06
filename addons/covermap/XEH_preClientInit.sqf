#include "script_component.hpp"
EXEC_CHECK(CLIENT);
//IGNORE_PRIVATE_WARNING ["_x"];

#include "functions\defines\TeamMacro.hpp"

[QGVAR(InitEvent), {
    [QEGVAR(Core,RegisterModuleEvent), ["Cover Map", "Covers map except specified area, allows switching between multiple AOs", "Blackhawk and PIZZADOX"]] call CBA_fnc_localEvent;
    [{(!isNull ace_player)}, {
        private _StartAO = GETPLVAR(UnitDefaultAO,"Side Default AO");
        if (_StartAO isEqualto "No Modules Found") exitwith {
            ERROR("No Modules found for CoverMap!");
        };
        if (_StartAO isEqualto "Side Default AO") then {
            switch (side player) do {
                case west: {
                    COVERMAPTEAMMACRO(BLUFOR);
                };
                case east: {
                    COVERMAPTEAMMACRO(OPFOR);
                };
                case independent: {
                    COVERMAPTEAMMACRO(Indfor);
                };
                case civilian: {
                    COVERMAPTEAMMACRO(Civilian);
                };
                default {};
            };
        } else {
            if ((GVAR(AOArray) findif {_StartAO == (_x select 0)}) isEqualto -1) exitwith {
                ERROR_2("Default CoverMap for unit: %1 area: %2 does not exist!",player,_StartAO);
            };
        };

        [_StartAO] call FUNC(Briefing);

        [{(visibleMap)},{
            _this call FUNC(Live);
        },_StartAO] call CBA_fnc_waitUntilAndExecute;
    }] call CBA_fnc_waitUntilAndExecute;

    [{((!isNull ace_player) && {CBA_missionTime > 1})}, {
        if (GETMVAR(AllowSwitching,false)) then {
            private ["_AOArray"];
            private _playerActionArray = GETPLVAR(UnitAONameArray,[]);
            if (_playerActionArray isEqualto []) then {
                _AOArray = switch (side player) do {
                    case west: {
                        GETMVAR(DefaultAOList_BLUFOR,[]);
                    };
                    case east: {
                        GETMVAR(DefaultAOList_OPFOR,[]);
                    };
                    case independent: {
                        GETMVAR(DefaultAOList_Indfor,[]);
                    };
                    case civilian: {
                        GETMVAR(DefaultAOList_Civ,[]);
                    };
                    default {[]};
                };
            } else {
                _AOArray = _playerActionArray;
            };
            if (_AOArray isEqualTo []) exitwith {};
            private _MapChangeMenu = ["MapChangeMenu", "Switch Map", "", {}, {true}] call ace_interact_menu_fnc_createAction;
            [player, 1, ["ACE_SelfActions"], _MapChangeMenu] call ace_interact_menu_fnc_addActionToObject;
            private _ActionArray = [];
            {
                private _AONameAllowed = _x;
                {
                    _x params ["_AOName"];
                    if ((_AONameAllowed isEqualto _AOName) && {!(_AONameAllowed in _ActionArray)}) then {
                        private _condition = {
                            params ["", "", "_params"];
                            (visibleMap) && {!(GVAR(currentAO) isEqualto (_params select 0))} && {(GETMVAR(AllowSwitching,false))}
                        };
                        private _statement = {
                            params ["", "", "_params"];
                            [(_params select 0)] call FUNC(Live);
                        };
                        private _tempAction = ["switch_MapAO", ("Switch Map to " + _AONameAllowed), "", _statement, _condition, {}, [_AONameAllowed]] call ace_interact_menu_fnc_createAction;
                        [player, 1, ["ACE_SelfActions","MapChangeMenu"], _tempAction] call ace_interact_menu_fnc_addActionToObject;
                        _ActionArray pushback _AONameAllowed;
                        LOG_1("CoverMap action added for area: %1",_AONameAllowed);
                    };
                } foreach GVAR(AOArray);
            } foreach _AOArray;
        };
    }] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;

[QEGVAR(Core,SettingsLoaded), {
    if !(GETMVAR(Enabled,false)) exitWith {};
    [QGVAR(InitEvent), []] call CBA_fnc_localEvent;
}] call CBA_fnc_addEventHandler;
