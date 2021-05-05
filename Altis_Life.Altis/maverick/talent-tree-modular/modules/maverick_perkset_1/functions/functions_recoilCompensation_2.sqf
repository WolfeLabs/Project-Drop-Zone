scriptName "functions_recoilCompensation_2";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_recoilCompensation_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_gunsspecialist_lessRecoil_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	player setUnitRecoilCoefficient .9;

		player addEventHandler ["Respawn", {
		player setUnitRecoilCoefficient .9;
	}];
};