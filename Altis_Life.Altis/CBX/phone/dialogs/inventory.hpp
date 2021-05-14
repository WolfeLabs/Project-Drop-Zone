class CBX_Inventory  { //["0.338097 * safezoneW + safezoneX","0.203 * safezoneH + safezoneY","0.314524 * safezoneW","0.594 * safezoneH"]
idd = 2503;
movingEnable = false;
enableSimulation = true;
onLoad = "";
onUnLoad = "";
    class controlsBackground {
		class background: Life_RscPicture
		{
			idc = 1200;
			text = "CBX\phone\images\pages\background.paa";
			x = 0.338097 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.314524 * safezoneW;
			h = 0.594 * safezoneH;
		};
        class Phone: Life_RscPicture
		{
			idc = 1201;
			text = "CBX\phone\images\pages\inventory.paa";
			x = 0.338097 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.314524 * safezoneW;
			h = 0.594 * safezoneH;
		};
		class Frame: Life_RscPicture
		{
			idc = 1202;
			text = "CBX\phone\images\pages\frame.paa";
			x = 0.338097 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.314524 * safezoneW;
			h = 0.594 * safezoneH;
		};
    };
    class controls {	
		class remove: CBX_RscButtonInvisable
		{
			idc = 2400;
		    onButtonClick = "[] call life_fnc_removeItem;";
			x = 0.419563 * safezoneW + safezoneX;
			y = 0.6628 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0396 * safezoneH;
		};
		class use: CBX_RscButtonInvisable
		{
			idc = 2401;
			onButtonClick = "[] call life_fnc_useItem;";
			x = 0.473188 * safezoneW + safezoneX;
			y = 0.6628 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0396 * safezoneH;
		};
		class give: CBX_RscButtonInvisable
		{
			idc = 2402;
			onButtonClick = "[] call life_fnc_giveItem;";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.6628 * safezoneH + safezoneY;
			w = 0.0443438 * safezoneW;
			h = 0.0396 * safezoneH;
		};
		class Players: Life_RscCombo
		{
			idc = 2100;
			x = 0.447407 * safezoneW + safezoneX;
			y = 0.5902 * safezoneH + safezoneY;
			w = 0.0948749 * safezoneW;
			h = 0.0198 * safezoneH;
		};
		class Amount: Life_RscEdit
		{
			idc = 2403;
            text = "1";
			x = 0.447407 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0948749 * safezoneW;
			h = 0.0176 * safezoneH;
		};
		class Weight: Life_RscText
		{
			idc = 2404;
            text = "";
			x = 0.464937 * safezoneW + safezoneX;
			y = 0.2954 * safezoneH + safezoneY;
			w = 0.0598123 * safezoneW;
			h = 0.0264 * safezoneH;
		};
        class List: Life_RscListBox
		{
			idc = 2405;
			sizeEx = 0.030;
			x = 0.420084 * safezoneW + safezoneX;
			y = 0.3438 * safezoneH + safezoneY;
			w = 0.15055 * safezoneW;
			h = 0.2288 * safezoneH;
		};
        class buttonHome: CBX_RscButtonInvisable
		{
			idc = 2406;
			onButtonClick = "closeDialog 0;";
			x = 0.485562 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0206253 * safezoneW;
			h = 0.0264 * safezoneH;
		};
    };
};