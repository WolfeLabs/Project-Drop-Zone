/*
    File: fn_injectAction.sqf
    Author: Ilusionz

    Description:
	Handles the script execution for medics when using an injector on an injured person.
*/

private["_target","_drug"];

_target = cursorTarget;
_drug = param [1,1,[0]];

//Error checks
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};


switch (_drug) do {
	case 1: { 
		if(life_inv_morphine != 0) then {
			titleText[localize "STR_NOTF_Morphine","PLAIN"];
			[player,"AinvPknlMstpSnonWrflDnon_medic1"] remoteExec ["life_fnc_animSync",0];
			sleep 2;
			titleText[localize "STR_NOTF_MorphineInj","PLAIN"];
			[] remoteExec ["life_fnc_morphine",_target];
			[false,"morphine",1] call life_fnc_handleinv;
			player playMoveNow "AmovPercMstpSnonWnonDnon";
			sleep 2;
			player playActionNow "stop";
		}; 
	};

	case 2: {
		
	};


	//End of Drug Switch
};








