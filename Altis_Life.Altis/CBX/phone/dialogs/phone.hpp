class CBX_Phone  { //["0.338097 * safezoneW + safezoneX","0.203 * safezoneH + safezoneY","0.314524 * safezoneW","0.594 * safezoneH"]
idd = 2502;
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
			text = "CBX\phone\images\pages\phone.paa";
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
		class Text: Life_RscEdit
		{
			idc = 2400;
            text = "";
			x = 0.42575 * safezoneW + safezoneX;
			y = 0.3196 * safezoneH + safezoneY;
			w = 0.139209 * safezoneW;
			h = 0.1716 * safezoneH;
		};
		class playerscombo: Life_RscCombo
		{
			idc = 2100;
			x = 0.496906 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0680624 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class sendmessage: CBX_RscButtonInvisable
		{
			idc = 2401;
			onButtonClick = "[] call TON_fnc_cell_textmsg";
			x = 0.424719 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.0608436 * safezoneW;
			h = 0.0462 * safezoneH;
		};
		class textpolice: CBX_RscButtonInvisable
		{
			idc = 2402;
			onButtonClick = "[] call TON_fnc_cell_textcop";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.5066 * safezoneH + safezoneY;
			w = 0.0608436 * safezoneW;
			h = 0.0462 * safezoneH;
		};
		class textAdmins: CBX_RscButtonInvisable
		{
			idc = 2403;
			onButtonClick = "[] call TON_fnc_cell_textadmin";
			x = 0.424718 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0608436 * safezoneW;
			h = 0.0462 * safezoneH;
		};
		class requestems: CBX_RscButtonInvisable
		{
			idc = 2404;
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0608436 * safezoneW;
			h = 0.0462 * safezoneH;
		};
		class buttonHome: CBX_RscButtonInvisable
		{
			idc = 2405;
			onButtonClick = "closeDialog 0;";
			x = 0.485562 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0206253 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class adminmessageall: CBX_RscButtonInvisable
		{
			idc = 2406;
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			x = 0.424719 * safezoneW + safezoneX;
			y = 0.6254 * safezoneH + safezoneY;
			w = 0.0608436 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class adminmessage: CBX_RscButtonInvisable
		{
			idc = 2407;
			onButtonClick = "[] call TON_fnc_cell_adminmsg";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.6254 * safezoneH + safezoneY;
			w = 0.0608436 * safezoneW;
			h = 0.044 * safezoneH;
		};
    };
};