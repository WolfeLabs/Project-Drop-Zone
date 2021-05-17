/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/



//medic Color rgba   0.878,0.298,0.298,1
// medic side  GUER

// cop Color  RGBA	 0.294,0.294,0.956,1
//Cop side is WEST

//CIV COLOR RGBA 	 1,1,1,1
//Civ side is CIV

//Emergency Color RGBA 1,0.6,0.4,1

// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {"CIV","WEST"};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {"CIV","WEST"};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 25;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 25 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {"CIV","WEST"};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+25% more money per paycheck</t>";
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
	description = "Receive more money on a paycheck <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+50% more money per paycheck</t>";
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
	description = "Receive more money on a paycheck <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
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
	description = "Learn to process materials more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+10% faster processing</t>";
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
	description = "Learn to process materials more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% faster processing</t>";
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
	description = "Learn to process materials more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+25% faster processing</t>";
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
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles <br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
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
	description = "Health Insurance that reduces revive cost when medic revives. <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+20% Reduced a</t>";
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
	description = "Health Insurance that reduces revive cost when medic revives. <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+40% Reduced Revive and Hospital Cost</t>";
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
	description = "Health Insurance that reduces revive cost when medic revives. <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+60% Reduced Revive and Hospital Cost</t>";
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
	description = "Learn to gathering materials more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+10% faster gathering</t>";
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
	description = "Learn to gathering materials more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% faster gathering</t>";
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
	description = "Learn to gathering materials more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+25% faster gathering</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gatheringSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- robstore
class perk_robstore_1 {
	displayName = "Quick Criminal";
	requiredPerkPoints = 2;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 2 Perk Points";
	description = "Reduce the time required to rob <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% Time Reduced</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_robstore_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_robstore_2 {
	displayName = "Quick Criminal 2";
	requiredPerkPoints = 3;
	requiredLevel = 12;
	requiredPerk = "perk_robstore_1";
	subtitle = "Level 12 Required, 3 Perk Points";
	description = "Reduce the time required to rob <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+35% Time Reduced</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_robstore_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_robstore_3 {
	displayName = "Quick Criminal 3";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_robstore_2";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Reduce the time required to rob <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+65% Time Reduced</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_robstore_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- robstorereward
class perk_robstorereward_1 {
	displayName = "Higher Robbery Score";
	requiredPerkPoints = 2;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 2 Perk Points";
	description = "Increase Score Ammount <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% Increased Score</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_robstorereward_2 {
	displayName = "Higher Robbery Score 2";
	requiredPerkPoints = 3;
	requiredLevel = 12;
	requiredPerk = "perk_robstorereward_1";
	subtitle = "Level 12 Required, 3 Perk Points";
	description = "Increase Score Ammount <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+35% Increased Score</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_robstorereward_3 {
	displayName = "Higher Robbery Score 3";
	requiredPerkPoints = 6;
	requiredLevel = 18;
	requiredPerk = "perk_robstorereward_2";
	subtitle = "Level 18 Required, 6 Perk Points";
	description = "Increase Score Ammount <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+65% Increased Score</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

//rob alarm

class perk_robalarm_1 {
	displayName = "Silent Criminal";
	requiredPerkPoints = 2;
	requiredLevel = 6;
	requiredPerk = "";
	subtitle = "Level 6 Required, 2 Perk Points";
	description = "Reduce the chance in setting off the silent alarm alerting the cops! <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+20% Reduced Chance to Triger Cop Alert</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_robalarm_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_robalarm_2 {
	displayName = "Silent Criminal 2";
	requiredPerkPoints = 4;
	requiredLevel = 9;
	requiredPerk = "perk_robalarm_1";
	subtitle = "Level 9 Required, 4 Perk Points";
	description = "Reduce the chance in setting off the silent alarm alerting the cops! <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+40% Reduced Chance to Triger Cop Alert</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_robalarm_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_robalarm_3 {
	displayName = "Silent Criminal 3";
	requiredPerkPoints = 4;
	requiredLevel = 12;
	requiredPerk = "perk_robalarm_2";
	subtitle = "Level 12 Required, 4 Perk Points";
	description = "Reduce the chance in setting off the silent alarm alerting the cops! <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+60% Reduced Chance to Triger Cop Alert</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_robalarm_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster realestate
class perk_realestate_1 {
	displayName = "Property Management";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Gain access to own more property <br/> (Relog for talent to take effect)<br/><br/><t color='#10FF45'>+1 Extra Property per Level</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_realestate_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_realestate_2 {
	displayName = "Property Management 2";
	requiredPerkPoints = 8;
	requiredLevel = 20;
	requiredPerk = "perk_realestate_1";
	subtitle = "Level 20 Required, 8 Perk Points";
	description = "Gain access to own more property <br/> (Relog for talent to take effect)<br/><br/><t color='#10FF45'>+1 Extra Property per Level</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_realestate_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_realestate_3 {
	displayName = "Property Management 3";
	requiredPerkPoints = 12;
	requiredLevel = 25;
	requiredPerk = "perk_realestate_2";
	subtitle = "Level 25 Required, 12 Perk Points";
	description = "Gain access to own more property <br/> (Relog for talent to take effect)<br/><br/><t color='#10FF45'>+1 Extra Property per Level</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_realestate_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// increase process amount
class perk_processamount_1 {
	displayName = "Process Amount";
	requiredPerkPoints = 8;
	requiredLevel = 12;
	requiredPerk = "";
	subtitle = "Level 12 Required, 8 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'> 200% </t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

/*
	///////////////////////////////////////////////
				Emergency Perks
	///////////////////////////////////////////////
*/

// -- Faster repair
class perk_repairSpeed_1 {
	displayName = "Repair Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to repair more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+10% faster repair</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {"WEST","GUER"};
	color[] = {1,0.6,0.4,1};
};

class perk_repairSpeed_2 {
	displayName = "Repair Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_repairSpeed_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to repair more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% faster repair</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {"WEST","GUER"};
	color[] = {1,0.6,0.4,1};
};

class perk_repairSpeed_3 {
	displayName = "Repair Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_repairSpeed_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to repair more efficiently <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+25% faster repair</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_3.sqf";
	limitToSides[] = {"WEST","GUER"};
	color[] = {1,0.6,0.4,1};
};

	//Revive Speed
class perk_Revive_1 {
	displayName = "Revive ";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+10% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_1.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};

class perk_Revive_2 {
	displayName = "Revive 2";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_Revive_1";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+15% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_2.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};

class perk_Revive_3 {
	displayName = "Revive 3";
	requiredPerkPoints = 4;
	requiredLevel = 10;
	requiredPerk = "perk_Revive_2";
	subtitle = "Level 10 Required, 4 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+25% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_3.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};

// -- Faster Impounding
class perk_impound_1 {
	displayName = "impound";
	requiredPerkPoints = 2;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3 Required, 2 Perk Points";
	description = "Become a friend of a friend to some one in the Impound Lot<br/><br/><t color='#10FF45'>+10% faster Impound Call</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_impound_2 {
	displayName = "impound 2";
	requiredPerkPoints = 4;
	requiredLevel = 8;
	requiredPerk = "perk_impound_1";
	subtitle = "Level 8 Required, 4 Perk Points";
	description = "Become friends with the guy form the Impound Lot<br/><br/><t color='#10FF45'>+15% faster Impound Call</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_impound_3 {
	displayName = "impound 3";
	requiredPerkPoints = 6;
	requiredLevel = 15;
	requiredPerk = "perk_impound_2";
	subtitle = "Level 28 Required, 4 Perk Points";
	description = "Become Buddy, Buddy with the guy form the Impound Lot <br/><br/><t color='#10FF45'>+25% faster Impound Call</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

// -- pdbounty
class perk_pdbounty_1 {
	displayName = "Arrest Bonus ";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on an arrest bounty <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% more money per arrest</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_1.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_pdbounty_2 {
	displayName = "Arrest Bonus 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_pdbounty_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on an arrest bounty <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+35% more money per arrest</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_2.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_pdbounty_3 {
	displayName = "Arrest Bonus 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_pdbounty_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on an arrest bounty <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+65% more money per arrest</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_3.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

/* class perk_processamount_2 {
	displayName = "Process Amount 2";
	requiredPerkPoints = 12;
	requiredLevel = 18;
	requiredPerk = "perk_Processamount_1";
	subtitle = "Level 18 Required, 12 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'>400%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


class perk_processamount_3 {
	displayName = "Process Amount 3";
	requiredPerkPoints = 16;
	requiredLevel = 21;
	requiredPerk = "perk_Processamount_2";
	subtitle = "Level 21 Required, 16 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'> 600%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_3.sqf";
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

class perk_impound_2 {
	displayName = "impound 2";
	requiredPerkPoints = 4;
	requiredLevel = 8;
	requiredPerk = "perk_impound_1";
	subtitle = "Level 8 Required, 4 Perk Points";
	description = "Become friends with the guy form the Impound Lot<br/><br/><t color='#10FF45'>+15% faster Impound Call</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_impound_3 {
	displayName = "impound 3";
	requiredPerkPoints = 6;
	requiredLevel = 15;
	requiredPerk = "perk_impound_2";
	subtitle = "Level 28 Required, 4 Perk Points";
	description = "Become Buddy, Buddy with the guy form the Impound Lot <br/><br/><t color='#10FF45'>+25% faster Impound Call</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

// -- pdbounty
class perk_pdbounty_1 {
	displayName = "Arrest Bonus ";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on an arrest bounty <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+15% more money per arrest</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_1.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_pdbounty_2 {
	displayName = "Arrest Bonus 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_pdbounty_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on an arrest bounty <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+35% more money per arrest</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_2.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

class perk_pdbounty_3 {
	displayName = "Arrest Bonus 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_pdbounty_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on an arrest bounty <br/> (Relog for talent to take effect) <br/><br/><t color='#10FF45'>+65% more money per arrest</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_pdbounty_3.sqf";
	limitToSides[] = {"WEST"};
	color[] = {0.294,0.294,0.956,1};
};

/* class perk_processamount_2 {
	displayName = "Process Amount 2";
	requiredPerkPoints = 12;
	requiredLevel = 18;
	requiredPerk = "perk_Processamount_1";
	subtitle = "Level 18 Required, 12 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'>400%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


class perk_processamount_3 {
	displayName = "Process Amount 3";
	requiredPerkPoints = 16;
	requiredLevel = 21;
	requiredPerk = "perk_Processamount_2";
	subtitle = "Level 21 Required, 16 Perk Points";
	description = "Process amount increased By:<br/><br/><t color='#38FF3F'> 600%</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_Process_amount_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_Revive_2 {
	displayName = "Revive 2";
	requiredPerkPoints = 3;
	requiredLevel = 5;
	requiredPerk = "perk_Revive_1";
	subtitle = "Level 5 Required, 3 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+15% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_2.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};

class perk_Revive_3 {
	displayName = "Revive 3";
	requiredPerkPoints = 4;
	requiredLevel = 10;
	requiredPerk = "perk_Revive_2";
	subtitle = "Level 10 Required, 4 Perk Points";
	description = "Learn to Revive Patient's faster<br/><br/><t color='#10FF45'>+25% faster Revives</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_ReviveSpeed_3.sqf";
	limitToSides[] = {"GUER"};
	color[] = {0.878,0.298,0.298,1};
};


