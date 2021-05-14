class CBX_PhoneMain  { //["0.338097 * safezoneW + safezoneX","0.203 * safezoneH + safezoneY","0.314524 * safezoneW","0.594 * safezoneH"]
idd = 2501;
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
		class Frame: Life_RscPicture
		{
			idc = 1201;
			text = "CBX\phone\images\pages\frame.paa";
			x = 0.338097 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.314524 * safezoneW;
			h = 0.594 * safezoneH;
		};
    };

    class controls {

        class accountPage: Life_RscPicture
		{
			idc = 1202;
			text = "CBX\phone\images\pages\account_balance.paa";
			x = 0.338097 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.314524 * safezoneW;
			h = 0.594 * safezoneH;
		};
		class syncIcon: Life_RscPicture
		{
			idc = 1204;
			text = "CBX\phone\images\icons\sync.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class settingsIcon: Life_RscPicture
		{
			idc = 1203;
			text = "CBX\phone\images\icons\settings.paa";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class inventoryIcon: Life_RscPicture
		{
			idc = 1205;
			text = "CBX\phone\images\icons\inventory.paa";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class keyChainIcon: Life_RscPicture
		{
			idc = 1206;
			text = "CBX\phone\images\icons\key_chain.paa";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class gangsIcon: Life_RscPicture
		{
			idc = 1207;
			text = "CBX\phone\images\icons\gangs.paa";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class bankIcon: Life_RscPicture
		{
			idc = 1208;
			text = "CBX\phone\images\icons\bank_account.paa";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class licensesIcon: Life_RscPicture
		{
			idc = 1209;
			text = "CBX\phone\images\icons\licenses.paa";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class adminIcon: Life_RscPicture
		{
			idc = 1210;
			text = "CBX\phone\images\icons\admin.paa";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class phoneIcon: Life_RscPicture
		{
			idc = 1211;
			text = "CBX\phone\images\icons\phone.paa";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class wantedIcon: Life_RscPicture
		{
			idc = 1212;
			text = "CBX\phone\images\icons\wanted.paa";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class buttonHome: CBX_RscButtonInvisable
		{
			idc = 2400;
			onButtonClick = "closeDialog 0;";
			x = 0.485562 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0206253 * safezoneW;
			h = 0.0264 * safezoneH;
		};
		class bankBalance: Life_RscStructuredText
		{
			idc = 2401;
			x = 0.467 * safezoneW + safezoneX;
			y = 0.3255 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.0198 * safezoneH;
		};
		class cashBalance: Life_RscStructuredText
		{
			idc = 2402;
			x = 0.467 * safezoneW + safezoneX;
			y = 0.3636 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.0198 * safezoneH;
		};
        class syncButton: CBX_RscButtonInvisable
		{
			idc = 2403;
			onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class settingsButton: CBX_RscButtonInvisable
		{
			idc = 2404;
			onButtonClick = "[] call life_fnc_settingsMenu;";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class inventoryButton: CBX_RscButtonInvisable
		{
			idc = 2405;
			onButtonClick = "[] spawn CBX_fnc_inventoryMenu;";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class keyChainButton: CBX_RscButtonInvisable
		{
			idc = 2406;
			onButtonClick = "createDialog ""CBX_KeyChain"";";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class gangsButton: CBX_RscButtonInvisable
		{
			idc = 2407;
			onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class bankButton: CBX_RscButtonInvisable
		{
			idc = 2408;
			onButtonClick = "[] call CBX_fnc_openBankStatus;";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class licensesButton: CBX_RscButtonInvisable
		{
			idc = 2409;
			onButtonClick = "[] spawn CBX_fnc_licensesMenu;";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class adminButton: CBX_RscButtonInvisable
		{
			idc = 2410;
			onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class phoneButton: CBX_RscButtonInvisable
		{
			idc = 2411;
			onButtonClick = "[] spawn CBX_fnc_openPhoneMenu;";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
		class wantedButton: CBX_RscButtonInvisable
		{
			idc = 2412;
			onButtonClick = "[] call life_fnc_wantedMenu";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0288751 * safezoneW;
			h = 0.0484 * safezoneH;
		};
	};
};
