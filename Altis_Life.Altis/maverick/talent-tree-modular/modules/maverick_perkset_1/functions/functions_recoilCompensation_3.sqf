scriptName "functions_recoilCompensation_3";
/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
#define __filename "functions_recoilCompensation_3.sqf"

player setUnitRecoilCoefficient .8;

player addEventHandler ["Respawn", {
	player setUnitRecoilCoefficient .8;
}];