scriptName "fn_getVehicleIndicatorOffsets";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "fn_getVehicleIndicatorOffsets.sqf"

_class = param[0,"",[""]];

// Ex
if (_class == "") exitWith {[[0,0,0],[0,0,0],[0,0,0],[0,0,0]]};

// Get config entry
_config = getArray(missionConfigFile >> "Maverick_Indicators" >> "Vehicles" >> _class >> "positions");

// Ex
if (count _config == 0) exitWith {[[0,0,0],[0,0,0],[0,0,0],[0,0,0]]};

// Return
_config;