scriptName "functions_lockpickSpeed_2";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_lockpickSpeed_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_locksmith_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_lockpickMultiplier = 1.15;
};