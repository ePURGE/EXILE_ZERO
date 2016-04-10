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

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> Food
4, Exile_Item_CanOpener//new
4, Exile_Item_Matches
4, Exile_Item_CookingPot
4, Exile_Item_EMRE						// 75% Hunger
8, Exile_Item_TacticalBacon
8, Exile_Item_GloriousKnakworst			// 60% Hunger
8, Exile_Item_BakedBeans
10, Exile_Item_Surstromming				// 55% Hunger
10, Exile_Item_SausageGravy				// 50% Hunger
10, Exile_Item_ChristmasTinner			// 40% Hunger
10, Exile_Item_BBQSandwich				// 40% Hunger
10, Exile_Item_CatFood					// 40% Hunger
10, Exile_Item_Dogfood					// 30% Hunger //new
10, Exile_Item_BeefParts					// 30% Hunger //new
10, Exile_Item_Cheathas					// 30% Hunger //new
10, Exile_Item_Noodles					// 25% Hunger //new
10, Exile_Item_Cereal
18, Exile_Item_RiceBox
18, Exile_Item_SeedAstics				// 20% Hunger //new
18, Exile_Item_Raisins					// 15% Hunger //new
18, Exile_Item_Moobar					// 10% Hunger //new
20, Exile_Item_InstantCoffee			//  5% Hunger //new



> Drinks
2, Exile_Item_CanOpener//new
4, Exile_Item_MountainDupe					// +50% Thirst in 0.sec!
//4, Exile_Item_PlasticBottleCoffee			// +100% Thirst
4, Exile_Item_Redgull						// +95% Thirst
4, Exile_Item_PowerDrink
8, Exile_Item_Waterpure
8, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
8, Exile_Item_PlasticBottleDirtyWater
8, Exile_Item_EnergyDrink					// +75% Thirst
10, Exile_Item_Beer							// +75% Thirst
11, Exile_Item_Canteen
12, Exile_Item_Spirit
12, Exile_Item_Franta


///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
16, CUP_hgun_Colt1911
16, CUP_hgun_Duty_M3X
17, CUP_CZ_75_P_07_DUTY
17, CUP_hgun_Phantom
18, CUP_CZ_75_D_COMPACT
18, CUP_Glock17_EP1
19, CUP_hgun_M9
19, CUP_hgun_Makarov
20, CUP_hgun_SA61
20, CUP_hgun_TaurusTracker455

> PistolAmmo
10, CUP_7Rnd_45ACP_1911
10, 16Rnd_9x21_Mag
11, CUP_CZ_75_SP_01_PHANTOM
11, CUP_18Rnd_9x19_Phantom
12, CUP_10Rnd_9x19_Compact
12, CUP_17Rnd_9x19_glock17
13, CUP_15Rnd_9x19_M9
13, CUP_hgun_PB6P9
14, CUP_8Rnd_9x18_Makarov_M
14, CUP_8Rnd_9x18_MakarovSD_M
15, CUP_20Rnd_B_765x17_Ball_M
15, CUP_30Rnd_9x19_UZI
16, CUP_6Rnd_45ACP_M

> PistolAttachments
3, CUP_acc_Glock17_Flashlight

////////////////////////////////

> SMG
18, CUP_hgun_MicroUzi
19, CUP_smg_bizon
20, CUP_smg_EVO
21, CUP_smg_MP5A5

> SMGAmmo
18, CUP_64Rnd_9x19_Bizon_M
18, CUP_30Rnd_9x19_EVO
18, CUP_30Rnd_9x19_MP5

> SMGAttachments
4, CUP_optic_HoloBlack
5, CUP_optic_ZDDot

///////////////////////////////

> LowRifles
12, CUP_srifle_LeeEnfield
13, CUP_arifle_AK74
14, CUP_arifle_AKM
14, CUP_arifle_Sa58P
14, CUP_arifle_Sa58V

> Rifles
11, CUP_arifle_M4A1
11, CUP_arifle_XM8_Compact
14, CUP_arifle_AKS74
14, CUP_arifle_AK107
14, CUP_arifle_AKS
14, CUP_arifle_CZ805_B

> RifleAmmo
12, CUP_100Rnd_556x45_BetaCMag
14, CUP_30Rnd_Sa58_M
16, CUP_30Rnd_545x39_AK_M
16, CUP_30Rnd_762x39_AK47_M
17, CUP_20Rnd_762x51_CZ805B
18, CUP_30Rnd_556x45_Stanag
18, CUP_20Rnd_556x45_Stanag
18, CUP_30Rnd_556x45_G36
19, CUP_10x_303_M


> RifleAttachments
14, CUP_optic_Kobra
14, CUP_optic_PSO_1
14, CUP_optic_RCO
14, CUP_optic_HoloBlack
14, CUP_optic_SUSAT
15, CUP_optic_ZDDot
15, CUP_optic_MRad
15, CUP_acc_Flashlight

//////////////////////////////////

> LMG
11, CUP_lmg_Mk48_des
12, CUP_lmg_PKM
12, CUP_lmg_M249
13, CUP_arifle_MG36
12, CUP_lmg_Mk48_wdl
13, CUP_lmg_M240
13, CUP_lmg_L7A2
13, CUP_arifle_L86A2
14, CUP_lmg_L110A1
14, CUP_lmg_UK59
14, CUP_RPK_74
15, CUP_srifle_LeeEnfield

> LMGAmmo
12, CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249
12, CUP_200Rnd_TE4_Red_Tracer_556x45_M249
13, CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
13, CUP_100Rnd_556x45_BetaCMag
13, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
15, CUP_50Rnd_UK59_762x54R_Tracer
16, CUP_30Rnd_545x39_AK_M
16, CUP_30Rnd_556x45_Stanag
16, CUP_30Rnd_556x45_G36
16, CUP_10x_303_M


//////////////////////////////////

> Snipers
11, CUP_srifle_VSSVintorez
11, CUP_srifle_DMR
12, CUP_srifle_SVD
12, CUP_srifle_M110
12, CUP_srifle_M40A3
13, CUP_srifle_M24_wdl
13, CUP_arifle_FNFAL
14, CUP_srifle_AWM_des
14, CUP_srifle_M14
14, CUP_srifle_CZ750
14, CUP_srifle_CZ550
14, CUP_5Rnd_86x70_L115A1
15, CUP_arifle_xm8_sharpshooter

> SniperAmmo
14, CUP_10Rnd_9x39_SP5_VSS_M
14, CUP_10Rnd_762x54_SVD_M
14, CUP_20Rnd_762x51_B_M110
14, CUP_5Rnd_762x51_M24
14, CUP_20Rnd_762x51_DMR
14, CUP_20Rnd_762x51_FNFAL_M
14, CUP_10Rnd_762x51_CZ750
14, CUP_5x_22_LR_17_HMR_M

> SniperAttachments
14, CUP_optic_SB_3_12x50_PMII
14, CUP_optic_LeupoldMk4_10x40_LRT_Woodland
14, CUP_optic_LeupoldMk4
14, CUP_optic_PSO_3
15, CUP_optic_CompM2_Black
15, optic_SOS

//////////////////////////////////

> DLCRifles
8, CUP_arifle_Mk17_CQC_EGLM
9, CUP_arifle_Mk17_STD_EGLM
10, CUP_arifle_Mk16_STD_EGLM
11, CUP_arifle_Mk16_CQC_EGLM
12, CUP_arifle_CZ805_B_GL
13, CUP_arifle_CZ805_GL
14, CUP_arifle_XM8_Carbine_GL
15, CUP_arifle_Mk16_SV
16, CUP_arifle_Mk17_CQC
17, CUP_arifle_Mk17_CQC_FG
18, CUP_arifle_Mk17_CQC_SFG
19, CUP_arifle_Mk17_STD
20, CUP_arifle_Mk17_STD_FG
21, CUP_arifle_Mk17_STD_SFG
22, CUP_arifle_Mk20
23, CUP_arifle_Mk16_STD
24, CUP_arifle_Mk16_STD_FG
25, CUP_arifle_Mk16_STD_SFG
26, CUP_arifle_Mk16_CQC
27, CUP_arifle_Mk16_CQC_FG
28, CUP_arifle_Mk16_CQC_SFG
29, CUP_arifle_Sa58RIS1
30, CUP_arifle_Sa58RIS2
31, CUP_arifle_CZ805_A1
32, CUP_arifle_CZ805_A2
33, CUP_arifle_G36A
34, CUP_arifle_G36K
35, CUP_arifle_G36C
36, CUP_arifle_L85A2
37, CUP_arifle_M16A2
38, CUP_arifle_M16A4_Base
39, CUP_arifle_M4A3_desert
40, CUP_arifle_XM8_Carbine
41, CUP_arifle_XM8_Compact
42, CUP_arifle_XM8_Compact_Rail
43, CUP_arifle_XM8_Carbine_FG

> DLCAmmo
10, CUP_20Rnd_762x51_B_SCAR
11, CUP_30Rnd_762x39_AK47_M
12, CUP_20Rnd_762x51_CZ805B
13, CUP_100Rnd_556x45_BetaCMag
14, CUP_30Rnd_545x39_AK_M
15, CUP_30Rnd_Sa58_M
16, CUP_20Rnd_556x45_Stanag
17, CUP_30Rnd_556x45_G36
18, CUP_30Rnd_556x45_Stanag


> DLCOptics
6, CUP_optic_Eotech533Grey
7, CUP_optic_PechenegScope
8, CUP_optic_ElcanM145
9, CUP_acc_ANPEQ_15
10, CUP_optic_CompM4
11, CUP_optic_ELCAN_SpecterDR
12, CUP_optic_LeupoldMk4_MRT_tan
13, CUP_optic_ACOG
14, CUP_optic_CompM2_Black
15, CUP_optic_LeupoldMk4_CQ_T
16, CUP_optic_Eotech533
17, CUP_optic_SUSAT
18, CUP_optic_PSO_1
19, CUP_optic_RCO
20, CUP_optic_HoloBlack
21, CUP_optic_Kobra
22, CUP_optic_ZDDot
23, CUP_optic_SB_11_4x20_PM
24, CUP_acc_Flashlight

> HEGrenades
12, CUP_1Rnd_HE_M203
12, CUP_1Rnd_HEDP_M203

//////////////////////////////////////

> UGLFlares
11, CUP_FlareWhite_GP25_M
11, CUP_FlareWhite_M203
12, CUP_FlareGreen_GP25_M
12, CUP_FlareRed_GP25_M
12, CUP_FlareYellow_GP25_M
12, CUP_FlareGreen_M203
12, CUP_FlareRed_M203
12, CUP_FlareYellow_M203

> UGLSmokes
13, CUP_1Rnd_SMOKERED_GP25_M
13, CUP_1Rnd_SMOKEGREEN_GP25_M
13, CUP_1Rnd_SMOKEYELLOW_GP25_M
13, CUP_1Rnd_SmokeRed_M203
13, CUP_1Rnd_SmokeGreen_M203
13, CUP_1Rnd_SmokeYellow_M203
14, CUP_1Rnd_Smoke_M203
14, CUP_1Rnd_SMOKE_GP25_M

> HandGrenades
50, HandGrenade
50, MiniGrenade

> Explosives
19, APERSMine_Range_Mag
20, APERSBoundingMine_Range_Mag
21, ClaymoreDirectionalMine_Remote_Mag
22, APERSTripMine_Wire_Mag



///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian

> CivilianItems
14, Exile_Item_Bandage //new
14, Exile_Item_Matches
15, Exile_Item_Knife
15, Binocular
15, ItemGPS
16, ItemRadio
16, ItemCompass

> CivilianClothing
6, U_OrestesBody
6, U_NikosBody
6, U_Rangemaster
6, U_NikosAgedBody
7, U_C_Scientist
7, U_C_Poloshirt_salmon
7, U_C_Journalist
7, U_C_Poloshirt_tricolour
7, U_Competitor
7, U_C_Poloshirt_stripped
7, U_C_Poor_2
7, U_C_Poloshirt_burgundy
8, U_C_Poor_1
8, U_C_Poor_shorts_1
8, U_C_HunterBody_grn
8, U_C_Poloshirt_blue


> CivilianBackpacks
5, B_Kitbag_mcamo
5, B_Kitbag_sgg
5, B_Kitbag_cbr
7, B_AssaultPack_khk
6, B_AssaultPack_dgtl
6, B_AssaultPack_rgr
6, B_AssaultPack_sgg
7, B_AssaultPack_blk
7, B_AssaultPack_cbr
7, B_AssaultPack_mcamo
8, B_HuntingBackpack
9, B_OutdoorPack_tan
9, B_OutdoorPack_blu
10, B_OutdoorPack_blk


> CivilianVests
5, V_TacVest_blk_POLICE
5, V_Press_F
5, V_Rangemaster_belt


> CivilianHeadgear
5, H_Bandanna_surfer
5, H_Beret_blk_POLICE
5, H_Cap_blk
5, H_Cap_blk_Raven
5, H_Cap_blu
5, H_Cap_grn
5, H_Cap_headphones
5, H_Cap_oli
6, H_Cap_press
6, H_Cap_red
6, H_Cap_tan
6, H_Hat_blue
6, H_Hat_brown
6, H_Hat_checker
6, H_Hat_grey
6, H_Hat_tan
6, H_StrawHat
6, H_StrawHat_dark


//Guerilla

> GuerillaItems
6, Exile_Item_Antibiotic
6, Exile_Item_Bandage //new
8, Binocular
8, ItemGPS
8, ItemRadio
9, ItemCompass


> GuerillaClothing
2, U_I_G_resistanceLeader_F
4, U_IG_leader
15, U_IG_Guerilla3_1
15, U_IG_Guerilla3_2
16, U_IG_Guerilla1_1
16, U_IG_Guerilla2_1
16, U_IG_Guerilla2_2
16, U_IG_Guerilla2_3


> GuerillaBackpacks
11, B_Bergen_sgg
11, B_Bergen_mcamo
11, B_Bergen_rgr
11, B_Bergen_blk
14, B_FieldPack_blk
14, B_FieldPack_ocamo
14, B_FieldPack_oucamo
14, B_FieldPack_cbr


> GuerillaVests
3, V_I_G_resistanceLeader_F
5, V_Chestrig_khk
5, V_Chestrig_rgr
5, V_Chestrig_blk
5, V_Chestrig_oli
7, V_BandollierB_khk
7, V_BandollierB_cbr
7, V_BandollierB_rgr
7, V_BandollierB_blk
7, V_BandollierB_oli
8, V_HarnessO_brn
8, V_HarnessOGL_brn
8, V_HarnessO_gry
8, V_HarnessOGL_gry
8, V_HarnessOSpec_brn
7, V_HarnessOSpec_gry


> GuerillaHeadgear
1, H_Beret_blk
1, H_Beret_red
1, H_Beret_grn
1, H_Beret_grn_SF
1, H_Beret_brn_SF
1, H_Beret_ocamo
1, H_Beret_02
1, H_Beret_Colonel
2, H_Watchcap_camo
2, H_Watchcap_sgg
2, H_TurbanO_blk
2, H_Shemag_khk
2, H_Shemag_tan
2, H_Shemag_olive
2, H_Shemag_olive_hs
2, H_ShemagOpen_khk
2, H_ShemagOpen_tan
3, H_Bandanna_khk
3, H_Bandanna_khk_hs
3, H_Bandanna_cbr
3, H_Bandanna_sgg
3, H_Bandanna_gry
3, H_Bandanna_camo
3, H_Bandanna_mcamo
3, H_BandMask_blk
3, H_Hat_camo
3, H_Cap_brn_SPECOPS
3, H_Cap_tan_specops_US
3, H_Cap_khaki_specops_UK
3, H_Watchcap_blk
3, H_Watchcap_khk
4, H_Booniehat_khk
4, H_Booniehat_indp
4, H_Booniehat_mcamo
4, H_Booniehat_grn
4, H_Booniehat_tan
4, H_Booniehat_dirty
4, H_Booniehat_dgtl
4, H_Booniehat_khk_hs


//Military

> MilitaryItems
2, Exile_Item_File4
3, Exile_Item_MobilePhone
3, Exile_Item_File3
3, Exile_Item_File1
3, Exile_Item_File2
12, Exile_Item_PensAndPencils
12, Binocular
16, ItemGPS
16, ItemRadio
16, ItemCompass
16, Exile_Item_Knife
16, Exile_Item_Antibiotic
18, Exile_Item_Bandage //new


> MilitaryClothing
2, U_O_OfficerUniform_ocamo			// Officer Fatigues (Hex)
2, U_I_OfficerUniform				// Combat Fatigues [AAF] (Tee)
2, U_B_Wetsuit						// Wetsuit [NATO]
2, U_O_Wetsuit						// Wetsuit [CSAT]
2, U_I_Wetsuit						// Wetsuit [AAF]
2, U_O_CombatUniform_ocamo			// Heli Pilot Coveralls
2, U_B_CombatUniform_mcam_tshirt	// Combat Fatigues (MTP) (Tee)
3, U_B_CTRG_3						// CTRG Combat Uniform (Tee)
3, U_O_SpecopsUniform_ocamo			// Recon Fatigues (Hex)
3, U_B_CombatUniform_mcam_vest		// Recon Fatigues (MTP)
3, U_B_SpecopsUniform_sgg			// Specop Fatigues (Sage)
4, U_I_CombatUniform				// Combat Fatigues [AAF]
4, U_B_CTRG_1						// CTRG Combat Uniform (UBACS)
4, U_O_SpecopsUniform_blk			// Recon Fatigues (Black)
4, U_I_CombatUniform_tshirt			// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform_shortsleeve	// Combat Fatigues [AAF]
4, U_B_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_O_PilotCoveralls				// Pilot Coveralls [CSAT]
4, U_B_PilotCoveralls				// Pilot Coveralls [NATO]
5, U_O_CombatUniform_oucamo			// Fatigues (Urban) [CSAT]
5, U_I_pilotCoveralls				// Pilot Coveralls [AAF]
5, U_I_HeliPilotCoveralls			// Heli Pilot Coveralls
5, U_B_CombatUniform_mcam			// Combat Fatigues (MTP)
6, U_B_CTRG_2						// CTRG Combat Uniform (UBACS2)
7, U_B_CombatUniform_mcam_worn		// Worn Combat Fatigues (MTP)


> MilitaryBackpacks
15, B_Carryall_ocamo
15, B_Carryall_oucamo
15, B_Carryall_mcamo
18, B_Carryall_oli
18, B_Carryall_khk
19, B_Carryall_cbr


> MilitaryVests
5, V_PlateCarrierL_CTRG
6, V_PlateCarrierIA1_dgtl
6, V_PlateCarrier1_blk
7, V_PlateCarrier1_rgr
7, V_PlateCarrierH_CTRG
7, V_PlateCarrier2_rgr
8, V_PlateCarrierIAGL_dgtl
8, V_PlateCarrier3_rgr
8, V_PlateCarrierGL_rgr
9, V_PlateCarrierIA2_dgtl
9, V_PlateCarrierSpec_rgr


> MilitaryHeadgear
1, H_HelmetCrew_B
1, H_HelmetCrew_O
1, H_HelmetCrew_I
1, H_PilotHelmetFighter_B
1, H_PilotHelmetFighter_O
1, H_PilotHelmetFighter_I
1, H_PilotHelmetHeli_B
1, H_PilotHelmetHeli_O
1, H_PilotHelmetHeli_I
1, H_HelmetB_camo
1, H_CrewHelmetHeli_B
1, H_CrewHelmetHeli_O
1, H_CrewHelmetHeli_I
1, H_HelmetO_oucamo
1, H_HelmetLeaderO_oucamo
1, H_HelmetSpecO_ocamo
1, H_HelmetSpecO_blk
1, H_HelmetO_ocamo
1, H_HelmetLeaderO_ocamo
2, H_HelmetIA_net
2, H_HelmetIA_camo
2, H_HelmetB_grass
2, H_HelmetB_snakeskin
2, H_HelmetB_desert
2, H_HelmetB_black
2, H_HelmetB_sand
2, H_HelmetB_light_grass
2, H_HelmetB_light_snakeskin
2, H_HelmetB_light_desert
2, H_HelmetB_light_black
2, H_HelmetB_light_sand
2, H_BandMask_khk
2, H_BandMask_reaper
2, H_BandMask_demon
3, H_HelmetB
3, H_HelmetB_paint
3, H_HelmetB_light
3, H_HelmetB_plain_blk
3, H_HelmetSpecB
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
3, H_HelmetSpecB_blk
3, H_HelmetIA
4, H_MilCap_ocamo
4, H_MilCap_mcamo
4, H_MilCap_oucamo
4, H_MilCap_blue
4, H_MilCap_rucamo
5, H_MilCap_dgtl


> Ghillies
2, U_O_GhillieSuit			// Ghillie Suit [CSAT]
3, U_B_GhillieSuit			// Ghillie Suit [NATO]
4, U_I_GhillieSuit			// Ghillie Suit [AAF]


> DLCGhillies
1, U_B_FullGhillie_ard		
2, U_B_FullGhillie_lsh
2, U_B_FullGhillie_sard
2, U_O_FullGhillie_ard
2, U_O_FullGhillie_lsh
2, U_O_FullGhillie_sard
3, U_I_FullGhillie_ard
3, U_I_FullGhillie_lsh
3, U_I_FullGhillie_sard


> DLCVests
2, V_PlateCarrierGL_blk
2, V_PlateCarrierSpec_mtp
2, V_PlateCarrierIAGL_dgtl
3, V_PlateCarrierGL_mtp
3, V_PlateCarrierSpec_blk
3, V_PlateCarrierIAGL_oli
3, V_PlateCarrierGL_rgr
3, V_PlateCarrierSpec_rgr


> Rebreathers
1, V_RebreatherB
1, V_RebreatherIR
1, V_RebreatherIA

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
12, Exile_Item_InstaDoc
12, Exile_Item_Bloodbag
20, Exile_Item_PainKillers
20, Exile_Item_Bandage //new
20, Exile_Item_Vishpirin //new
20, Exile_Item_Antibiotic
20, Exile_Item_HeatPack
20, Exile_Item_VitaminBottle


> IndustrialItems //1, Exile_Item_ThermalScannerPro
2, Exile_Item_Grinder //new
2, Exile_Item_Battery_Car
3, Exile_Item_CamoTentKit
3, Exile_Item_FloodLightKit
3, Exile_Item_PortableGeneratorKit
4, Exile_Item_LightBulb
4, Exile_Item_DuctTape
4, Exile_Item_MetalBoard
8, Exile_Item_Rope
8, Exile_Item_MultiMeter
8, Exile_Item_PartVrotor
8, Exile_Item_Shovel //new
12, Exile_Item_Knife
12, Exile_Item_CordlessScrewdriver //Exile_Item_DrillAku
13, Exile_Item_ExtensionCord
14, Exile_Item_Handsaw //new
14, Exile_Item_PartCarglass
14, Exile_Item_PartEngine
15, Exile_Item_Hammer //new
16, Exile_Item_Wrench //new
17, Exile_Item_PartWeel //new Exile_Item_Carwheel
17, Exile_Item_ButaneTorch
18, Exile_Item_OilCanister
19, Exile_Item_GasCooker
20, Exile_Item_Screwdriver //new
21, Exile_Item_Pliers //new
21, Exile_Item_CookingPot
22, Exile_Item_CanOpener//new
22, Exile_Item_Matches
24, Exile_Melee_Axe
30, Exile_Item_JunkMetal


> Vehicle
4, Exile_Item_GasCooker
6, Exile_Item_ExtensionCord
7, Exile_Item_MultiMeter
8, Exile_Item_Hammer //new
9, Exile_Item_Wrench //new
10, Exile_Item_OilCanister
11, Exile_Item_PartVrotor
12, Exile_Item_CordlessScrewdriver //Exile_Item_DrillAku
13, Exile_Item_PartCarglass
14, Exile_Item_PartEngine
15, Exile_Item_Screwdriver //new
16, Exile_Item_Pliers //new
17, Exile_Item_PartWeel //new Exile_Item_Carwheel
18, Exile_Item_PartFueltank
19, Exile_Item_ButaneTorch
20, Exile_Item_Matches
21, Exile_Item_JunkMetal
22, Exile_Item_DuctTape
23, Exile_Item_ToolKit
24, Exile_Item_FuelCanisterFull
25, Exile_Item_FuelCanisterEmpty


// Throwables

> Chemlights
25, Chemlight_blue
25, Chemlight_green
25, Chemlight_red
25, Chemlight_yellow


> RoadFlares
25, FlareGreen_F
25, FlareRed_F
25, FlareWhite_F
25, FlareYellow_F


> SmokeGrenades
14, SmokeShell
14, SmokeShellRed
14, SmokeShellGreen
14, SmokeShellYellow
14, SmokeShellPurple
15, SmokeShellBlue
15, SmokeShellOrange


> Restraints
20, Exile_Item_ZipTie //new


> Electronics
1, Exile_Item_HandyCam
1, Exile_Item_Laptop //new
2, Exile_Item_BaseCameraKit //new
3, Exile_Item_MobilePhone
3, Exile_Item_ToiletPaper
8, Exile_Item_Can_Empty

// Trash or items not currently being used

> Trash
2, Exile_Item_DuctTape
6, Exile_Item_Matches
40, Exile_Item_ToiletPaper
40, Exile_Item_PlasticBottleEmpty
50, Exile_Item_Can_Empty_Green
50, Exile_Item_Can_Empty_Orange
50, Exile_Item_Can_Empty_Blue
50, Exile_Item_Can_Empty_White
60, Exile_Item_Can_Empty



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