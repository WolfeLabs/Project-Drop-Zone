scriptName "functions_Canadarobalarm_2";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: functions_Canadarobalarm_2.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_Canadarobalarm_2.sqf"

_ownsDependency = [life_currentExpPerks, "perk_robalarm_3"] call mav_ttm_fnc_hasPerk;

if (!_ownsDependency) then {
	mav_ttm_var_robalarm = 0.6;//40% 
};