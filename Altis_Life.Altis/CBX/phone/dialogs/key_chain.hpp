class CBX_KeyChain  { //["0.338097 * safezoneW + safezoneX","0.203 * safezoneH + safezoneY","0.314524 * safezoneW","0.594 * safezoneH"]
idd = 2504;
movingEnable = false;
enableSimulation = true;
onLoad = "[] spawn life_fnc_keyMenu;";
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
			text = "CBX\phone\images\pages\key_chain.paa";
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
		class list: Life_RscListBox
		{
			idc = 2400;
			sizeEx = 0.030;
			x = 0.416469 * safezoneW + safezoneX;
			y = 0.3152 * safezoneH + safezoneY;
			w = 0.156736 * safezoneW;
			h = 0.2882 * safezoneH;
		};
		class give: CBX_RscButtonInvisable
		{
			idc = 2401;
			onButtonClick = "[] call life_fnc_keyGive";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.6738 * safezoneH + safezoneY;
			w = 0.045375 * safezoneW;
			h = 0.0396 * safezoneH;
		};
		class drop: CBX_RscButtonInvisable
		{
			idc = 2402;
			onButtonClick = "[] call life_fnc_keyDrop";
			x = 0.506187 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.045375 * safezoneW;
			h = 0.0396 * safezoneH;
		};
		class combo: Life_RscCombo
		{
			idc = 2100;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.113434 * safezoneW;
			h = 0.0176 * safezoneH;
		};
        class buttonHome: CBX_RscButtonInvisable
		{
			idc = 2403;
			onButtonClick = "closeDialog 0;";
			x = 0.485562 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0206253 * safezoneW;
			h = 0.0264 * safezoneH;
		};
    };
};
