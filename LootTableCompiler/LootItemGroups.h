/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	> <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Tomato.
*/
	
/*
	Item Groups
*/

> TrashTolietPapers
0.98, Exile_Item_ToiletPaper



///////////////////////////////////////////////////////////////////////////////
// Trash or items not currently being used
///////////////////////////////////////////////////////////////////////////////

> Trash
0.25, Exile_Item_Can_Empty
0.11, Exile_Item_Can_Empty_Blue
//0.14, Exile_Item_PlasticBottleEmpty
0.11, Exile_Item_Can_Empty_Orange
0.11, Exile_Item_Can_Empty_White
//0.11, Exile_Item_ToiletPaper
0.14, Exile_Item_Can_Empty_Green
0.05, Exile_Item_Magazine01
0.03, Exile_Item_Magazine02
0.02, Exile_Item_Magazine03

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> FoodDrinks
0.03, Exile_Item_InstantCoffee
0.05, Exile_Item_Noodles
0.01, Exile_Item_Beer
0.05, Exile_Item_Spirit
0.04, Exile_Item_ChristmasTinner
0.04, Exile_Item_CatFood
0.01, Exile_Item_MountainDupe
0.01, Exile_Item_BakedBeans
0.01, Exile_Item_PowerDrink
0.02, Exile_Item_GloriousKnakworst
0.01, Exile_Item_EnergyDrink
0.01, Exile_Item_TacticalBacon
0.05, Exile_Item_Moobar
0.03, Exile_Item_SausageGravy
0.01, Exile_Item_EMRE
0.04, Exile_Item_BBQSandwich
0.04, Exile_Item_PlasticBottleDirtyWater
0.05, Exile_Item_Franta
0.05, Exile_Item_BeefParts
0.06, Exile_Item_Raisins
0.02, Exile_Item_PlasticBottleFreshWater
0.04, Exile_Item_Canteen
0.07, Exile_Item_SeedAstics
0.02, Exile_Item_Waterpure
0.01, Exile_Item_Dogfood
0.03, Exile_Item_RiceBox
0.04, Exile_Item_Cereal
0.03, Exile_Item_Surstromming
0.04, Exile_Item_Cheathas
0.02, Exile_Item_Redgull
0.01, Exile_Item_CookingPot
0.02, Exile_Item_Matches
0.01, Exile_Item_CanOpener
0.02, Exile_Item_Can_Empty

///////////////////////////////////////////////////////////////////////////////
// Medical Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItemsHospital
0.17, Exile_Item_Bandage
0.18, Exile_Item_PainKillers
0.16, Exile_Item_Vishpirin
0.15, Exile_Item_Antibiotic
0.14, Exile_Item_Bloodbag
0.13, Exile_Item_InstaDoc
0.04, Exile_Item_HeatPack

> MedicalItems
0.23, Exile_Item_Bandage
0.08, Exile_Item_PainKillers
0.18, Exile_Item_Vishpirin
0.20, Exile_Item_HeatPack
0.17, Exile_Item_Antibiotic
0.02, Exile_Item_Bloodbag
0.11, Exile_Item_VitaminBottle
0.01, Exile_Item_InstaDoc




///////////////////////////////////////////////////////////////////////////////
// Pistols
///////////////////////////////////////////////////////////////////////////////

> Pistols
0.24, CUP_hgun_Makarov //CUP_8Rnd_9x18_Makarov_M
0.22, CUP_hgun_Colt1911 //CUP_7Rnd_45ACP_1911
0.2, CUP_hgun_SA61 //CUP_20Rnd_B_765x17_Ball_M
0.05, CUP_hgun_Glock17 //CUP_17Rnd_9x19_glock17
0.2, CUP_hgun_MicroUzi //CUP_30Rnd_9x19_UZI
0.07, CUP_hgun_M9 //CUP_15Rnd_9x19_M9
0.1, CUP_hgun_Compact //CUP_10Rnd_9x19_Compact (CUP_18Rnd_9x19_Phantom)
0.01, CUP_hgun_PB6P9 //CUP_8Rnd_9x18_MakarovSD_M
0.01, CUP_hgun_TaurusTracker455 //CUP_6Rnd_45ACP_M

> PistolAmmo
0.24, CUP_8Rnd_9x18_Makarov_M //CUP_hgun_Makarov
0.22, CUP_7Rnd_45ACP_1911 //CUP_hgun_Colt1911
0.2, CUP_20Rnd_B_765x17_Ball_M //CUP_hgun_SA61
0.05, CUP_17Rnd_9x19_glock17 //CUP_hgun_Glock17
0.2, CUP_30Rnd_9x19_UZI //CUP_hgun_MicroUzi
0.07, CUP_15Rnd_9x19_M9 //CUP_hgun_M9
0.1, CUP_10Rnd_9x19_Compact //CUP_hgun_Compact (CUP_18Rnd_9x19_Phantom)
0.01, CUP_8Rnd_9x18_MakarovSD_M //CUP_hgun_PB6P9
0.01, CUP_6Rnd_45ACP_M //CUP_hgun_TaurusTracker455


///////////////////////////////////////////////////////////////////////////////
// SMG
///////////////////////////////////////////////////////////////////////////////

> SMG
0.25, CUP_hgun_MicroUzi //CUP_30Rnd_9x19_UZI
0.2, CUP_smg_bizon //CUP_64Rnd_9x19_Bizon_M
0.13, CUP_smg_MP5A5 //CUP_30Rnd_9x19_MP5
0.2, CUP_hgun_SA61 //CUP_20Rnd_B_765x17_Ball_M
0.17, CUP_smg_EVO //CUP_30Rnd_9x19_EVO
0.05, CUP_smg_MP5SD6 //CUP_30Rnd_9x19_MP5


> SMGAmmo
0.24, CUP_30Rnd_9x19_UZI //CUP_hgun_MicroUzi
0.18, CUP_64Rnd_9x19_Bizon_M //CUP_smg_bizon
0.14, CUP_30Rnd_9x19_MP5 //CUP_smg_MP5A5
0.18, CUP_20Rnd_B_765x17_Ball_M //CUP_hgun_SA61
0.17, CUP_30Rnd_9x19_EVO //CUP_smg_EVO
0.05, CUP_optic_HoloBlack //SMGAttachments
0.04, CUP_optic_ZDDot //SMGAttachments


///////////////////////////////////////////////////////////////////////////////
// ShotGuns + Ammo
///////////////////////////////////////////////////////////////////////////////

> ShotGuns
0.15, CUP_10x_303_M
0.11, CUP_srifle_LeeEnfield //CUP_10x_303_M
0.18, CUP_8Rnd_B_Saiga12_74Slug_M
0.13, CUP_sgun_Saiga12K //CUP_8Rnd_B_Saiga12_74Slug_M
0.1, CUP_20Rnd_B_AA12_74Slug
0.07, CUP_sgun_AA12 //CUP_20Rnd_B_AA12_Pellets (CUP_20Rnd_B_AA12_74Slug)
0.13, CUP_20Rnd_B_AA12_Pellets
0.05, CUP_sgun_M1014 //CUP_8Rnd_B_Beneli_74Slug
0.08, CUP_8Rnd_B_Beneli_74Slug



///////////////////////////////////////////////////////////////////////////////
// AssaultRifles
///////////////////////////////////////////////////////////////////////////////


> AssaultRifles
0.05, CUP_arifle_AKS //CUP_30Rnd_762x39_AK47_M
0.05, CUP_arifle_AKS74U //CUP_30Rnd_545x39_AK_M
0.01, CUP_arifle_G36K_camo //CUP_30Rnd_556x45_G36
//0.05, CUP_arifle_AKM //CUP_30Rnd_545x39_AK_M
0.05, CUP_arifle_AK74 //CUP_30Rnd_545x39_AK_M
0.04, CUP_arifle_G36A //CUP_30Rnd_556x45_G36
0.05, CUP_arifle_CZ805_A1 //CUP_20Rnd_556x45_Stanag
0.05, CUP_arifle_G36C //CUP_30Rnd_556x45_G36
0.05, CUP_arifle_XM8_Carbine_FG //CUP_30Rnd_556x45_Stanag
0.05, CUP_arifle_AK107 //CUP_30Rnd_545x39_AK_M
0.03, CUP_arifle_G36C_camo //CUP_30Rnd_556x45_G36
0.05, CUP_arifle_M16A2 //CUP_30Rnd_556x45_Stanag
0.02, CUP_arifle_M16A2_GL //CUP_30Rnd_556x45_Stanag
0.01, CUP_arifle_M16A4_Base //CUP_30Rnd_556x45_Stanag
//0.05, CUP_arifle_Mk16_CQC //CUP_20Rnd_556x45_Stanag
0.04, CUP_arifle_CZ805_GL //CUP_20Rnd_556x45_Stanag
//0.01, CUP_arifle_M4A1_camo //CUP_30Rnd_556x45_Stanag
0.01, CUP_arifle_G36A_camo //CUP_30Rnd_556x45_G36
0.04, CUP_arifle_M4A3_desert //CUP_30Rnd_556x45_Stanag
0.02, CUP_arifle_Sa58P //CUP_30Rnd_Sa58_M
0.04, CUP_arifle_AK74_GL //CUP_30Rnd_545x39_AK_M
0.02, CUP_arifle_Sa58V //CUP_30Rnd_Sa58_M
0.04, CUP_arifle_MG36 //CUP_100Rnd_556x45_BetaCMag
0.03, CUP_arifle_XM8_Compact //CUP_30Rnd_556x45_Stanag
0.04, CUP_arifle_xm8_sharpshooter //CUP_30Rnd_556x45_Stanag
0.02, CUP_arifle_xm8_SAW //CUP_100Rnd_556x45_BetaCMag
0.05, CUP_smg_EVO //CUP_30Rnd_9x19_EVO
0.02, CUP_arifle_Sa58RIS2 //CUP_30Rnd_Sa58_M
0.01, CUP_arifle_L85A2 //CUP_30Rnd_556x45_Stanag
//0.01, CUP_arifle_M4A1_BUIS_camo_GL //CUP_30Rnd_556x45_Stanag

> AssaultRifleAmmo
0.25, CUP_30Rnd_Sa58_M
0.2, CUP_30Rnd_762x39_AK47_M
0.2, CUP_20Rnd_556x45_Stanag
0.11, CUP_30Rnd_545x39_AK_M
0.12, CUP_30Rnd_556x45_G36
0.07, CUP_100Rnd_556x45_BetaCMag


> AssaultAttachments
0.07, CUP_optic_RCO
0.08, CUP_optic_HoloBlack
0.08, CUP_optic_Kobra
0.09, CUP_optic_ZDDot
0.05, CUP_optic_SB_11_4x20_PM
0.05, CUP_optic_CompM4
0.04, CUP_optic_ACOG
0.05, CUP_optic_CompM2_Black
0.05, CUP_optic_PechenegScope
0.07, CUP_optic_SUSAT
0.05, CUP_optic_ELCAN_SpecterDR
0.04, CUP_acc_ANPEQ_15
0.05, CUP_optic_LeupoldMk4_CQ_T
0.06, CUP_optic_PSO_1
0.06, CUP_optic_Eotech533
0.01, CUP_optic_Eotech533Grey
0.02, CUP_optic_ElcanM145
0.06, acc_flashlight


///////////////////////////////////////////////////////////////////////////////
// MachineGun
///////////////////////////////////////////////////////////////////////////////


> MachineGun
//0.12, CUP_arifle_RPK74 //CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M
0.12, CUP_arifle_xm8_SAW //CUP_100Rnd_556x45_BetaCMag
0.12, CUP_lmg_L110A1 //CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1
0.12, CUP_lmg_UK59 //CUP_50Rnd_UK59_762x54R_Tracer
//0.05, CUP_lmg_M249_para //CUP_200Rnd_TE4_Green_Tracer_556x45_M249
//0.1, CUP_lmg_M60A4 //CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
0.1, CUP_arifle_MG36 //CUP_100Rnd_556x45_BetaCMag
//0.08, CUP_lmg_Mk48_wdl //CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
//0.1, CUP_lmg_M249 //CUP_100Rnd_TE4_Green_Tracer_556x45_M249
0.1, CUP_lmg_M240 //CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
//0.07, CUP_lmg_L7A2 //CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
0.02, CUP_lmg_PKM //CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
//0.01, CUP_lmg_Pecheneg //CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M

> MachineGunAmmo
0.2, CUP_100Rnd_556x45_BetaCMag //CUP_arifle_xm8_SAW
0.2, CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M //CUP_arifle_RPK74
0.15, CUP_100Rnd_TE4_Green_Tracer_556x45_M249 //CUP_lmg_M249
0.15, CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M //CUP_lmg_M240
0.15, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M //CUP_lmg_PKM
0.08, CUP_200Rnd_TE4_Green_Tracer_556x45_M249 //CUP_lmg_M249_para
0.07, CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1 //CUP_lmg_L110A1


///////////////////////////////////////////////////////////////////////////////
// SniperRifles
///////////////////////////////////////////////////////////////////////////////


> SniperRifles
0.1, CUP_arifle_AK107 //CUP_30Rnd_545x39_AK_M
//0.09, CUP_arifle_FNFAL //CUP_20Rnd_762x51_FNFAL_M
0.09, CUP_srifle_M40A3 //CUP_5Rnd_762x51_M24
//0.07, CUP_srifle_M110 //CUP_20Rnd_762x51_B_M110
0.06, CUP_srifle_SVD_des //CUP_10Rnd_762x54_SVD_M
0.07, CUP_srifle_SVD //CUP_10Rnd_762x54_SVD_M
0.09, CUP_srifle_CZ750 //CUP_10Rnd_762x51_CZ750
0.06, CUP_srifle_CZ550 //CUP_5x_22_LR_17_HMR_M
//0.07, CUP_srifle_M24_wdl //CUP_5Rnd_762x51_M24
0.07, CUP_srifle_LeeEnfield //CUP_10x_303_M
//0.05, CUP_srifle_AWM_wdl //CUP_5Rnd_86x70_L115A1
0.03, CUP_srifle_ksvk //CUP_5Rnd_127x108_KSVK_M
//0.05, CUP_arifle_CZ805_B //CUP_20Rnd_762x51_CZ805B
0.02, CUP_SVD_camo_g //0.02, CUP_srifle_SVD_wdl_ghillie //CUP_10Rnd_762x54_SVD_M
//0.04, CUP_srifle_DMR //CUP_20Rnd_762x51_DMR
//0.02, CUP_srifle_M14 //CUP_20Rnd_762x51_DMR
//0.01, CUP_srifle_M24_ghillie //CUP_5Rnd_762x51_M24
//0.01, CUP_srifle_VSSVintorez //CUP_10Rnd_9x39_SP5_VSS_M (CUP_20Rnd_9x39_SP5_VSS_M)

> SniperRiflesAmmo
0.16, CUP_30Rnd_545x39_AK_M //CUP_arifle_AK107
0.08, CUP_20Rnd_762x51_CZ805B //CUP_arifle_CZ805_B
0.07, CUP_5Rnd_86x70_L115A1 //CUP_srifle_AWM_wdl
0.15, CUP_20Rnd_762x51_FNFAL_M //CUP_arifle_FNFAL
0.14, CUP_10Rnd_762x54_SVD_M //CUP_srifle_SVD
0.09, CUP_20Rnd_762x51_DMR //CUP_srifle_DMR (CUP_srifle_M14)
0.13, CUP_5Rnd_762x51_M24 //CUP_srifle_M24_ghillie
0.1, CUP_5x_22_LR_17_HMR_M //CUP_srifle_CZ550
0.07, CUP_20Rnd_762x51_B_M110 //CUP_srifle_M110
0.03, CUP_10Rnd_9x39_SP5_VSS_M //CUP_srifle_VSSVintorez
0.07, CUP_10Rnd_762x51_CZ750 //CUP_srifle_CZ750
0.05, CUP_5Rnd_127x108_KSVK_M //CUP_srifle_ksvk


> SniperAttachments
0.4, CUP_optic_ACOG
0.15, CUP_optic_CompM2_Black
0.03, CUP_optic_LeupoldMk4
0.1, CUP_optic_Eotech533Grey
0.09, CUP_optic_PSO_3
0.2, CUP_optic_PechenegScope
0.02, CUP_optic_LeupoldMk4_10x40_LRT_Woodland
0.01, CUP_optic_SB_3_12x50_PMII


//////////////////////////////////

> HEGrenades
0.5, CUP_1Rnd_HE_M203
0.5, CUP_1Rnd_HEDP_M203

//////////////////////////////////////

> UGLFlares
0.11, CUP_FlareWhite_GP25_M
0.11, CUP_FlareWhite_M203
0.12, CUP_FlareGreen_GP25_M
0.12, CUP_FlareRed_GP25_M
0.12, CUP_FlareYellow_GP25_M
0.12, CUP_FlareGreen_M203
0.12, CUP_FlareRed_M203
0.12, CUP_FlareYellow_M203

> UGLSmokes
0.13, CUP_1Rnd_SMOKERED_GP25_M
0.13, CUP_1Rnd_SMOKEGREEN_GP25_M
0.13, CUP_1Rnd_SMOKEYELLOW_GP25_M
0.13, CUP_1Rnd_SmokeRed_M203
0.13, CUP_1Rnd_SmokeGreen_M203
0.13, CUP_1Rnd_SmokeYellow_M203
0.14, CUP_1Rnd_Smoke_M203
0.14, CUP_1Rnd_SMOKE_GP25_M

> HandGrenades
0.55, HandGrenade
0.45, MiniGrenade

> Explosives
0.22, APERSMine_Range_Mag
0.25, APERSBoundingMine_Range_Mag
0.23, ClaymoreDirectionalMine_Remote_Mag
0.25, APERSTripMine_Wire_Mag
0.05, CUP_20Rnd_B_AA12_HE //shotgun explosive


///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian Gear

> CivilianItems
0.4, Exile_Item_Bandage
0.15, Binocular
0.2, Exile_Item_Matches
0.02, ItemRadio
0.03, ItemCompass
0.05, ItemGPS

> CivilianClothing //16x6 r4
0.30, U_C_Journalist
0.31, U_C_Poloshirt_blue
0.31, U_C_Poloshirt_burgundy
0.31, U_C_Poloshirt_salmon
0.31, U_C_Poloshirt_stripped
0.31, U_C_Poloshirt_tricolour
0.29, U_C_Poor_1
0.29, U_C_Poor_2
0.29, U_C_Poor_shorts_1
0.30, U_C_Scientist
0.27, U_OrestesBody
0.30, U_Rangemaster
0.27, U_NikosAgedBody
0.27, U_NikosBody
0.29, U_Competitor

> CivilianClothingCUP
0.26, CUP_U_C_Rocker_01 //L:20 A:0 M:20 D:0
0.26, CUP_U_C_Rocker_02 //L:20 A:0 M:20 D:0
0.26, CUP_U_C_Rocker_03 //L:20 A:0 M:20 D:0
0.26, CUP_U_C_Rocker_04 //L:20 A:0 M:20 D:0
0.27, CUP_O_TKI_Khet_Jeans_01 //L:40 A:0 M:20 D:0
0.27, CUP_O_TKI_Khet_Jeans_02 //L:40 A:0 M:20 D:0
0.27, CUP_O_TKI_Khet_Jeans_03 //L:40 A:0 M:20 D:0
0.27, CUP_O_TKI_Khet_Jeans_04 //L:40 A:0 M:20 D:0
0.24, CUP_U_C_Pilot_01 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Citizen_01 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Citizen_02 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Citizen_03 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Citizen_04 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Worker_01 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Worker_02 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Worker_03 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Worker_04 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Profiteer_01 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Profiteer_02 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Profiteer_03 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Profiteer_04 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Woodlander_01 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Woodlander_02 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Woodlander_03 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Woodlander_04 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Villager_01 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Villager_02 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Villager_03 //L:40 A:0 M:20 D:0
0.27, CUP_U_C_Villager_04 //L:40 A:0 M:20 D:0
0.21, CUP_U_C_Labcoat_02 //L:20 A:0 M:20 D:0
0.21, CUP_U_C_Labcoat_03 //L:20 A:0 M:20 D:0



> CivilianVestHeadGearCUP
0.18, CUP_V_O_SLA_Flak_Vest01 //L:90 A:0 M:0 D:0
0.18, CUP_V_O_SLA_Flak_Vest02 //L:90 A:0 M:0 D:0
0.18, CUP_V_O_SLA_Flak_Vest03 //L:90 A:0 M:0 D:0
0.13, CUP_V_I_Guerilla_Jacket //L:110 A:0 M:80 D:0
0.3, CUP_V_B_LHDVest_Blue //L:10 A:0 M:20 D:0
0.3, CUP_V_B_LHDVest_Brown //L:10 A:0 M:20 D:0
0.3, CUP_V_B_LHDVest_Green //L:10 A:0 M:20 D:0
0.3, CUP_V_B_LHDVest_Red //L:10 A:0 M:20 D:0
0.3, CUP_V_B_LHDVest_Violet //L:10 A:0 M:20 D:0
0.3, CUP_V_B_LHDVest_White //L:10 A:0 M:20 D:0
0.3, CUP_V_B_LHDVest_Yellow //L:10 A:0 M:20 D:0
0.25, CUP_V_OI_TKI_Jacket1_01 //L:40 A:0 M:80 D:0
0.25, CUP_V_OI_TKI_Jacket1_02 //L:40 A:0 M:80 D:0
0.25, CUP_V_OI_TKI_Jacket1_03 //L:40 A:0 M:80 D:0
0.25, CUP_V_OI_TKI_Jacket1_04 //L:40 A:0 M:80 D:0
0.25, CUP_V_OI_TKI_Jacket1_05 //L:40 A:0 M:80 D:0
0.25, CUP_V_OI_TKI_Jacket1_06 //L:40 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket2_01 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket2_02 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket2_03 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket2_04 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket2_05 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket2_06 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket3_01 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket3_02 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket3_03 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket3_04 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket3_05 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket3_06 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket4_01 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket4_02 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket4_03 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket4_04 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket4_05 //L:80 A:0 M:80 D:0
0.21, CUP_V_OI_TKI_Jacket4_06 //L:80 A:0 M:80 D:0



> CivilianBackpacks
0.08, B_HuntingBackpack //
0.09, B_FieldPack_blk //
0.08, B_AssaultPack_sgg //
0.06, B_Kitbag_sgg //
0.03, B_AssaultPack_blk //
0.01, B_AssaultPack_khk //
0.04, B_FieldPack_cbr //---- new
0.02, B_TacticalPack_blk
0.03, B_Carryall_cbr //L:0 A:0 M:0 D:0
0.03, B_TacticalPack_rgr
0.03, B_TacticalPack_oli
0.02, B_Kitbag_cbr
0.02, B_Bergen_blk
0.06, B_OutdoorPack_blk



> CivilianVestHeadGear
0.29, V_Press_F //L:40 A:48 M:40 D:0
0.29, V_Rangemaster_belt //L:40 A:0 M:5 D:0
0.20, V_TacVest_blk //L:100 A:24 M:40 D:0
0.20, V_TacVest_brn //L:100 A:24 M:40 D:0
0.20, V_TacVest_camo //L:100 A:24 M:40 D:0
0.20, V_TacVest_khk //L:100 A:24 M:40 D:0
0.20, V_TacVest_oli //L:100 A:24 M:40 D:0
0.20, V_TacVestCamo_khk //L:100 A:24 M:40 D:0
0.16, V_TacVestIR_blk //L:140 A:24 M:50 D:0
0.20, V_I_G_resistanceLeader_F //L:100 A:24 M:40 D:0
0.33, H_Cap_blk //L:0 A:0 M:4 D:0----------
0.33, H_Cap_blk_Raven //L:0 A:0 M:4 D:0
0.33, H_Cap_grn //L:0 A:0 M:4 D:0
0.33, H_Cap_tan //L:0 A:0 M:4 D:0
0.33, H_Cap_marshal //L:0 A:0 M:8 D:0
0.33, H_Cap_usblack //L:0 A:0 M:4 D:0
0.33, H_Cap_grn_BI //L:0 A:0 M:4 D:0
0.33, H_Watchcap_blk //L:0 A:0 M:6 D:0
0.33, H_Watchcap_sgg //L:0 A:0 M:6 D:0
0.33, H_Watchcap_cbr //L:0 A:0 M:6 D:0
0.33, H_Bandanna_gry //L:0 A:0 M:8 D:0
0.33, H_Bandanna_sgg //L:0 A:0 M:8 D:0
0.33, H_Bandanna_surfer //L:0 A:0 M:8 D:0
0.33, H_Bandanna_blu //L:0 A:0 M:8 D:0
0.33, H_Bandanna_surfer_grn //L:0 A:0 M:8 D:0
0.33, H_Booniehat_dgtl //L:0 A:0 M:10 D:0
0.33, H_Booniehat_grn //L:0 A:0 M:10 D:0
0.33, H_Booniehat_khk_hs //L:0 A:0 M:10 D:0
0.33, H_Booniehat_tan //L:0 A:0 M:10 D:0
0.33, H_Booniehat_oli //L:0 A:0 M:10 D:0
0.33, H_BandMask_demon //L:0 A:0 M:8 D:0
0.33, H_BandMask_reaper //L:0 A:0 M:8 D:0
0.33, H_BandMask_blk //L:0 A:0 M:8 D:0
0.33, H_Hat_blue //L:0 A:0 M:6 D:0
0.33, H_Hat_brown //L:0 A:0 M:6 D:0
0.33, H_Hat_checker //L:0 A:0 M:6 D:0
0.33, H_Hat_grey //L:0 A:0 M:6 D:0
0.33, H_Hat_tan //L:0 A:0 M:6 D:0
0.33, H_StrawHat //L:0 A:0 M:6 D:0
0.33, H_StrawHat_dark //L:0 A:0 M:6 D:0
0.33, H_Beret_02 //L:0 A:0 M:6 D:0
0.33, H_Beret_blk //L:0 A:0 M:6 D:0
0.33, H_Beret_grn //L:0 A:0 M:6 D:0
0.33, H_Shemag_olive //L:0 A:0 M:6 D:0
0.33, H_Shemag_olive_hs //L:0 A:0 M:6 D:0
0.33, H_ShemagOpen_khk //L:0 A:0 M:6 D:0
0.33, H_ShemagOpen_tan //L:0 A:0 M:6 D:0
0.33, H_TurbanO_blk //L:0 A:0 M:8 D:0


//Military Gear

> MilitaryItems_Special
0.4, Exile_Item_Bandage
0.14, Binocular
0.13, Exile_Item_Matches
0.05, ItemRadio
0.05, ItemCompass
0.1, ItemGPS
0.01, Exile_Item_File4 //Explosives
0.03, B_Carryall_khk //L:0 A:0 M:0 D:0
0.03, B_Carryall_mcamo //L:0 A:0 M:0 D:0
0.03, B_Carryall_ocamo //L:0 A:0 M:0 D:0
0.03, B_Carryall_oli //L:0 A:0 M:0 D:0
0.03, B_Carryall_oucamo //L:0 A:0 M:0 D:0
0.02, Exile_Item_MobilePhone
0.03, Exile_Item_File3 //Goggles
0.02, Exile_Item_File1 //Scope
0.03, Exile_Item_File2 //Silencer
0.01, Exile_Item_PensAndPencils
0.06, acc_flashlight
//0.01, Exile_Headgear_GasMask //new


> MilitaryClothing
0.27, U_B_CombatUniform_mcam //L:40 A:0 M:40 D:0
0.28, U_B_CombatUniform_mcam_tshirt //L:40 A:0 M:40 D:0
0.28, U_B_CombatUniform_mcam_vest //L:40 A:0 M:40 D:0
0.28, U_B_CombatUniform_mcam_worn //L:40 A:0 M:40 D:0
0.27, U_B_CTRG_1 //L:40 A:0 M:40 D:0
0.27, U_B_CTRG_2 //L:40 A:0 M:40 D:0
0.27, U_B_CTRG_3 //L:40 A:0 M:40 D:0
0.28, U_I_CombatUniform //L:40 A:0 M:40 D:0
0.28, U_I_CombatUniform_shortsleeve //L:40 A:0 M:40 D:0
0.28, U_I_CombatUniform_tshirt //L:40 A:0 M:40 D:0
0.28, U_I_OfficerUniform //L:40 A:0 M:40 D:0
0.28, U_O_CombatUniform_ocamo //L:40 A:0 M:80 D:0
0.28, U_O_CombatUniform_oucamo //L:40 A:0 M:80 D:0
0.22, U_O_OfficerUniform_ocamo //L:40 A:0 M:80 D:0
0.21, U_B_SpecopsUniform_sgg //L:40 A:0 M:40 D:0
0.22, U_O_SpecopsUniform_blk //L:40 A:0 M:80 D:0
0.22, U_O_SpecopsUniform_ocamo //L:40 A:0 M:80 D:0
0.19, U_I_G_Story_Protagonist_F //L:40 A:0 M:40 D:0
0.29, U_C_HunterBody_grn //L:30 A:0 M:30 D:0
0.29, U_IG_Guerilla1_1 //L:30 A:0 M:30 D:0//---Guerilla
0.26, U_IG_Guerilla2_1 //L:30 A:0 M:30 D:0
0.29, U_IG_Guerilla2_2 //L:30 A:0 M:30 D:0
0.29, U_IG_Guerilla2_3 //L:30 A:0 M:30 D:0
0.27, U_IG_Guerilla3_1 //L:50 A:0 M:50 D:0
0.29, U_BG_Guerilla2_1 //L:30 A:0 M:30 D:0
0.27, U_IG_Guerilla3_2 //L:50 A:0 M:50 D:0
0.26, U_BG_Guerrilla_6_1 //L:30 A:0 M:30 D:0
0.29, U_BG_Guerilla1_1 //L:30 A:0 M:30 D:0
0.29, U_BG_Guerilla2_2 //L:30 A:0 M:30 D:0
0.29, U_BG_Guerilla2_3 //L:30 A:0 M:30 D:0
0.27, U_BG_Guerilla3_1 //L:50 A:0 M:50 D:0
0.28, U_BG_leader //L:40 A:0 M:40 D:0
0.28, U_IG_leader //L:40 A:0 M:40 D:0
0.19, U_I_G_resistanceLeader_F //L:40 A:0 M:40 D:0



> MilitaryBackpacks
0.06, B_OutdoorPack_tan //
0.03, B_AssaultPack_rgr //
0.04, B_Bergen_mcamo //
0.01, B_Carryall_mcamo //
0.05, B_AssaultPack_cbr //---- new
0.05, B_AssaultPack_dgtl
0.04, B_AssaultPack_mcamo
0.02, B_Bergen_rgr
0.02, B_Bergen_sgg
0.01, B_HuntingBackpack
0.06, B_OutdoorPack_blu
0.04, B_FieldPack_ocamo
0.04, B_FieldPack_oucamo
0.02, B_TacticalPack_ocamo
0.03, B_TacticalPack_mcamo
0.02, B_Kitbag_mcamo
0.01, B_Carryall_cbr
0.01, B_Carryall_khk
0.01, B_Carryall_ocamo
0.01, B_Carryall_oli
0.01, B_Carryall_oucamo


> MilitaryVestHeadGear /*headgear + vests*/
0.24, V_BandollierB_blk //L:80 A:0 M:10 D:0
0.24, V_BandollierB_cbr //L:80 A:0 M:10 D:0
0.24, V_BandollierB_khk //L:80 A:0 M:10 D:0
0.24, V_BandollierB_oli //L:80 A:0 M:10 D:0
0.24, V_BandollierB_rgr //L:80 A:0 M:10 D:0
0.18, V_Chestrig_blk //L:140 A:0 M:20 D:0
0.18, V_Chestrig_khk //L:140 A:0 M:20 D:0
0.18, V_Chestrig_oli //L:140 A:0 M:20 D:0
0.18, V_Chestrig_rgr //L:140 A:0 M:20 D:0
0.33, H_Cap_khaki_specops_UK //L:0 A:0 M:4 D:0-------
0.33, H_Cap_tan //L:0 A:0 M:4 D:0
0.33, H_MilCap_dgtl //L:0 A:0 M:6 D:0
0.33, H_MilCap_mcamo //L:0 A:0 M:6 D:0
0.33, H_MilCap_rucamo //L:0 A:0 M:6 D:0
0.33, H_Bandanna_camo //L:0 A:0 M:8 D:0
0.33, H_Booniehat_mcamo //L:0 A:0 M:10 D:0
0.33, H_Hat_camo //L:0 A:0 M:6 D:0
0.33, H_Beret_blk_POLICE //L:0 A:0 M:6 D:0
0.33, H_Beret_ocamo //L:0 A:0 M:6 D:0




> MilitaryVestHeadGearSpecial /*headgear + vests Special*/
0.16, V_HarnessO_brn //L:160 A:0 M:30 D:0
0.16, V_HarnessO_gry //L:160 A:0 M:30 D:0
0.33, H_HelmetB_light //L:0 A:4 M:30 D:0
0.33, H_HelmetB_light_black //L:0 A:4 M:30 D:0
0.33, H_HelmetB_light_desert //L:0 A:4 M:30 D:0
0.33, H_HelmetB_light_grass //L:0 A:4 M:30 D:0
0.33, H_HelmetB_light_sand //L:0 A:4 M:30 D:0
0.33, H_HelmetB_light_snakeskin //L:0 A:4 M:30 D:0
0.20, V_HarnessOGL_brn //L:120 A:0 M:15 D:0
0.20, V_HarnessOGL_gry //L:120 A:0 M:15 D:0
0.32, H_HelmetIA //L:0 A:6 M:30 D:0
0.32, H_HelmetIA_camo //L:0 A:6 M:30 D:0
0.32, H_HelmetIA_net //L:0 A:6 M:30 D:0
0.16, V_HarnessOSpec_brn //L:160 A:0 M:30 D:0
0.16, V_HarnessOSpec_gry //L:160 A:0 M:30 D:0
0.29, H_HelmetB //L:0 A:6 M:30 D:0
0.29, H_HelmetB_black //L:0 A:6 M:30 D:0
0.21, H_HelmetB_camo //L:0 A:6 M:40 D:0
0.29, H_HelmetB_desert //L:0 A:6 M:30 D:0
0.29, H_HelmetB_grass //L:0 A:6 M:30 D:0
0.29, H_HelmetB_paint //L:0 A:6 M:30 D:0
0.29, H_HelmetB_plain_blk //L:0 A:6 M:30 D:0
0.29, H_HelmetB_sand //L:0 A:6 M:30 D:0
0.29, H_HelmetB_snakeskin //L:0 A:6 M:30 D:0
0.17, V_PlateCarrier1_blk //L:140 A:48 M:80 D:0
0.17, V_PlateCarrier1_rgr //L:140 A:48 M:80 D:0
0.14, V_PlateCarrier2_rgr //L:140 A:60 M:100 D:0
0.14, V_PlateCarrier3_rgr //L:140 A:60 M:100 D:0
0.28, H_HelmetSpecB //L:0 A:10 M:50 D:0
0.28, H_HelmetSpecB_blk //L:0 A:10 M:50 D:0
0.28, H_HelmetSpecB_paint1 //L:0 A:10 M:50 D:0
0.28, H_HelmetSpecB_paint2 //L:0 A:10 M:50 D:0
0.27, V_PlateCarrierGL_blk //L:140 A:204 M:100 D:0
0.27, V_PlateCarrierGL_mtp //L:140 A:204 M:100 D:0
0.27, V_PlateCarrierGL_rgr //L:140 A:204 M:100 D:0
0.23, H_HelmetSpecO_blk //L:0 A:10 M:50 D:0
0.23, H_HelmetSpecO_ocamo //L:0 A:10 M:50 D:0
0.05, V_TacVest_blk_POLICE //L:100 A:36 M:50 D:0
0.29, H_Helmet_Kerry //L:0 A:6 M:30 D:0
0.14, V_PlateCarrierH_CTRG //L:140 A:60 M:100 D:0
0.18, H_HelmetO_ocamo //L:0 A:8 M:40 D:0
0.18, H_HelmetO_oucamo //L:0 A:8 M:40 D:0
0.17, V_PlateCarrierIA1_dgtl //L:120 A:48 M:60 D:0
0.16, V_PlateCarrierIA2_dgtl //L:120 A:64 M:80 D:0
0.15, V_PlateCarrierIAGL_dgtl //L:120 A:204 M:80 D:0
0.15, V_PlateCarrierIAGL_oli //L:120 A:204 M:80 D:0
0.32, H_HelmetB_plain_mcamo //L:0 A:6 M:30 D:0
0.13, V_PlateCarrierL_CTRG //L:140 A:48 M:80 D:0
0.14, H_HelmetLeaderO_ocamo //L:0 A:12 M:60 D:0
0.14, H_HelmetLeaderO_oucamo //L:0 A:12 M:60 D:0
0.05, V_PlateCarrierSpec_blk //L:100 A:88 M:120 D:0
0.05, V_PlateCarrierSpec_mtp //L:100 A:88 M:120 D:0
0.05, V_PlateCarrierSpec_rgr //L:100 A:88 M:120 D:0



> Ghillies
0.06, U_B_FullGhillie_ard //L:60 A:0 M:80 D:0
0.06, U_B_FullGhillie_lsh //L:60 A:0 M:80 D:0
0.06, U_B_FullGhillie_sard //L:60 A:0 M:80 D:0
0.23, H_CrewHelmetHeli_B //L:0 A:10 M:50 D:0
0.23, H_CrewHelmetHeli_I //L:0 A:10 M:50 D:0
0.23, H_CrewHelmetHeli_O //L:0 A:10 M:50 D:0
0.07, U_B_GhillieSuit //L:60 A:0 M:60 D:0
0.30, H_HelmetCrew_I //L:0 A:8 M:40 D:0
0.30, H_HelmetCrew_B //L:0 A:8 M:40 D:0
0.30, H_HelmetCrew_O //L:0 A:8 M:40 D:0
0.06, U_I_FullGhillie_ard //L:60 A:0 M:80 D:0
0.06, U_I_FullGhillie_lsh //L:60 A:0 M:80 D:0
0.06, U_I_FullGhillie_sard //L:60 A:0 M:80 D:0
0.23, H_PilotHelmetHeli_B //L:0 A:6 M:30 D:0
0.23, H_PilotHelmetHeli_I //L:0 A:6 M:30 D:0
0.23, H_PilotHelmetHeli_O //L:0 A:6 M:30 D:0
0.07, U_I_GhillieSuit //L:60 A:0 M:60 D:0
0.27, U_B_HeliPilotCoveralls //L:40 A:0 M:60 D:0
0.27, U_I_HeliPilotCoveralls //L:40 A:0 M:60 D:0
0.06, U_O_FullGhillie_ard //L:60 A:0 M:100 D:0
0.06, U_O_FullGhillie_lsh //L:60 A:0 M:100 D:0
0.06, U_O_FullGhillie_sard //L:60 A:0 M:100 D:0
0.26, U_I_pilotCoveralls //L:60 A:0 M:80 D:0
0.26, U_O_PilotCoveralls //L:60 A:0 M:100 D:0
0.26, U_B_PilotCoveralls //L:60 A:0 M:80 D:0
0.08, U_O_GhillieSuit //L:60 A:0 M:80 D:0
0.24, H_PilotHelmetFighter_B //L:0 A:12 M:60 D:0
0.24, H_PilotHelmetFighter_I //L:0 A:12 M:60 D:0
0.24, H_PilotHelmetFighter_O //L:0 A:12 M:60 D:0
0.09, U_I_Wetsuit //L:80 A:0 M:60 D:0
0.09, U_O_Wetsuit //L:80 A:0 M:60 D:0
0.09, U_B_Wetsuit //L:80 A:0 M:60 D:0
0.21, U_B_survival_uniform //L:40 A:0 M:60 D:0



///////////////////////////////////////////////////////////////////////////////


> IndustrialItems //1, Exile_Item_ThermalScannerPro
0.16, Exile_Item_Can_Empty
0.02, Exile_Item_Battery_Car
0.02, Exile_Item_PartFueltank
0.02, Exile_Item_PartEngine
0.03, Exile_Item_CanOpener
0.02, Exile_Item_Pliers
0.02, Exile_Item_Can_Empty_Orange
0.01, Exile_Item_OilCanister
0.01, Exile_Item_ButaneTorch
0.01, Exile_Item_FloodLightKit
0.13, Exile_Item_JunkMetal
0.07, Exile_Item_PartCarglass
0.03, Exile_Item_Wrench
0.01, Exile_Item_Cement
0.02, Exile_Item_Sand
0.01, Exile_Item_PortableGeneratorKit
0.04, Exile_Item_Screwdriver
0.04, Exile_Item_GasCooker
0.02, Exile_Item_Matches
0.04, Exile_Melee_Axe
0.04, Exile_Item_PartWeel
0.02, Exile_Item_LightBulb
0.04, Exile_Item_Handsaw
0.02, Exile_Item_Shovel
0.01, Exile_Item_PartVrotor
0.02, Exile_Item_CordlessScrewdriver
0.04, Exile_Item_CookingPot
0.02, Exile_Item_Rope
0.02, Exile_Item_MultiMeter
0.03, Exile_Item_Hammer
0.04, Exile_Item_ExtensionCord
0.01, Exile_Item_Grinder


> Vehicle
0.09, Exile_Item_PartWeel
0.01, Exile_Item_CamoTentKit
0.07, Exile_Item_ToolKit
0.1, Exile_Item_JunkMetal
0.03, Exile_Item_PartVrotor
0.03, Exile_Item_DuctTape
0.01, Exile_Item_Wrench
0.01, Exile_Item_Pliers
0.01, Exile_Item_OilCanister
0.01, Exile_Item_Screwdriver
0.07, Exile_Item_PartFueltank
0.03, Exile_Item_Matches
0.05, Exile_Item_FuelCanisterFull
0.05, Exile_Item_PartCarglass
0.05, Exile_Item_Knife
0.06, Exile_Item_FuelCanisterEmpty
0.06, Exile_Item_PartEngine


// Throwables

> Chemlights
0.25, Chemlight_blue
0.25, Chemlight_green
0.25, Chemlight_red
0.25, Chemlight_yellow


> RoadFlares
0.25, FlareGreen_F
0.25, FlareRed_F
0.25, FlareWhite_F
0.25, FlareYellow_F


> SmokeGrenades
0.14, SmokeShell
0.14, SmokeShellRed
0.14, SmokeShellGreen
0.14, SmokeShellYellow
0.14, SmokeShellPurple
0.15, SmokeShellBlue
0.15, SmokeShellOrange


> Restraints
0.92, Exile_Item_ZipTie //new
0.08, Exile_Item_Can_Empty


> Electronics
0.25, Exile_Item_Can_Empty
0.25, Exile_Item_Can_Empty_Blue
0.20, Chemlight_yellow
0.22, Exile_Item_Can_Empty_Green
0.03, Exile_Item_HandyCam
0.01, Exile_Item_Laptop //new
0.02, Exile_Item_BaseCameraKit //new
0.04, Exile_Item_MobilePhone
//0.01, Exile_Headgear_GasMask //new
0.05, HandGrenade




////////////////////////////////////////////////////////////////////
// LOOT TABLES with specific loot
////////////////////////////////////////////////////////////////////


> Table_GenericNamalskFood
0.12, Exile_Item_Can_Empty_Orange
0.11, Exile_Item_Can_Empty_White
0.05, Exile_Item_Magazine01
0.03, Exile_Item_Magazine02
0.02, Exile_Item_Magazine03
0.06, Exile_Item_Can_Empty
0.06, Exile_Item_Can_Empty_Green
0.02, Exile_Item_Franta
0.02, Exile_Item_Spirit
//0.04, Exile_Item_ToiletPaper
0.01, Exile_Item_BakedBeans
0.01, Exile_Item_Surstromming
0.01, Exile_Item_CatFood
0.01, Exile_Item_Moobar
0.01, Exile_Item_CanOpener
0.02, Exile_Item_PlasticBottleDirtyWater
0.11, Exile_Item_Bandage
0.05, CUP_7Rnd_45ACP_1911
0.01, CUP_5x_22_LR_17_HMR_M
0.04, CUP_10x_303_M
0.04, CUP_6Rnd_45ACP_M
//0.05, CUP_20Rnd_B_AA12_74Slug
0.02, CUP_20Rnd_B_AA12_Pellets
0.09, CUP_8Rnd_9x18_Makarov_M
0.02, CUP_8Rnd_9x18_MakarovSD_M
0.02, Exile_Item_PlasticBottleEmpty
0.07, SmokeShell
0.02, Exile_Item_PainKillers
0.01, Exile_Item_Matches
0.03, Chemlight_blue
0.03, Chemlight_red
0.04, Exile_Item_HeatPack


> Table_GenericNamalskNoFood
0.11, Exile_Item_Can_Empty_Orange
0.11, Exile_Item_Can_Empty_White
0.05, Exile_Item_Magazine01
0.03, Exile_Item_Magazine02
0.02, Exile_Item_Magazine03
0.18, Exile_Item_Can_Empty  //TrashTinCan
0.13, Exile_Item_Can_Empty_Green  //ItemSodaEmpty
//0.13, Exile_Item_ToiletPaper  //TrashJackDaniels
0.01, Exile_Item_PlasticBottleDirtyWater  //ItemWaterbottleUnfilled
0.11, Exile_Item_Bandage  //ItemBandage
0.05, CUP_7Rnd_45ACP_1911  //7Rnd_45ACP_1911
0.01, CUP_5x_22_LR_17_HMR_M  //5x_22_LR_17_HMR
0.04, CUP_10x_303_M  //10x_303
0.04, CUP_6Rnd_45ACP_M  //6Rnd_45ACP
0.02, CUP_20Rnd_B_AA12_74Slug  //2Rnd_shotgun_74Slug
0.03, CUP_20Rnd_B_AA12_Pellets  //2Rnd_shotgun_74Pellets
0.09, CUP_8Rnd_9x18_Makarov_M  //8Rnd_9x18_Makarov
0.02, CUP_8Rnd_9x18_MakarovSD_M  //15Rnd_W1866_Slug
0.04, CUP_30Rnd_9x19_MP5  //WoodenArrow
0.07, SmokeShell  //HandRoadFlare
0.02, Exile_Item_PainKillers  //ItemPainkiller
0.01, Chemlight_green  //HandChemGreen
0.03, Chemlight_blue  //HandChemBlue
0.03, Chemlight_red  //HandChemRed
0.04, Exile_Item_HeatPack  //ItemHeatPack
0.01, Exile_Item_Matches  //ItemNails

> Table_GenericNamalskBasics
0.13, Exile_Item_Can_Empty_Green  //ItemSodaEmpty
//0.13, Exile_Item_ToiletPaper  //TrashJackDaniels
0.02, ItemMap
0.08, ItemRadio
0.07, Exile_Item_Pliers
0.06, Exile_Melee_Axe
0.06, Chemlight_yellow
0.13, Exile_Item_Matches
0.05, Exile_Item_Moobar
0.18, Exile_Item_Can_Empty
0.12, Exile_Item_Can_Empty_White
0.05, Exile_Item_Can_Empty_Orange


> Table_MilitaryNamalsk
0.1, CUP_sgun_Saiga12K
0.08, CUP_arifle_G36C
0.05, CUP_arifle_G36K_camo
//0.04, CUP_arifle_RPK74
0.18, CUP_arifle_AKS74U
0.03, CUP_arifle_AK74_GL
0.07, CUP_arifle_AK74
0.06, CUP_arifle_AK107
//0.05, CUP_arifle_Mk16_CQC
0.05, CUP_hgun_M9
0.05, CUP_arifle_M16A2
0.01, CUP_arifle_M16A2_GL
0.02, CUP_hgun_PB6P9
0.15, CUP_arifle_AKM
0.08, CUP_arifle_XM8_Compact
//0.01, CUP_arifle_M4A1_BUIS_camo_GL
0.08, CUP_hgun_MicroUzi
0.05, CUP_smg_EVO
0.05, CUP_arifle_G36A
0.1, CUP_sgun_M1014
0.02, CUP_arifle_M16A4_Base
0.01, CUP_srifle_CZ550
0.05, CUP_hgun_TaurusTracker455
0.08, CUP_srifle_LeeEnfield
0.1, CUP_hgun_Glock17
0.04, CUP_smg_MP5A5
0.02, CUP_smg_MP5SD6
0.01, CUP_arifle_M4A3_desert
0.06, Binocular
0.1, ItemRadio
0.1, Exile_Item_Knife
0.08, ItemMap
0.06, B_FieldPack_cbr //240 DZ_Assault_Pack_EP1
0.04, B_Bergen_mcamo //280  DZ_Patrol_Pack_EP1
0.03, B_Carryall_mcamo //320  DZ_British_ACU
0.02, CUP_20Rnd_B_AA12_HE //ItemEtool
0.02, Exile_Item_File2 //ItemSandbag
0.03, ItemGPS	//BrokenItemGPS
0.03, Exile_Item_ZipTie //BrokenNVGoggles
0.01, Exile_Item_CamoTentKit //APSI




> Table_HighLootNamalsk
0.1, CUP_arifle_AK107 //CUP_30Rnd_545x39_AK_M
//0.09, CUP_arifle_FNFAL //CUP_20Rnd_762x51_FNFAL_M
0.09, CUP_srifle_M40A3 //CUP_5Rnd_762x51_M24
//0.07, CUP_srifle_M110 //CUP_20Rnd_762x51_B_M110
0.06, CUP_srifle_SVD_des //CUP_10Rnd_762x54_SVD_M
0.07, CUP_srifle_SVD //CUP_10Rnd_762x54_SVD_M
0.09, CUP_srifle_CZ750 //CUP_10Rnd_762x51_CZ750
0.06, CUP_srifle_CZ550 //CUP_5x_22_LR_17_HMR_M
//0.07, CUP_srifle_M24_wdl //CUP_5Rnd_762x51_M24
0.07, CUP_srifle_LeeEnfield //CUP_10x_303_M
//0.05, CUP_srifle_AWM_wdl //CUP_5Rnd_86x70_L115A1
0.03, CUP_srifle_ksvk //CUP_5Rnd_127x108_KSVK_M
//0.05, CUP_arifle_CZ805_B //CUP_20Rnd_762x51_CZ805B
0.02, CUP_SVD_camo_g //0.02, CUP_srifle_SVD_wdl_ghillie //CUP_10Rnd_762x54_SVD_M
//0.04, CUP_srifle_DMR //CUP_20Rnd_762x51_DMR
//0.02, CUP_srifle_M14 //CUP_20Rnd_762x51_DMR
//0.01, CUP_srifle_M24_ghillie //CUP_5Rnd_762x51_M24
//0.01, CUP_srifle_VSSVintorez //CUP_10Rnd_9x39_SP5_VSS_M (CUP_20Rnd_9x39_SP5_VSS_M)
0.4, CUP_optic_ACOG
0.15, CUP_optic_CompM2_Black
0.03, CUP_optic_LeupoldMk4
0.1, CUP_optic_Eotech533Grey
0.09, CUP_optic_PSO_3
0.2, CUP_optic_PechenegScope
0.02, CUP_optic_LeupoldMk4_10x40_LRT_Woodland
0.01, CUP_optic_SB_3_12x50_PMII


> TRYK_Clothing_CIV
0.26, TRYK_U_B_GRTAN_CombatUniform //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_GRTANR_CombatUniformTshirt //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_BLK3CD //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_BLK3CD_Tshirt //L:40 A:0 M:40 D:0
0.25, TRYK_U_B_ODTAN //L:40 A:0 M:40 D:0
0.25, TRYK_U_B_ODTAN_Tshirt //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_BLK_OD //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_BLK_OD_Tshirt //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_C01_Tsirt //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_C02_Tsirt //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_wh_tan_Rollup_CombatUniform //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_wh_OD_Rollup_CombatUniform //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_wh_blk_Rollup_CombatUniform //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_WDL_GRY_CombatUniform //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_WDL_GRY_R_CombatUniform //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_Denim_T_WH //L:40 A:0 M:40 D:0
0.25, TRYK_U_B_Denim_T_BK //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_BLK_T_BK //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_RED_T_BR //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_Denim_T_BG_WH //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_Denim_T_BG_BK //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_BLK_T_BG_WH //L:40 A:0 M:40 D:0
0.25, TRYK_U_B_BLK_T_BG_BK //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_RED_T_BG_BR //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_fleece //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_fleece_UCP //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_UCP_PCUs //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_GRY_PCUs //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_Wood_PCUs //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_PCUs //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_UCP_PCUs_R //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_GRY_PCUs_R //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_PCUs_R //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_PCUGs //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_PCUGs_gry //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_PCUGs_BLK //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_PCUGs_OD //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_PCUGs_gry_R //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_PCUGs_BLK_R //L:40 A:0 M:40 D:0
0.28, TRYK_U_B_PCUGs_OD_R //L:40 A:0 M:40 D:0
0.25, TRYK_U_Bts_GRYGRY_PCUs //L:40 A:0 M:40 D:0
0.26, TRYK_U_Bts_UCP_PCUs //L:40 A:0 M:40 D:0
0.26, TRYK_U_Bts_Wood_PCUs //L:40 A:0 M:40 D:0
0.29, TRYK_U_Bts_PCUs //L:40 A:0 M:40 D:0
0.27, TRYK_U_denim_hood_blk //L:40 A:0 M:40 D:0
0.29, TRYK_U_denim_hood_mc //L:40 A:0 M:40 D:0
0.28, TRYK_U_denim_hood_3c //L:40 A:0 M:40 D:0
0.26, TRYK_U_denim_hood_nc //L:40 A:0 M:40 D:0
0.26, TRYK_U_denim_jersey_blu //L:40 A:0 M:40 D:0
0.26, TRYK_U_denim_jersey_blk //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_PAD //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_OD_PAD //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_TAN_PAD //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_BLK_PAD //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_PAD_BK //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_OD_PAD_BK //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_TAN_PAD_BK //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_BLK_PAD_BK //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_PAD_BLW //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_OD_PAD_BLW //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_TAN_PAD_BLW //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_BLK_PAD_BLW //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_PAD_YEL //L:40 A:0 M:40 D:0
0.25, TRYK_shirts_OD_PAD_YEL //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_TAN_PAD_YEL //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_BLK_PAD_YEL //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_PAD_RED2 //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_OD_PAD_RED2 //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_TAN_PAD_RED2 //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_BLK_PAD_RED2 //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_PAD_BLU3 //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_OD_PAD_BLU3 //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_TAN_PAD_BLU3 //L:40 A:0 M:40 D:0
0.25, TRYK_shirts_BLK_PAD_BLU3 //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_R //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_DENIM_BL //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_BK //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_DENIM_WH //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_DENIM_BWH //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_DENIM_RED2 //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_WHB //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_ylb //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_od //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_DENIM_R_Sleeve //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_BL_Sleeve //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_DENIM_BK_Sleeve //L:40 A:0 M:40 D:0
0.28, TRYK_shirts_DENIM_WH_Sleeve //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_DENIM_BWH_Sleeve //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_DENIM_RED2_Sleeve //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_DENIM_WHB_Sleeve //L:40 A:0 M:40 D:0
0.26, TRYK_shirts_DENIM_ylb_Sleeve //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_DENIM_od_Sleeve //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_PAD_BL //L:40 A:0 M:40 D:0
0.27, TRYK_shirts_OD_PAD_BL //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_TAN_PAD_BL //L:40 A:0 M:40 D:0
0.29, TRYK_shirts_BLK_PAD_BL //L:40 A:0 M:40 D:0
0.28, TRYK_U_Bts_PCUGs //L:40 A:0 M:40 D:0
0.27, TRYK_U_Bts_PCUODs //L:40 A:0 M:40 D:0
0.27, TRYK_U_B_PCUHs //L:40 A:0 M:40 D:0
0.29, TRYK_U_B_PCUGHs //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_PCUODHs //L:40 A:0 M:40 D:0
0.29, TRYK_B_USMC_R //L:40 A:0 M:40 D:0
0.29, TRYK_B_USMC_R_ROLL //L:40 A:0 M:40 D:0
0.29, TRYK_B_TRYK_UCP_T //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_Wood_T //L:40 A:0 M:40 D:0
0.29, TRYK_OVERALL_flesh //L:40 A:0 M:40 D:0
0.26, TRYK_OVERALL_nok_flesh //L:40 A:0 M:40 D:0
0.28, TRYK_OVERALL_SAGE_BLKboots //L:40 A:0 M:40 D:0
0.27, TRYK_OVERALL_SAGE_BLKboots_nk_blk //L:40 A:0 M:40 D:0
0.29, TRYK_OVERALL_SAGE_BLKboots_nk //L:40 A:0 M:40 D:0
0.28, TRYK_OVERALL_SAGE_BLKboots_nk_blk2 //L:40 A:0 M:40 D:0
0.26, TRYK_OVERALL_SAGE //L:40 A:0 M:40 D:0
0.31, TRYK_SUITS_BLK_F //L:10 A:0 M:40 D:0
0.31, TRYK_SUITS_BR_F //L:10 A:0 M:40 D:0
0.29, TRYK_U_B_PCUHsW3 //L:40 A:0 M:40 D:0
0.26, TRYK_U_B_PCUHsW3nh //L:40 A:0 M:40 D:0

> TRYK_Vests_CIV
0.26, CUP_V_O_TK_OfficerBelt2 //L:60 A:0 M:0.008 D:0
0.22, TRYK_V_ChestRig_L //L:100 A:0 M:0.003 D:0
0.22, TRYK_V_ChestRig //L:100 A:0 M:0.002 D:0
0.32, TRYK_V_Bulletproof //L:0 A:0 M:0.004 D:0
0.32, TRYK_V_Bulletproof_BLK //L:0 A:0 M:0.004 D:0
0.32, TRYK_V_Bulletproof_BL //L:0 A:0 M:0.004 D:0
0.19, TRYK_V_tacv1L_BK //L:130 A:0 M:0.006 D:0
0.19, TRYK_V_tacv1L_OD //L:130 A:0 M:0.006 D:0
0.19, TRYK_V_tacv1L_CY //L:130 A:0 M:0.006 D:0

> TRYK_HeadGear_CIV
0.22, TRYK_SPGEAR_Glasses //L:0 A:0 M:0 D:0
0.22, TRYK_SpsetG_Glasses //L:0 A:0 M:0 D:0
0.32, TRYK_Spset_PHC1_Glasses //L:0 A:0 M:0 D:0
0.12, TRYK_kio_balaclava_WH //L:0 A:0 M:0 D:0
0.13, TRYK_kio_balaclava_BLK //L:0 A:0 M:0 D:0
0.14, TRYK_kio_balaclavas //L:0 A:0 M:0 D:0
0.15, TRYK_kio_balaclava_BLK_ear //L:0 A:0 M:0 D:0
0.16, TRYK_kio_balaclava_ear //L:0 A:0 M:0 D:0
0.32, TRYK_Shemagh //L:0 A:0 M:0 D:0
0.32, TRYK_Shemagh_G //L:0 A:0 M:0 D:0
0.32, TRYK_Shemagh_WH //L:0 A:0 M:0 D:0

> TRYK_Backpacks_CIV
0.10, CUP_B_ACRScout_m95 //L:0 A:0 M:0 D:0
0.03, CUP_B_AlicePack_Khaki //L:0 A:0 M:0 D:0
0.12, CUP_B_SLA_Medicbag //L:0 A:0 M:0 D:0
0.13, TRYK_B_AssaultPack_Type2camo //L:0 A:0 M:0 D:0
0.14, TRYK_B_AssaultPack_MARPAT_Wood //L:0 A:0 M:0 D:0
0.15, TRYK_B_Kitbag_Base //L:0 A:0 M:0 D:0
0.16, TRYK_B_Kitbag_blk //L:0 A:0 M:0 D:0
0.17, TRYK_B_Kitbag_aaf //L:0 A:0 M:0 D:0
0.18, TRYK_B_Kitbag_Base_JSDF //L:0 A:0 M:0 D:0
0.19, TRYK_B_Medbag //L:0 A:0 M:0 D:0
0.20, TRYK_B_Medbag_OD //L:0 A:0 M:0 D:0
0.21, TRYK_B_Medbag_BK //L:0 A:0 M:0 D:0
0.24, TRYK_B_Medbag_ucp //L:0 A:0 M:0 D:0
0.30, TRYK_B_Belt_BLK //L:0 A:0 M:0 D:0
0.23, TRYK_B_Belt_tan //L:0 A:0 M:0 D:0
0.22, TRYK_B_tube_cyt //L:0 A:0 M:0 D:0
0.11, TRYK_B_tube_od //L:0 A:0 M:0 D:0
0.19, TRYK_B_tube_blk //L:0 A:0 M:0 D:0
0.04, TRYK_B_FieldPack_Wood //L:0 A:0 M:0 D:0


///////////////

> TRYK_Clothing_ARMY
0.14, TRYK_U_B_PCUODs //L:40 A:0 M:0.004 D:0
0.17, TRYK_U_hood_nc //L:40 A:0 M:0.004 D:0
0.16, TRYK_U_hood_mc //L:40 A:0 M:0.004 D:0
0.18, TRYK_B_USMC_R //L:40 A:0 M:0.004 D:0
0.19, TRYK_B_USMC_R_ROLL //L:40 A:0 M:0.004 D:0
0.09, CUP_V_O_TK_OfficerBelt2 //L:60 A:0 M:0.008 D:0

> TRYK_Vests_ARMY
0.19, TRYK_V_ArmorVest_AOR1 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_AOR2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_Delta //L:120 A:0 M:0.008 D:0
0.19, TRYK_V_ArmorVest_AOR1_2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_AOR2_2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_coyo2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_Brown2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_cbr2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_green2 //L:120 A:0 M:0.006 D:0
0.19, TRYK_V_ArmorVest_Delta2 //L:120 A:0 M:0.008 D:0
0.19, TRYK_V_ArmorVest_Ranger2 //L:120 A:0 M:0.008 D:0
0.09, TRYK_V_PlateCarrier_wood //L:140 A:0 M:0.008 D:0
0.09, TRYK_V_PlateCarrier_wood_L //L:140 A:0 M:0.007 D:0
0.29, TRYK_V_ChestRig_L //L:100 A:0 M:0.003 D:0
0.29, TRYK_V_ChestRig //L:100 A:0 M:0.002 D:0
0.29, TRYK_V_tacv1LMSL_BK //L:120 A:0 M:0.006 D:0

> TRYK_HeadGear_ARMY
0.18, TRYK_US_ESS_Glasses_BLK //L:0 A:0 M:0 D:0
0.18, TRYK_G_bala_ess_NV //L:0 A:0 M:0.0002 D:0
0.18, TRYK_H_ghillie_over //L:0 A:0.0006 M:0.0005 D:0
0.18, TRYK_H_ghillie_top //L:0 A:0.0006 M:0.0005 D:0
0.18, TRYK_kio_balaclava_ESS //L:0 A:0 M:0 D:0
0.18, TRYK_balaclava_NV //L:0 A:0 M:0.0004 D:0

> TRYK_Backpacks_ARMY
0.18, CUP_B_USMC_MOLLE //L:0 A:0 M:0 D:0
0.18, CUP_B_USMC_MOLLE_WDL //L:0 A:0 M:0 D:0
0.18, CUP_B_CivPack_WDL //L:0 A:0 M:0 D:0
0.18, CUP_B_ACRPara_m95 //L:0 A:0 M:0 D:0
0.18, CUP_B_HikingPack_Civ //L:0 A:0 M:0 D:0
0.02, TRYK_B_Carryall_wood //L:0 A:0 M:0 D:0
0.02, TRYK_B_Carryall_JSDF //L:0 A:0 M:0 D:0
0.08, TRYK_B_Coyotebackpack //L:0 A:0 M:0 D:0
0.08, TRYK_B_Coyotebackpack_OD //L:0 A:0 M:0 D:0
0.08, TRYK_B_Coyotebackpack_BLK //L:0 A:0 M:0 D:0
0.03, TRYK_B_Coyotebackpack_WH //L:0 A:0 M:0 D:0
0.01, TRYK_B_Alicepack //L:0 A:0 M:0 D:0



// unused stuff

> Unused
3, Exile_Item_CordlessScrewdriver
3, Exile_Item_FireExtinguisher
3, Exile_Item_Cement
5, Exile_Item_Sand
5, Exile_Item_Carwheel
5, Exile_Item_SleepingMat
5, Exile_Item_Defibrillator
5, Exile_Item_Wrench
7, Exile_Item_Foolbox
7, Exile_Item_Grinder
7, Exile_Item_Screwdriver
10, Exile_Item_OilCanister
14, Exile_Item_Hammer
14, Exile_Item_Shovel
17, Exile_Item_MetalScrews
17, Exile_Item_BeefParts