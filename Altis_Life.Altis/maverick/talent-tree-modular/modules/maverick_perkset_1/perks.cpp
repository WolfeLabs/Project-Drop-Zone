/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 25;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 25 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+25% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+50% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster processing
class perk_processingSpeed_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processingSpeed_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processingSpeed_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processingSpeed_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster lockpicking
class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 4;
	requiredLevel = 28;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 28 Required, 4 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

/*
Talents below are products of WolfeLabs
*/

//Health Insurance

class perk_HealthInsurance_1 {
	displayName = "Health Insurance";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Health Insurance that reduces revive cost when medic revives.<br/><br/><t color='#10FF45'>+20% Reduced Revive Cost</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_CanadaHealthInsurance_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_HealthInsurance_2 {
	displayName = "Health Insurance Part:B";
	requiredPerkPoints = 4;
	requiredLevel = 6;
	requiredPerk = "perk_HealthInsurance_1";
	subtitle = "Level 6 Required, 4 Perk Points";
	description = "Health Insurance that reduces revive cost when medic revives.<br/><br/><t color='#10FF45'>+40% Reduced Revive Cost</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_CanadaHealthInsurance_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_HealthInsurance_3 {
	displayName = "Health Insurance Part:D";
	requiredPerkPoints = 4;
	requiredLevel = 12;
	requiredPerk = "perk_HealthInsurance_2";
	subtitle = "Level 12 Required, 4 Perk Points";
	description = "Health Insurance that reduces revive cost when medic revives.<br/><br/><t color='#10FF45'>+60% Reduced Revive Cost</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_CanadaHealthInsurance_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster gathering
class perk_gatheringspeed_1 {
	displayName = "Gathering Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to gathering materials more efficiently<br/><br/><t color='#10FF45'>+10% faster gathering</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheringSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gatheringspeed_2 {
	displayName = "Gathering Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_gatheringspeed_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to gathering materials more efficiently<br/><br/><t color='#10FF45'>+15% faster gathering</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheringSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gatheringspeed_3 {
	displayName = "Gathering Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_gatheringspeed_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to gathering materials more efficiently<br/><br/><t color='#10FF45'>+25% faster gathering</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheringSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster repair
class perk_repairSpeed_1 {
	displayName = "Repair Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to repair more efficiently<br/><br/><t color='#10FF45'>+10% faster repair</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_repairSpeed_2 {
	displayName = "Repair Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_repairSpeed_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to repair more efficiently<br/><br/><t color='#10FF45'>+15% faster repair</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_repairSpeed_3 {
	displayName = "Repair Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_repairSpeed_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to repair more efficiently<br/><br/><t color='#10FF45'>+25% faster repair</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// --  general goods multiplier 
class perk_generalgoodsincrease_1 {
	displayName = "Process Managment";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-3</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_generalgoodsincrease_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_generalgoodsincrease_2 {
	displayName = "Process Managment 2";
	requiredPerkPoints = 4;
	requiredLevel = 10;
	requiredPerk = "perk_generalgoodsincrease_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-8</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_generalgoodsincrease_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_generalgoodsincrease_3 {
	displayName = "Process Managment 3";
	requiredPerkPoints = 8;
	requiredLevel = 18;
	requiredPerk = "perk_generalgoodsincrease_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-13</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_generalgoodsincrease_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// --  cocaine goods multiplier 
class perk_cocainegoodsincrease_1 {
	displayName = "Cocaine Cutting Process";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-5</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_cocainegoodsincrease_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_cocainegoodsincrease_2 {
	displayName = "Cocaine Cutting Process 2";
	requiredPerkPoints = 8;
	requiredLevel = 14;
	requiredPerk = "perk_cocainegoodsincrease_1";
	subtitle = "Level 14 Required, 8 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-15</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_cocainegoodsincrease_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_cocainegoodsincrease_3 {
	displayName = "Cocaine Cutting Process 3";
	requiredPerkPoints = 12;
	requiredLevel = 20;
	requiredPerk = "perk_cocainegoodsincrease_2";
	subtitle = "Level 20 Required, 12 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-20</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_cocainegoodsincrease_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// --  heroin goods multiplier 
class perk_heroingoodsincrease_1 {
	displayName = "Heroin Cutting Process";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-5</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_heroingoodsincrease_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_heroingoodsincrease_2 {
	displayName = "Heroin Cutting Process 2";
	requiredPerkPoints = 8;
	requiredLevel = 14;
	requiredPerk = "perk_heroingoodsincrease_1";
	subtitle = "Level 14 Required, 8 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-15</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_heroingoodsincrease_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_heroingoodsincrease_3 {
	displayName = "Heroin Cutting Process 3";
	requiredPerkPoints = 12;
	requiredLevel = 20;
	requiredPerk = "perk_heroingoodsincrease_2";
	subtitle = "Level 20 Required, 12 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-20</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_heroingoodsincrease_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// --  marijuana goods multiplier 
class perk_marijuanagoodsincrease_1 {
	displayName = "Marijuana Cutting Process";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-5</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_marijuanagoodsincrease_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_Marijuanagoodsincrease_2 {
	displayName = "Marijuana Cutting Process 2";
	requiredPerkPoints = 8;
	requiredLevel = 14;
	requiredPerk = "perk_marijuanagoodsincrease_1";
	subtitle = "Level 14 Required, 8 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-15</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_marijuanagoodsincrease_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_Marijuanagoodsincrease_3 {
	displayName = "Marijuana Cutting Process 3";
	requiredPerkPoints = 12;
	requiredLevel = 20;
	requiredPerk = "perk_Marijuanagoodsincrease_2";
	subtitle = "Level 20 Required, 12 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-20</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Marijuanagoodsincrease_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// --  ecstasy goods multiplier 
class perk_ecstasygoodsincrease_1 {
	displayName = "Ecstasy Cutting Process";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-5</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ecstasygoodsincrease_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_ecstasygoodsincrease_2 {
	displayName = "Ecstasy Cutting Process 2";
	requiredPerkPoints = 8;
	requiredLevel = 14;
	requiredPerk = "perk_ecstasygoodsincrease_1";
	subtitle = "Level 14 Required, 8 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-15</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ecstasygoodsincrease_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_ecstasygoodsincrease_3 {
	displayName = "ecstasy Cutting Process 3";
	requiredPerkPoints = 12;
	requiredLevel = 20;
	requiredPerk = "perk_ecstasygoodsincrease_2";
	subtitle = "Level 20 Required, 12 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-20</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ecstasygoodsincrease_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// --  meth goods multiplier 
class perk_methgoodsincrease_1 {
	displayName = "Meth Cutting Process";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "perk_processingSpeed_2";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-5</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_methgoodsincrease_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_methgoodsincrease_2 {
	displayName = "Meth Cutting Process 2";
	requiredPerkPoints = 8;
	requiredLevel = 14;
	requiredPerk = "perk_methgoodsincrease_1";
	subtitle = "Level 14 Required, 8 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-15</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_methgoodsincrease_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_methgoodsincrease_3 {
	displayName = "Meth Cutting Process 3";
	requiredPerkPoints = 12;
	requiredLevel = 20;
	requiredPerk = "perk_methgoodsincrease_2";
	subtitle = "Level 20 Required, 12 Perk Points";
	description = "Learn to increase output<br/><br/><t color='#10FF45'>Random output 1-20</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_methgoodsincrease_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};