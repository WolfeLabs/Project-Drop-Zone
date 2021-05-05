scriptName "functions_gatheringSpeed_2";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!

    FrameWork By : Bytex Digital
    Perks by: WolfeLabs
---------------------------------------------------------------------------*/
#define __filename "functions_gatheringSpeed_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_gatheringSpeed_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_gatheringMultiplier = 1.15;
};