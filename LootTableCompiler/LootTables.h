/*
class IndustrialNamalsk {table = "IndustrialNamalsk";};
class HospitalNamalsk {table = "HospitalNamalsk";};
class HospitalSpecialNamalsk {table = "HospitalSpecialNamalsk";};
class SuperMarketNamalsk {table = "SuperMarketNamalsk";};
class OfficeNamalsk {table = "OfficeNamalsk";};
class ResidentialNamalsk {table = "ResidentialNamalsk";};
class FarmNamalsk {table = "FarmNamalsk";};
class VehicleServiceNamalsk {table = "VehicleServiceNamalsk";};
class MilitaryNamalsk {table = "MilitaryNamalsk";};
class MilitarySpecialNamalsk {table = "MilitarySpecialNamalsk";};
class MilitarySpecialNamalskWinter {table = "MilitarySpecialNamalskWinter";};
class HeliCrashNamalsk {table = "HeliCrashNamalsk";};
class MilitaryHighLootNamalsk {table = "MilitaryHighLootNamalsk";};
*/


/*
	Loot Tables
*/

////////////////////////////////////////////////////////////////////////////////
> ToiletSpecialTable //tolietpapers
0.98, TrashTolietPapers

> SupermarketPubsTable //pub buildings
0.6, Trash
0.11, FoodDrinks
0.02, MedicalItems
0.22, Table_GenericNamalskBasics
0.08, Pistols
0.04, SMG



///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> SuperMarketNamalsk //Shop
0.6, Trash
0.1, FoodDrinks
0.02, MedicalItems

///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> HospitalSpecialNamalsk
0.98, MedicalItemsHospital
0.02, Trash

> HospitalNamalsk //Medical
0.95, MedicalItems
0.5, Trash



///////////////////////////////////////////////////////////////////////////////
// Offices
///////////////////////////////////////////////////////////////////////////////
> OfficeNamalsk //CivillianLowerClass
0.07, FoodDrinks
0.02, Table_GenericNamalskBasics
0.08, Pistols
0.14, SMG
0.14, ShotGuns
0.15, CivilianBackpacks
0.11, CivilianVestHeadGear
0.08, PistolAmmo
//0.18, CivilianClothing
0.1, SMGAmmo
0.26, Trash
0.26, Table_GenericNamalskNoFood

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> ResidentialNamalsk //CivillianUpperClass
0.49, Trash
0.08, Table_GenericNamalskFood
0.25, Table_GenericNamalskBasics
0.1, Pistols
0.03, ShotGuns
0.01, TRYK_Backpacks_CIV //0.01, CivilianBackpacks
0.06, TRYK_Vests_CIV //0.07, CivilianVestHeadGear
0.03, TRYK_HeadGear_CIV
0.04, CivilianVestHeadGearCUP
0.03, PistolAmmo
0.06, TRYK_Clothing_CIV //0.07, CivilianClothing
//0.08, CivilianClothingCUP
0.02, FoodDrinks


///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> FarmNamalsk //Industrial
0.11, FoodDrinks
0.28, Table_GenericNamalskBasics
0.09, Pistols
0.11, SMG
0.14, ShotGuns
0.02, TRYK_Backpacks_CIV //0.02, CivilianBackpacks
0.06, TRYK_Vests_CIV
0.06, CivilianVestHeadGearCUP
0.08, PistolAmmo
0.06, TRYK_Clothing_CIV //
//0.05, CivilianClothingCUP
//0.14, SMGAmmo
0.26, Table_GenericNamalskNoFood
0.07, Vehicle



///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> IndustrialNamalsk //Factories
0.05, Table_GenericNamalskNoFood
0.8, IndustrialItems
0.15, Trash


///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleServiceNamalsk //VehicleService
0.55, Trash
0.45, Vehicle



///////////////////////////////////////////////////////////////////////////////
// Military Normal /*0.04 Food 0.1 Med 0.15 NoFood 3.5 Mili 0.30 Trash*/
///////////////////////////////////////////////////////////////////////////////
> MilitaryNamalsk 
0.02, MedicalItems 
0.21, Table_GenericNamalskNoFood
3.3, Table_MilitaryNamalsk
//0.28, AssaultRifles
0.13, SMGAmmo
0.5, AssaultRifleAmmo
0.03, AssaultAttachments
0.01, MilitaryClothing
0.08, TRYK_Clothing_ARMY
0.01, MilitaryVestHeadGear
0.04, TRYK_Vests_ARMY
0.02, TRYK_HeadGear_ARMY
0.08, Trash
0.03, Chemlights
0.02, RoadFlares
0.03, SmokeGrenades
0.01, Restraints

///////////////////////////////////////////////////////////////////////////////
// MilitarySpecial
///////////////////////////////////////////////////////////////////////////////
> MilitarySpecialNamalsk //Tourist
0.03, MedicalItems 
0.45, Table_GenericNamalskNoFood
3.2, Table_MilitaryNamalsk
0.12, AssaultRifles
0.11, SMG
//0.09, SMGAmmo
0.17, MachineGun
0.11, MachineGunAmmo
0.35, AssaultRifleAmmo
0.05, AssaultAttachments
0.08, MilitaryClothing
0.08, TRYK_Clothing_ARMY
0.02, MilitaryVestHeadGear
0.02, TRYK_Backpacks_ARMY
0.08, Trash
0.03, Chemlights
0.02, RoadFlares
0.03, SmokeGrenades
0.01, Restraints


///////////////////////////////////////////////////////////////////////////////
// MilitaryWinter
///////////////////////////////////////////////////////////////////////////////
> MilitarySpecialNamalskWinter //new
0.02, MedicalItems 
0.18, Table_GenericNamalskNoFood
2.2, Table_MilitaryNamalsk
0.3, SniperRifles
0.12, AssaultRifles
0.17, MachineGun
0.05, SniperRiflesAmmo
0.22, AssaultRifleAmmo
0.05, SniperAttachments
0.08, MilitaryClothing
0.08, TRYK_Clothing_ARMY
0.02, MilitaryVestHeadGear
0.04, TRYK_Vests_ARMY
0.02, TRYK_HeadGear_ARMY
0.02, TRYK_Backpacks_ARMY
0.04, Trash
0.01, MilitaryItems_Special
0.02, Ghillies
0.03, Chemlights
0.02, RoadFlares
0.02, SmokeGrenades
0.01, Restraints


///////////////////////////////////////////////////////////////////////////////
// Super-Special
///////////////////////////////////////////////////////////////////////////////
> MilitaryHighLootNamalsk
0.15, Table_GenericNamalskNoFood
2.3, Table_HighLootNamalsk
0.25, SniperRifles
0.24, MachineGun
0.12, MachineGunAmmo
0.13, SniperRiflesAmmo
0.11, SniperAttachments
0.02, MilitaryItems_Special
0.01, Ghillies
0.01, UGLSmokes
0.03, UGLFlares
0.05, MilitaryClothing
0.05, TRYK_Clothing_ARMY
0.02, MilitaryVestHeadGearSpecial
0.02, TRYK_Backpacks_ARMY
0.04, Trash
0.03, Chemlights
0.02, RoadFlares
0.02, SmokeGrenades
0.01, Restraints


> HeliCrashNamalsk //Helicrash
1.1, Trash
0.6, SMG
0.3, SniperRifles
0.07, MilitaryItems_Special
0.5, SniperRiflesAmmo
0.03, Electronics
0.01, Explosives
