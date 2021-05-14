class CBX_Licenses  { //["0.338097 * safezoneW + safezoneX","0.203 * safezoneH + safezoneY","0.314524 * safezoneW","0.594 * safezoneH"]
idd = 2505;
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
			text = "CBX\phone\images\pages\licenses.paa";
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
		class list: Life_RscStructuredText
		{
			idc = 2400;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.154674 * safezoneW;
			h = 0.33 * safezoneH;
		};
        class buttonHome: CBX_RscButtonInvisable
		{
			idc = 2401;
			onButtonClick = "closeDialog 0;";
			x = 0.485562 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0206253 * safezoneW;
			h = 0.0264 * safezoneH;
		};
    };
};