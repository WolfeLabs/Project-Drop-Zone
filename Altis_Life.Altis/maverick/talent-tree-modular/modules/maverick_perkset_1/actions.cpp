/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!

    edits by: WolfeLabs(zwinkadink)


Example: 
        ["Class"] spawn mav_ttm_fnc_addExp;


---------------------------------------------------------------------------*/

class VehiclePurchased {
    expToAdd = 5;
	message = "Vehicle Purchased";
};

class ItemProcessed {
    expToAdd = 2;
	message = "Items Processed";
};

class VehicleLockpicked {
    expToAdd = 5;
	message = "Vehicle Lockpicked";
};

//Gas Delivery Experience per distance
class GasDelivery20km {
    expToAdd = 100;
	message = "Fuel Delivered over 20km From Supply";
};

class GasDelivery15km {
    expToAdd = 75;
	message = "Fuel Delivered over 15km From Supply";
};

class GasDelivery10km {
    expToAdd = 50;
	message = "Fuel Delivered over 10km From Supply";
};

class GasDelivery5km {
    expToAdd = 25;
	message = "Fuel Delivered over 5km From Supply";
};

class GasDelivery1km {
    expToAdd = 10;
	message = "Fuel Delivered over 1km From Supply";
};

class GasDeliveryLess1km {
    expToAdd = 5;
	message = "Fuel Delivered under 1km From Supply";
};
//Gas Delivey End


class RepairComplete {
    expToAdd = 5;
    message = "Repair Completed";
};

class robtrue {
    expToAdd = 2;
    message = "Mugging";
};

class civup {
    expToAdd = 4;
    message = "Upstanding Citizen";
};

class gather {
    expToAdd = 1;
    message = "Manual Labor";
};

class minning {
    expToAdd = 1;
    message = "Manual Labor but with a tool";
};

class dropper {
    expToAdd = 50;
    message = "grubdashddoormates Posthub EATS ! ! Delivered";
};

class gutting {
    expToAdd = 5;
    message = "I'll take pleasure in gutting you boy!";
};

//Cop Experience actions
class arrest {
    expToAdd = 10;
    message = "Keeping the Streets Clean";
};

class impound {
    expToAdd = 10;
    message = "Impound Called";
};

class citation {
    expToAdd = 2;
    message = "Quota Meet"
};


class OfficerDuty {
    expToAdd = 25;
    message = "On-Duty"
};

//admin use only
class PowerLevel {
    expToAdd = 200;
	message = "Experence Reward";
};

class PlayReward {
    expToAdd = 50;
    message = "Thanks For Playing Project Drop Zone!";
};

class Example {
    expToAdd = 100;
	message = "Customizable Message";
};