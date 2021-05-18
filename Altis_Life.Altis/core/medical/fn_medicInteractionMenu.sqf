#include "..\..\script_macros.hpp"
/*
    File: fn_medicInteractionMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Replaces the mass addactions for various medic actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401

private ["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8""_page"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_page = param [1,1,[0]];


if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; //Bad side check?
    if (player distance _curTarget > 4 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
life_pInact_curTarget = _curTarget;

{ _x ctrlShow true; } forEach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8];
{ _x ctrlEnable true; } forEach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8];

switch (_page) do {
			case 1: {

				if (player getVariable ["isEscorting",false]) then {
					{ _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn5,_Btn6,_Btn7,_Btn8];
				};
				
					if ((_curTarget getVariable ["tied",false]) OR (_curTarget getVariable ["restrained", false])) then {
								
								_Btn1 ctrlEnable true;
								_Btn4 ctrlEnable true;
								_Btn7 ctrlEnable true;

							} else {

								_Btn1 ctrlEnable false;
								_Btn4 ctrlEnable false;
								_Btn7 ctrlEnable false;
							};
				//Set Unrestrain Button
					_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
					_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

		
					_Btn2 ctrlShow false;
					_Btn3 ctrlShow false;
				

				//Set Escort Button

					if (player getVariable ["isEscorting",false]) then {
						_Btn4 ctrlSetText localize "STR_pInAct_StopEscort";
						_Btn4 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
						_Btn4 ctrlEnable true;
					} else {
						_Btn4 ctrlSetText localize "STR_pInAct_Escort";
						_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
					};

					_Btn5 ctrlShow false;							
					_Btn6 ctrlShow false;
					

					_Btn7 ctrlSetText localize "STR_pInAct_PutInCar";
					_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";
						
					_Btn8 ctrlSetText localize "STR_pInAct_nxtpg";
					_Btn8 buttonSetAction "[life_pInact_curTarget, 2] call life_fnc_medicInteractionMenu ";	
						
					

			};
			case 2:{
						if ((_curTarget getVariable ["ziptied",false]) OR (_curTarget getVariable ["restrained", false])) then {
								
								_Btn1 ctrlEnable true;
								_Btn2 ctrlEnable true;

							} else {
								
								_Btn1 ctrlEnable false;
								_Btn2 ctrlEnable false;

							};

						if (player getVariable ["isEscorting",false]) then {
							{ _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn4,_Btn5,_Btn6,_Btn7];
						};
				
				// Gag player to stop them from talking

						
							_Btn2 ctrlSetText "Gag Person";
							_Btn2 buttonSetAction "[] call zipties_fnc_zip_gagAction; closeDialog 0;";
						
							_Btn3 ctrlShow false;
							_Btn4 ctrlShow false;
							_Btn5 ctrlShow false;
							_Btn6 ctrlShow false;
							_Btn7 ctrlSetText localize "STR_pAct_Inject";
                            _Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_injectAction; closeDialog 0;";
				//Go back to Page 1
							_Btn8 ctrlSetText localize "STR_pInAct_nxtpg";
							_Btn8 buttonSetAction "[life_pInact_curTarget, 1] call life_fnc_copInteractionMenu ";	
					
					

			};
};	


/* 

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn3,_Btn5,_Btn6,_Btn7,_Btn8];
};

//Set Unrestrain Button
_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

//Set Escort Button
if (player getVariable ["isEscorting",false]) then {
    _Btn2 ctrlSetText localize "STR_pInAct_StopEscort";
    _Btn2 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
} else {
    _Btn2 ctrlSetText localize "STR_pInAct_Escort";
    _Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};


_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";

_Btn7 ctrlSetText localize "STR_pAct_Inject";
_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_injectAction; closeDialog 0;";



/*
have button to check health of target to see what there over all state is
have button to check in depth the injuries to determin the medication
have button to admin certain drugs 


*/ 
