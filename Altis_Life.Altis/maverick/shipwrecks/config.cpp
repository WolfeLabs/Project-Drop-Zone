/*
	Author: Maverick Applications
	Desc: Altis Life Shipwreck
*/

//Customize your settings to fit your server setup!
class Maverick_Shipwrecks {

    //How often (in seconds) should a shipwreck spawn, if no wreck is on the map?
    ShipwreckInterval = 3600; //1800 = 30min

    //Define the possible locations for your shipwrecks.
    //getPosATL format -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
	Positions[] = {
		{8560.86,9079.11,0},
        {13825,14027.3,0},
        {12472.9,10307.5,0},
        {22343.4,12477.7,0},
        {23374.7,15375.3,0},
        {22960.5,14187.9,0},
        {21433.2,20477.8,0},
        {18687.8,19150.8,0},
        {2625.82,10861.1,0},
        {2555.3,13775,0}
	};

    //Define the radius, in which the wreck randomly spawns around the given center position
    Radius = 250;

    //Random number Gen Diamond
    Drandom = floor (random [20, 50,100]);
    //Random number Gen GoldBars
    Grandom = floor (random [2, 8, 18]);

    //Define the possible sets of virtual items the user can loot from the wreck.
    //{ { "itemname1", amount }, { "itemname2", amount }, { "itemname3", amount } }
	ShipLoot[] = {
        { { "cocaineProcessed", 12 }, { "Methp", 14 } },
        { { "ecstasy", 20 },{"marijuana",10 } },
        { { "goldbar", 6 } },
        { { "diamondCut", Drandom  } },
        { { "goldbar", Grandom  } }

	};

	//What shall be displayed as text to gather the items from the ship? (The text of the addAction ingame)
	ShipLootText = "Retrieve the loot";

    //The message when the user has got all the loot successfully.
    ShipLootSuccess = "You successfully claimed the wreck's loot for you!";

    //The message in case something fails, or the user can not carry all the items.
    ShipLootFail = "You can not carry all the loot. Make some room first!";

	//Define the message, that should appear when a shipwreck spawns (broadcasted to all clients).
	SpawnMSG = "SHIPWRECK\n\nA sunken ship has been located! It may contain important items and it has been marked on your map!";

    //Define the message, that should appear when a shipwreck disappears after a user looted it (broadcasted to all clients).
	DeleteMSG = "SHIPWRECK\n\nThe ship has been successfully looted and has despawned!";
};


/*
 {8560.86,9079.11,0},
 {13825,14027.3,0},
 {12472.9,10307.5,0},
 {22343.4,12477.7,0},
 {23374.7,15375.3,0},
 {22960.5,14187.9,0},
 {21433.2,20477.8,0},
 {18687.8,19150.8,0},
 {2625.82,10861.1,0},
 {2555.3,13775,0}
*/
