/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/


class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };

    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };

    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",(1 * floor (missionNamespace getVariable ["mav_ttm_var_generalgoodsMultiplier", 1]))}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };

    //Drug processes below
    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",(1 * floor (missionNamespace getVariable ["mav_ttm_var_cocaineMultiplier", 1]))}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };

      class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",(1 * floor (missionNamespace getVariable ["mav_ttm_var_heroinMultiplier", 1]))}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };

    class ecstasy {
        MaterialsReq[] = {{"mdma_ecstasy",1}}; // Material that will be processed (we will loose them)
        MaterialsGive[] = {{"ecstasy",(1 * floor (missionNamespace getVariable ["mav_ttm_var_ecstasyMultiplier", 1]))}}; // Material that will be generated (we will get them)
        Text = "STR_Process_Ecstasy"; // Text that you show on Processing NPC - We already set it up on stringtables.xml
        //ScrollText = "Process Ecstasy";
        NoLicenseCost = 2000; // Price that will costs if the player don't have the license to process it.
    };

    class meth {
        MaterialsReq[] = {{"methi",1}}; // Material that will be processed (we will loose them)
        MaterialsGive[] = {{"methp",(1 * floor (missionNamespace getVariable ["mav_ttm_var_methMultiplier", 1]))}}; // Material that will be generated (we will get them)
        Text = "STR_Process_Meth"; // Text that you show on Processing NPC - We already set it up on stringtables.xml
        //ScrollText = "Process Meth";
        NoLicenseCost = 2000; // Price that will costs if the player don't have the license to process it.
    };

    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",(1 * floor (missionNamespace getVariable ["mav_ttm_var_weedMultiplier", 1]))}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };

    
};
