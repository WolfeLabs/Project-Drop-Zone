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

class storerob {
    expToAdd = 50;
    message = "Store Robbery";
};

class doorkick {
    expToAdd = 25;
    message = "Breaking & Entering";
};

class feddoorkick {
    expToAdd = 50;
    message = "Federal Reserve Robbery";
};

class vaultkick {
    expToAdd = 300;
    message = "Safe Cracker";
};

class vaultknock {
    expToAdd = 50;
    message = "Do Bomb Dogs See Color";
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
    expToAdd = 10;
    message = "Quota Met";
};

class basicdoor {
    expToAdd = 25;
    message = "Resecured Door";
};
class feddoor {
    expToAdd = 50;
    message = "Resecured Federal Reserve Door";
};
class vault {
    expToAdd = 100;
    message = "Resecured Vault";
};

class defuse {
    expToAdd = 116;
    message = "Bomb Defused";
};


//EMS Experience actions

class jaws {
    expToAdd = 15;
    message = "Patient Access Achieved";
};

//EXP set to a routine 
class OfficerDuty {
    expToAdd = 25;
    message = "On-Duty";
};

class PlayReward {
    expToAdd = 50;
    message = "Thanks For Playing Project Drop Zone!";
};

//admin use only
class PowerLevel {
    expToAdd = 200;
	message = "Experience Reward";
};



class Example {
    expToAdd = 100;
	message = "Customizable Message";
};