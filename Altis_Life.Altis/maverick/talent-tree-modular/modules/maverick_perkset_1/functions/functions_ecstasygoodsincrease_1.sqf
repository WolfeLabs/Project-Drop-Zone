scriptName "functions_ecstasygoodsincrease_1";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!

    FrameWork By : Bytex Digital
    Perks by: WolfeLabs
---------------------------------------------------------------------------*/
#define __filename "functions_ecstasygoodsincrease_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_ecstasygoodsincrease_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_ecstasygoodsincrease_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	mav_ttm_var_ecstasyMultiplier = random 5;
};