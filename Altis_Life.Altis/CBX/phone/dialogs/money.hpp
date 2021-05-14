class CBX_BankStatus  { //["0.338097 * safezoneW + safezoneX","0.203 * safezoneH + safezoneY","0.314524 * safezoneW","0.594 * safezoneH"]
idd = 2506;
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
		class Page: Life_RscPicture
		{
			idc = 1201;
			text = "CBX\phone\images\pages\bank_account.paa";
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
		class bank: Life_RscStructuredText
		{
			idc = 2400;
			x = 0.460813 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0701249 * safezoneW;
			h = 0.0242 * safezoneH;
		};
		class cash: Life_RscStructuredText
		{
			idc = 2401;
			x = 0.460812 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0701249 * safezoneW;
			h = 0.0242 * safezoneH;
		};
		class edit: Life_RscEdit
		{
			idc = 1400;
			text = "";
			x = 0.460813 * safezoneW + safezoneX;
			y = 0.6342 * safezoneH + safezoneY;
			w = 0.0701249 * safezoneW;
			h = 0.0132 * safezoneH;
		};
		class players: Life_RscCombo
		{
			idc = 2100;
			x = 0.460812 * safezoneW + safezoneX;
			y = 0.6672 * safezoneH + safezoneY;
			w = 0.0701249 * safezoneW;
			h = 0.0198 * safezoneH;
		};
		class transfer: CBX_RscButtonInvisable
		{
			idc = 2402;
			onButtonClick = "[] call life_fnc_giveMoney";
			x = 0.457721 * safezoneW + safezoneX;
			y = 0.6958 * safezoneH + safezoneY;
			w = 0.0752812 * safezoneW;
			h = 0.0264 * safezoneH;
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