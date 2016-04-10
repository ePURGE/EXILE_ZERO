/*
© 2015 Zenix Gaming Ops
Developed by Rod-Serling and Vishpala

All rights reserved.

Function:
	AVS_configuration - Defines the configuration for AVS.
*/

// This array contains world center and radius for maps supported.
AVS_WorldInfo =
[
    ["Altis", [15350, 15350, 0], 15350],
    ["Esseker", [6150,6150,0], 6150],
    ["Chernarus", [7700,8500,0], 11000],
	["Lingor3", [4968.00,4938.00,0], 10000],
	["fallujah", [4989.7539,5113.7783,0], 1700],
	["Napf", [10459.87,9256.2295,0], 8000]
];

//**************************************************************

// Setting this to true will disable thermal for all vehicles.
AVS_DisableVehicleThermalGlobal = true;

// If the above is not set to true, then this will disable thermal for specific classes of vehicles.
AVS_DisableVehicleThermal =
[
//	"VehicleClassName"
];

// Setting this to true will disable NVGs for all vehicles.
AVS_DisableVehicleNVGsGlobal = true;

// If the above is not set to true, then this will disable thermal for specific classes of vehicles.
AVS_DisableVehicleNVG =
[
//	"VehicleClassName"
];

// Any weapon classes listed here will be sanitized from all vehicles.
AVS_GlobalWeaponBlacklist =
[
//	"WeaponClassName"
	"missiles_DAR" 				// Removes DAR missiles from all vehicles
];

// Any ammo classes listed here will be sanitized from all vehicles.
AVS_GlobalAmmoBlacklist =
[
//	"AmmoClassName"
	"24Rnd_missiles"
];

// You may remove specific weapon classes from specific vehicle classes here.
AVS_VehicleWeaponBlacklist =
[
//	["VehicleClassName", ["WeaponClassName1", "WeaponClassName2", ...]]
];

// You may remove specific ammo classes from specific vehicle classes here.
AVS_VehicleAmmoBlacklist =
[
//	["VehicleClassName", ["AmmoClassName1", "AmmoClassName2", ...]]
];

//**************************************************************

// Set to false to disable the entire rearm system.
AVS_RearmSystemActive = true;

// Distance away from an object to get the rearm option.
AVS_RearmDistance = 12;

// Number of seconds it takes to rearm. (NOT YET IMPLEMENTED)
AVS_RearmTime = 15;

// Disabled rearming at ammo trucks.
AVS_DisableStockRearm = true;

// Objects of this type will give the "rearm" action.
AVS_RearmObjects =
[
//	"ClassName"
	"Land_Repair_center"
];

// Default cost of a magazine if not found in AVS_RearmCosts
AVS_RearmCostDefault = 99999999;

// Costs of individual magazines.
AVS_RearmCosts =
[
//	["MagazineClassName", cost]
	["Laserbatteries", 0],						// Laser Designator Batteries
	["SmokeLauncherMag", 20],					// Smoke CM magazine
	["200Rnd_127x99_mag_Tracer_Yellow", 400],	// Strider HMG gun
	["200Rnd_127x99_mag_Tracer_Red", 400],		// Hunter HMG gun
	["168Rnd_CMFlare_Chaff_Magazine", 20],		// Helicopter flares
	["2000Rnd_65x39_Belt_Tracer_Red", 4000],	// Ghosthawk guns
	["100Rnd_127x99_mag_Tracer_Yellow", 200],	// Armed Offroad magazine.
	["5000Rnd_762x51_Belt", 1000]				// Pawnee belt
];

//**************************************************************

// Disabled stock refueling at fuel trucks / gas pumps.
AVS_DisableStockRefuel = true;

AVS_RefuelSystemActive = true;
AVS_RefuelDistance = 8;
AVS_RefuelObjects =
[
	"Land_fs_feed_F", // Gas Station Pump
	"Land_A_FuelStation_Feed"
];

AVS_RefuelCost = 20; // 5 poptabs/liter

//**************************************************************

AVS_DebugMarkers = false;
AVS_PersistentVehiclesPinCode = "0000";
AVS_PersistentVehiclesAmmoPercent = 100; // 100 = full ammo, 50 = half ammo, 0 = no ammo
AVS_PersistentVehiclesFuelPercent = 10; // 100 = full, 50 = half, 0 = empty

//**************************************************************

AVS_useSpawnedPersistentVehiclesLocation = true; // Spawns persistent vehicles at specified locations
AVS_LocationSearchRadius = 0; // Set to 0 for exact positioning.
AVS_spawnedPersistentVehiclesLocation =
[
//["ID Tag", ["ClassName", "ClassName", ...], [DamageMin, DamageMax], NumberToPersist, [[Location1], [Location2], ...]]
["RandomHuey1",["UH1H_Clo","UH1H_Closed_TK"], [0.8, 0.99], 3,[ [4663.81,4811.26,0],[18310.3,2289.93,0],[14470.9,16800.3,0] ]], /* UH1H_M240 - UH1H_M240_TK */
["RandomBird1",["Exile_Chopper_Hummingbird_Green"], [0.8, 0.99], 3,[ [7606.31,17737.3,0],[10635,4828.48,0],[10155.4,7454.61,0] ]]

];

//**************************************************************

AVS_useSpawnedPersistentVehiclesRoadside = true; // Spawns persistent vehicles near roads.
AVS_RoadSearchRadius = 80; // Max distance to the road
AVS_spawnedPersistentVehiclesRoadside =
[
	//["ID Tag", ["Class1", "Class2"], [DamageMin, DamageMax], NumberToPersist],
["RoadVehicles", [
"CUP_C_Skoda_White_CIV",
"CUP_C_Datsun_4seat",
"CUP_C_Skoda_Red_CIV",
"CUP_C_Datsun_Plain",
"CUP_C_Skoda_Blue_CIV",
"CUP_C_Datsun_Covered",
"CUP_C_Skoda_Green_CIV",
"CUP_C_Datsun_Tubeframe",
"CUP_O_Ural_RU",
"CUP_O_Ural_Open_SLA",
"Exile_Car_Lada_Green",
"CUP_B_Ural_CDF",
"CUP_O_Ural_Open_TKA",
"Exile_Car_Lada_Red",
"CUP_O_Ural_CHDKZ",
"CUP_O_Ural_Open_RU",
"Exile_Car_Lada_White",
"CUP_O_Ural_TKA",
"CUP_O_Ural_Open_CHDKZ",
"Exile_Car_Lada_Hipster",
"CUP_O_Ural_SLA",
"CUP_B_Ural_Open_CDF",
"Exile_Car_Volha_Blue",
"CUP_I_Ural_UN",
"Exile_Car_Volha_White",
"Exile_Car_Volha_Black",
"Exile_Car_OldTractor_Red"
], [0.20, 0.98], 10]

];

//**************************************************************
//["ID Tag", ["Class1", "Class2"], [DamageMin, DamageMax], NumberToPersist], OR ["ID Tag", ["Class1", "Class2"], Damage, NumberToPersist]
AVS_useSpawnedPersistentVehiclesRandom = true; // Spawns persistent vehicles completely randomly.
AVS_spawnedPersistentVehiclesRandom = 
[
	
["RandomVehicles", [
"CUP_C_Skoda_White_CIV",
"CUP_C_Datsun_4seat",
"CUP_C_Skoda_Red_CIV",
"CUP_C_Datsun_Plain",
"CUP_C_Skoda_Blue_CIV",
"CUP_C_Datsun_Covered",
"CUP_C_Skoda_Green_CIV",
"CUP_C_Datsun_Tubeframe",
"Exile_Car_Volha_Black",
"CUP_C_Golf4_black_Civ",
"Exile_Car_Volha_White",
"CUP_C_Golf4_whiteblood_Civ",
"Exile_Car_Lada_Hipster",
"CUP_C_Golf4_camo_Civ",
"Exile_Car_Lada_Red",
"CUP_C_Golf4_camodigital_Civ",
"Exile_Car_Volha_Blue",
"CUP_C_Golf4_camodark_Civ",
"CUP_B_Ural_Open_CDF",
"Exile_Car_Lada_Green",
"CUP_C_Ural_Civ_03",
"Exile_Car_Lada_White",
"CUP_O_LR_Transport_TKM",
"CUP_C_Ural_Civ_01",
"CUP_B_LR_Transport_GB_W",
"CUP_C_Ural_Civ_02",
"CUP_B_LR_Transport_GB_D",
"CUP_O_Ural_Open_RU",
"CUP_O_LR_Transport_TKA",
"CUP_O_Ural_Open_CHDKZ",
"CUP_C_UAZ_Open_TK_CIV",
"CUP_C_LR_Transport_CTK",
"CUP_O_UAZ_Unarmed_TKA",
"CUP_B_LR_Transport_CZ_W",
"CUP_O_UAZ_Open_TKA",
"CUP_B_LR_Transport_CZ_D",
"CUP_O_UAZ_Unarmed_CHDKZ",
"CUP_I_LR_Transport_RACS",
"Exile_Car_OldTractor_Red",
"CUP_B_UAZ_Unarmed_CDF",
"CUP_O_Ural_RU",
"CUP_O_UAZ_Unarmed_RU",
"CUP_B_HMMWV_Unarmed_USA",
"CUP_I_UAZ_Unarmed_UN",
"CUP_O_Ural_Open_RU",
"CUP_C_UAZ_Unarmed_TK_CIV",
"CUP_B_UAZ_Unarmed_ACR",
"CUP_B_HMMWV_Transport_USA",
"CUP_B_UAZ_Open_CDF",
"CUP_O_UAZ_Open_CHDKZ",
"CUP_O_UAZ_Open_RU",
"CUP_C_Ural_Civ_02",
"CUP_I_UAZ_Open_UN",
"CUP_O_Ural_Open_TKA",
"CUP_B_UAZ_Open_ACR",
"CUP_B_HMMWV_Ambulance_ACR",
"CUP_B_Ural_CDF",
"CUP_O_Ural_CHDKZ",
"CUP_O_Ural_TKA",
"CUP_O_Ural_SLA",
"CUP_I_Ural_UN",
"CUP_B_HMMWV_Ambulance_USA",
"CUP_C_Ural_Civ_01",
"CUP_B_HMMWV_Ambulance_USMC",
"CUP_C_Ural_Civ_03",
"CUP_B_HMMWV_Unarmed_USMC",
"CUP_B_Ural_Open_CDF",
"CUP_O_Ural_Open_CHDKZ",
"CUP_O_Ural_Open_SLA",
"Exile_Car_OldTractor_Red"
], [0.50, 0.98], 70],

/*amored*/

["RandomAmmored", [
//"CUP_B_HMMWV_M1114_USMC",
"CUP_B_Jackal2_L2A1_GB_W",
"CUP_B_M113_USA",
"CUP_B_HMMWV_M2_USMC",
"CUP_I_LR_MG_RACS",
"CUP_B_HMMWV_M2_USA",
"CUP_B_LR_MG_CZ_W",
"CUP_I_M113_RACS",
"CUP_B_LR_MG_CZ_W",
"CUP_I_Datsun_PK",
"CUP_B_LR_MG_GB_W",
"CUP_I_LR_MG_RACS",
"CUP_O_Datsun_PK",
"CUP_O_LR_MG_TKA",
"CUP_I_Datsun_PK",
"CUP_O_LR_MG_TKM",
"CUP_O_Datsun_PK",
"CUP_O_Datsun_PK",
"CUP_I_Datsun_PK",
"CUP_B_LR_MG_GB_W",
"CUP_I_Datsun_PK_TK",
"CUP_B_M113_Med_USA",
"CUP_I_Datsun_PK_TK",
"CUP_I_M113_Med_RACS",
"CUP_I_M113_UN",
"CUP_I_Datsun_PK_TK",
"CUP_I_M113_Med_UN",
"CUP_O_LR_MG_TKA",
"CUP_O_M113_Med_TKA",
"CUP_O_LR_MG_TKM",
"CUP_O_M113_TKA"
], [0.50, 0.98], 20]


];
