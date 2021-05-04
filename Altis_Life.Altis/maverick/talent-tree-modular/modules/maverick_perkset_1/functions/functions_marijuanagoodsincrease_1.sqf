scriptName "functions_marijuanagoodsincrease_1";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!

    FrameWork By : Bytex Digital
    Perks by: WolfeLabs
---------------------------------------------------------------------------*/
#define __filename "functions_marijuanagoodsincrease_1.sqf"

_ownsDependency1 = [life_currentExpPerks, "perk_marijuanagoodsincrease_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "perk_marijuanagoodsincrease_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency1 && !_ownsDependency2) then {
	mav_ttm_var_marijuanaMultiplier = random 5;
};