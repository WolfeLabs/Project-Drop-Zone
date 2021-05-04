/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 7000, 3250, "" },//Rook 40 9mm
            { "hgun_Pistol_01_F", "", 6000, 3000, "" }, //pm 9mm
            { "hgun_P07_blk_F", "", 7000, 3500, "" },//po7 black            
            { "hgun_Pistol_heavy_02_F", "", 8500, 4250, "" },//zubr .45acp
            { "hgun_ACPC2_F", "", 8750, 4375, "" },//1911 .45acp
            { "hgun_Pistol_heavy_01_F", "", 9000, 4500, "" },//4-five 
            { "hgun_Pistol_heavy_01_green_F", "", 9000, 4500, "" },//4-five green 
            { "SMG_05_F", "", 14000, 7000, "" }, //protector 9mm
            { "hgun_PDW2000_F", "", 14000, 7000, "" }, // pdw 9mm 
            { "sgun_HunterShotgun_01_F", "", 12000, 6000, "" },//shotgun
            { "srifle_DMR_06_hunter_F", "", 24000, 12000, "" }//mk14
            //{ "sgun_HunterShotgun_01_sawedoff_F", "", 5000, "" },//sawed off            
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 200, 100, "" },//p07/rook mag
            { "10Rnd_9x21_Mag", "", 150, 75, "" }, //pm mag            
            { "6Rnd_45ACP_Cylinder", "", 230, 115, "" },//zubr mag
            { "9Rnd_45ACP_Mag", "", 250, 125, "" },//1911 mag
            { "11Rnd_45ACP_Mag", "", 280, 140, "" },//4-five mag            
            { "30Rnd_9x21_Mag", "", 250, 125, "" },//9mm 30 rnd rook, p07, pdw
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //protector mag
            { "10Rnd_Mk14_762x51_Mag", "", 800, 400, "" },//mk14 mag
            { "2Rnd_12Gauge_Pellets", "", 400, 200, "" },//shotgun pellets
            { "2Rnd_12Gauge_Slug", "", 600, 300, "" },//shotgun slugs
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },//tavor gay 5.56
            { "arifle_Katiba_F", "", 30000, 15000, "" },//katiba 6.5
            { "srifle_DMR_01_F", "", 50000, 25000, "" },//rahim 7.62
            { "arifle_SDAR_F", "", 20000, 10000, "" },//sdar UNDERWATER GUN 5.56
            { "arifle_AK12_F", "", 22000, 11000, "" }, //ak12 7.62
            { "arifle_AKS_F", "", 22000, 11000, "" }, //aks 5.45
            { "arifle_AKM_F", "", 22000, 11000, "" }, //akm 7.62
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //type 115
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, // spar16
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" }, //car 5.8
            { "arifle_AK12U_F", "", 25000, 12500, "" }, //ak12u 
            { "arifle_AK12_GL_F", "", 25000,  12500, "" },// ak12u GL
            { "arifle_RPK12_F", "", 35000, 17500, "" }//rpk
            //{ "arifle_RPK12_lush_f", "", 25000, "" },
            //{ "arifle_RPK12_arid_f", "", 25000, "" }
            //{ "arifle_AK12U_lush_f", "", 25000, "" },
            //{ "arifle_AK12U_arid_f", "", 25000, "" },
            //{ "arifle_AK12_GL_lush_F", "", 25000, "" },
            //{ "arifle_AK12_arid_f", "", 25000, "" },
            //{ "arifle_AK12_lush_f", "", 25000, "" },
            //{ "arifle_AK12_GL_arid_F", "", 25000, "" },            
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 600, 300, "" },
            { "30Rnd_762x39_Mag_F", "", 800, 400, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 500, 250, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 750, 375, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 500, 250, "" },
            { "30Rnd_580x42_Mag_F", "", 600, 300, "" }, //Apex DLC
            //{ "30Rnd_762x39_AK12_Lush_Mag_F", "", 250, 60, "" },
            //{ "30Rnd_762x39_AK12_Lush_Mag_Tracer_F", "", 250, 60, "" },
            { "UGL_FlareWhite_F", "", 400, 200, "" },
            { "UGL_FlareGreen_F", "", 400, 200, "" },
            { "UGL_FlareRed_F", "", 400, 200, "" },
            { "UGL_FlareYellow_F", "", 400, 200, "" },
            { "1Rnd_Smoke_Grenade_shell", "", 600, 300, "" },
            { "1Rnd_SmokeRed_Grenade_shell", "", 600, 300, "" },
            { "1Rnd_SmokeGreen_Grenade_shell", "", 600, 300, "" },
            { "1Rnd_SmokeYellow_Grenade_shell", "", 600, 300, "" },
            { "1Rnd_SmokePurple_Grenade_shell", "", 600, 300, "" },
            { "1Rnd_SmokeBlue_Grenade_shell", "", 600, 300, "" },
            { "1Rnd_SmokeOrange_Grenade_shell", "", 600, 300, "" },
            { "75rnd_762x39_AK12_Mag_F", "", 1200, 600, "" }
            //{ "75rnd_762x39_AK12_Lush_Mag_F", "", 350, 60, "" },
            //{ "75rnd_762x39_AK12_Lush_Mag_Tracer_F", "", 350, 60, "" }
            //{ "30Rnd_762x39_AK12_Lush_Mag_F", "", 250, 60, "" },
            //{ "30Rnd_762x39_AK12_Lush_Mag_Tracer_F", "", 250, 60, "" },
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" },
            { "optic_Hamr_khk_F", "", 1000, 500, "" },
            { "optic_Hamr", "", 1000, 500, "" },
            { "optic_MRD_black", "", 1000, 500, "" },
            { "optic_MRCO", "", 1000, 500, "" },
            { "optic_SOS_khk_F", "", 1000, 500, "" },
            { "optic_SOS", "", 1000, 500, "" },
            { "optic_KHS_tan", "", 1000, 500, "" },
            { "optic_KHS_old", "", 1000, 500, "" },
            { "optic_KHS_hex", "", 1000, 500, "" },
            { "optic_KHS_blk", "", 1000, 500, "" },
            { "optic_ERCO_snd_F", "", 1000, 500, "" },
            { "optic_ERCO_khk_F", "", 1000, 500, "" },
            { "optic_ERCO_blk_F", "", 1000, 500, "" },
            { "optic_DMS_weathered_F", "", 1000, 500, "" },
            { "optic_DMS", "", 1000, 500, "" },
            { "optic_Arco_AK_lush_F", "", 1000, 500, "" },
            { "optic_Arco_AK_blk_F", "", 1000, 500, "" },
            { "optic_Arco_AK_arid_F", "", 1000, 500, "" },
            { "optic_Arco_lush_F", "", 1000, 500, "" },
            { "optic_Arco_ghex_F", "", 1000, 500, "" },
            { "optic_AMS_snd", "", 1000, 500, "" },
            { "optic_Arco", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1000, 500, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 600, 300, "call life_coplevel >= 1" },//flashbang
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 100, 50, "" },//taser
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 1500, 750, "call life_coplevel >= 1" },//taser rifle
            { "SMG_01_F","",1000,500,"call life_coplevel >= 2" },//vermin
            { "SMG_02_F","",1000,500,"call life_coplevel >= 2" },//sting
            { "hgun_ACPC2_F","",1000,500,"call life_coplevel >= 4" },//1911
            { "hgun_Pistol_heavy_01_F","",1500,750,"call life_coplevel >= 5" },//4-five
            { "arifle_MX_Black_F","",2500,1250,"call life_coplevel >= 2" }, //basic black mx    
            { "arifle_SPAR_01_blk_F","",1500,750,"call life_coplevel >= 2" }, //spar 16
            { "arifle_MXC_Black_F","",2500,1250,"call life_coplevel >= 3" },//MXC black
            { "arifle_MXM_Black_F","",2500,1250,"call life_coplevel >= 3" },  //MXM Black
            { "arifle_MX_SW_Black_F","",2750,1375,"call life_coplevel >= 3" },//MXSW Black
            { "SMG_03_TR_black","",2000,1000,"call life_coplevel >= 3" },//p90
            { "SMG_03C_TR_black","",2000,1000,"call life_coplevel >= 3" },//p90
            { "SMG_03_black","",2000,1000,"call life_coplevel >= 3" },//p90
            { "SMG_03C_black","",2000,1000,"call life_coplevel >= 3" },//p90
            { "arifle_SPAR_03_blk_F","",3500,1750,"call life_coplevel >= 3" },//spar 17
            { "srifle_DMR_07_blk_F","",3500,1750,"call life_coplevel >= 4" }, //CMR-76 6.5
            { "srifle_EBR_F","",3500,1750,"call life_coplevel >= 4" }, //mk14 ebr
            { "srifle_DMR_02_F","",3500,1750,"call life_coplevel >= 4" },//mar-10
            { "srifle_DMR_03_F","",3000,1500,"call life_coplevel >= 4" },//mk1 emr
            { "srifle_DMR_04_F","",5000,2500,"call life_coplevel >= 5" },//asp-1 kir 12.7
            { "srifle_DMR_05_blk_F","",5000,2500,"call life_coplevel >= 5" },//cyrus 9.3
            { "LMG_Mk200_F","",4000,2000,"call life_coplevel >= 5" },//mk200 lmg 6.5
            { "srifle_LRR_F","",6000,3000,"call life_coplevel >= 5" },//.408
            { "srifle_GM6_F","",8000,4000,"call life_coplevel >= 6" },//lynx
            { "arifle_ARX_blk_F","",7000,3500,"call life_coplevel >= 3" }//type115 6.5/.50BW
        };  
        mags[] = {
            { "16Rnd_9x21_Mag", "", 100, 50, "" },//16rnd 9mm(taser)
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 100, 50, "" },//taser rifle
            { "11Rnd_45ACP_Mag", "", 150, 75, "" },//4-five
            { "30Rnd_65x39_caseless_black_mag", "", 200, 100, "" },//mx black 30rnd
            { "100Rnd_65x39_caseless_black_mag", "", 300, 150, "" },//mx black 100rnd
            { "30Rnd_9x21_Mag_SMG_02", "", 150, 75, "" },//sting mag
            { "9Rnd_45ACP_Mag", "", 150, 75, "" },//1911
            { "30Rnd_45ACP_Mag_SMG_01", "", 200, 100, "" },//vermin mag
            { "30Rnd_556x45_Stanag", "", 200, 100, "" },//5.56 30 rnd
            { "50Rnd_570x28_SMG_03", "", 200, 100, "" },//p90 mag
            { "20Rnd_762x51_Mag", "", 300, 150, "" },//20rnd 7.62
            { "10Rnd_338_Mag", "", 350, 175, "" },//mar-10
            { "10Rnd_127x54_Mag", "", 350, 175, "" },//asp-1 kir 12.7
            { "10Rnd_93x64_DMR_05_Mag", "", 350, 175, "" },//cyrus 9.3
            { "200Rnd_65x39_cased_Box", "", 400, 200, "" },//mk200
            { "7Rnd_408_Mag", "", 500, 250, "" },//.408
            { "5Rnd_127x108_Mag", "", 500, 250, "" },//lynx
            { "5Rnd_127x108_APDS_Mag", "", 750, 375, "" },//lynx apds
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "" }, //cmr-76 6.5
            { "30Rnd_65x39_caseless_green", "", 200, 100, "" }, //caseless 6.5
            { "10Rnd_50BW_Mag_F", "", 500, 250, "" } //.50BW
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },//9mm supp
            { "muzzle_snds_acp", "", 650, 325, "" },//45 acp supp
            { "muzzle_snds_M", "", 650, 325, "" },//5.56 supp
            { "muzzle_snds_H", "", 650, 325, "" },//6.5 reg supp
            { "muzzle_snds_H_MG", "", 650, 325, "" },//6.5 lmg supp
            { "muzzle_snds_B", "", 650, 325, "" },//7.62 supp
            { "muzzle_snds_338_black", "", 650, 325, "" },//mar-10 supp
            { "muzzle_snds_93mmg", "", 650, 325, "" },//9.3 supp
            { "muzzle_snds_570", "", 650, 325, "" },//p90 supp
            { "acc_flashlight", "", 650, 325, "" },//flashlight
            { "acc_flashlight_smg_01", "", 650, 325, "" },//smg flashlight
            { "acc_flashlight_pistol", "", 650, 325, "" },//pistol light
            { "acc_pointer_IR", "", 650, 325, "" },//IR laser
            { "optic_MRD", "", 650, 325, "" },//4-five RDS
            { "optic_Arco_blk_F", "", 650, 325, "" },//black arco
            { "optic_Hamr", "", 650, 325, "" },//hamr scope
            { "optic_ERCO_blk_F", "", 650, 325, "" },//balck erco
            { "optic_Aco", "", 650, 325, "" },//aco 
            { "optic_ACO_grn", "", 650, 325, "" },//grn aco
            { "optic_Aco_smg", "", 650, 325, "" },//smg aco
            { "optic_ACO_grn_smg", "", 650, 325, "" },//grn smg aco
            { "optic_Holosight", "", 650, 325, "" },//holo
            { "optic_Holosight_smg", "", 650, 325, "" },//smg holo
            { "optic_SOS", "", 650, 325, "" },//MOS scope
            { "optic_MRCO", "", 650, 325, "" },//MRCO
            { "optic_Nightstalker", "", 650, 325, "" },//nightstalker
            { "optic_DMS", "", 650, 325, "" },//DMS Scope
            { "optic_LRPS", "", 650, 325, "" },//LRPS
            { "optic_AMS", "", 650, 325, "" },//AMS Scope
            { "optic_KHS_blk", "", 650, 325, "" },//Khalia Scope
            { "bipod_02_F_blk", "", 650, 325, "" }//Bipod                                                
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
