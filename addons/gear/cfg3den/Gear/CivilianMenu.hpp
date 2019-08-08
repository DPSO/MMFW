class GVAR(Presets_Civ) {
    displayName = "Civilian Gear Presets";
    collapsed = 0;
    class Attributes {
        class GVAR(ACE_Arsenal_GearPresets_Civ) {
            property = QGVAR(ACE_Arsenal_GearPresets_Civ);
            displayName = "Gear Presets";
            tooltip = "";
            control = QGVAR(PresetsCombo_Civ);
            typeName = "STRING";
            expression = SCENARIO_EXPRESSION;
            defaultValue = "'None'";
        };
    };
};

class GVAR(ACE_Arsenal_Civ) {
    displayName = "Civilian ACE Gear Settings";
    collapsed = 1;
    class Attributes {
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,SQL);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,TL);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,RFL);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,RFLAT);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,AR);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,GRN);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,VCRW);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,VCMD);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,OFF);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,TWOIC);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,MED);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,AT);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,AAT);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,MG);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,AMG);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,MKS);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,RTO);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,FAC);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,FO);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,ENG);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,EOD);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,HAT);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,AHAT);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,MORTL);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,MOR);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,APLT);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,ACRW);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,CUS1);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,CUS2);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,CUS3);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,CUS4);
        GEAR_TYPECONFIG_ACEAR(CIVILIAN,CUS5);
    };
};
class GVAR(Olsen_Civ) {
    displayName = "Civilian Olsen Gear Settings";
    collapsed = 1;
    class Attributes {
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,SQL);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,TL);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,RFL);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,RFLAT);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,AR);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,GRN);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,VCRW);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,VCMD);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,OFF);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,TWOIC);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,MED);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,AT);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,AAT);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,MG);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,AMG);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,MKS);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,RTO);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,FAC);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,FO);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,ENG);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,EOD);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,HAT);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,AHAT);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,MORTL);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,MOR);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,APLT);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,ACRW);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,CUS1);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,CUS2);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,CUS3);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,CUS4);
        GEAR_TYPECONFIG_OLSEN(CIVILIAN,CUS5);
    };
};
