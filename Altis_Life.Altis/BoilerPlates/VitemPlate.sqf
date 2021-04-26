 //Altis Life 5.0 Vitem Template
 
class corn_unprocessed {
        variable = "cornUnprocessed";
        displayName = "STR_Item_cornu";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\corn.paa";
        processedItem = "tobacco_processed";
    };
 
    class corn_processed {
        variable = "cornProcessed";
        displayName = "STR_Item_cornp";
        weight = 2;
        buyPrice = -1;
        sellPrice = 3500;
        illegal = false;
        edible = -1;
        icon = "icons\bottle.paa";
    };
//////////////////////////////////////////////////// 
        <Key ID="STR_Item_cornu">
            <Original>Corn</Original>
        </Key>
        <Key ID="STR_Item_cornp">
            <Original>Texas 2 Step</Original>
        </Key> 
         <Key ID="STR_License_moonshine">
            <Original>Moonshine Training</Original>
        </Key> 
         <Key ID="STR_Process_corn">
            <Original>Brewing Moonshine</Original>
        </Key>
        <Key ID="STR_MAR_Bar_Trader">
            <Original>House's Basement</Original>
        </Key>
/////////////////////////////////////////////////////
 
//Vitem Shop
class bar {
        name = "STR_MAR_Bar_Trader";
        side = "civ";
        conditions = "";
        items[] = { "corn_processed" };
    };
 
///Shop 
this addAction[localize"STR_MAR_Bar_Trader",life_fnc_virt_menu,"bar",1.5,true,true,"","true",5];  ///Shop 
 
/// Processor
this enableSimulation false; this allowDamage false; this addAction[localize"STR_Process_corn",life_fnc_processAction,"corn",0,false,false,"",' life_inv_cornUnprocessed > 0 && !life_is_processing && !life_action_inUse'];  this addAction[format ["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "corn" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "corn" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"corn",0,false,false,"",' !license_civ_corn && playerSide isEqualTo civilian '];
 
//Process config
class corn {
        MaterialsReq[] = {{"corn_unprocessed",2}};
        MaterialsGive[] = {{"corn_processed",1}};
        Text = "STR_Process_corn";
        //ScrollText = "Process Moonshine";
        NoLicenseCost = 150000; //optional price
    };
//License
    class corn {
        variable = "corn";
        displayName = "STR_License_moonshine";
        price = 1000000;
        illegal = true;
        side = "civ";
    };
 
//////////Example to require two items to Process
this addAction[localize"STR_Process_MethP",life_fnc_processAction,"methp",0,false,false,"",' life_inv_battery,life_inv_sudafad > 0 && !life_is_processing && !life_action_inUse',5];
 
class corn {
        MaterialsReq[] = {{"corn_unprocessed",1},{"corn_unprocessed",1}};
        MaterialsGive[] = {{"corn_processed",1}};
        Text = "STR_Process_corn";
        //ScrollText = "Process Moonshine";
        NoLicenseCost = 150000; //optional price
    };
