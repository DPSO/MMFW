class GVAR(CarryAttribute): Toolbox {
    attributeLoad = QUOTE([ARR_3(_this,_value,_config)] call FUNC(CarryAttribute_attr_load));
    attributeSave = QUOTE([ARR_2(_this,_config)] call FUNC(CarryAttribute_attr_save));
    h = "7 * (pixelH * pixelGrid * 0.50)";
    class Controls: Controls {
        class Title: Title {};
        class Value: ctrlToolbox {
            idc = 100;
            style = "0x02";
            x = "48 * (pixelW * pixelGrid * 0.50)";
            w = "82 * (pixelW * pixelGrid * 0.50)";
            h = "6 * (pixelH * pixelGrid * 0.50)";
            rows = 1;
            columns = 3;
            strings[] = {"Cant Carry","Can Carry","Ignore Weight"};
            values[] = {0,1,2};
            onToolboxSelChanged = QUOTE(_this call FUNC(CarryAttribute_ToolboxSel));
        };
    };
};
