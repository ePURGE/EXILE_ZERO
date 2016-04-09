/////////////////////////////////////////////////////////
//Tools
/////////////////////////////////////////////////////////


class CraftItemKitMetalScrews: Exile_AbstractCraftingRecipe
{
    name = "Craft 5x Metal Screws";
    pictureItem = "Exile_Item_MetalScrews";
    requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
    {
        {5, "Exile_Item_MetalScrews"}
    };
    components[] =
    {
        {1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Grinder",
		"Exile_Item_Matches"
	};
};

class CraftItemKitCanOpener: Exile_AbstractCraftingRecipe
{
    name = "Craft: Can Opener";
    pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
    {
        {1, "Exile_Item_CanOpener"}
    };
    components[] =
    {
        {1, "Exile_Item_Knife"},
		{1, "Exile_Item_Pliers"}
	};
	tools[] =
	{
		"Exile_Item_ToolKit"
	};
};

/*
class CraftItemKitMetalHedgehogKit: Exile_AbstractCraftingRecipe
{
	name = "Craft: Metal Hedgehog Kit";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_ButaneTorch"}
	};
	tools[] = 
	{
		"Exile_Item_Matches",
		"Exile_Item_Hammer",
		"Exile_Item_Wrench"
	};
};

class CraftItemKitWoodStick: Exile_AbstractCraftingRecipe
{
	name = "Craft: Wood Stick";
	pictureItem = "Exile_Item_WoodSticks";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSticks"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Knife"};
};


class CraftBushKitGreen: Exile_AbstractCraftingRecipe
{
	name = "Craft: Bush Kit (Green)";
	pictureItem = "Exile_Item_BushKit_Green";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_BushKit_Green"}
	};
	components[] = 
	{
		{10, "Exile_Item_Leaves"},
		{8, "Exile_Item_WoodSticks"},
		{1, "Exile_Item_Rope"}
	};
	tools[] = {"Exile_Item_Knife"};
};
*/


///////////////////////////////////////////////////////////////////////////////
//Magazine
///////////////////////////////////////////////////////////////////////////////

/*
class 10Rnd_93x64_DMR_05_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 5x (10Rnd 93x64 DMR Mag)";
    pictureItem = "10Rnd_93x64_DMR_05_Mag";
    requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
    returnedItems[] =
    {
        {5, "10Rnd_93x64_DMR_05_Mag"}
    };
    components[] =
    {
        {1, "150Rnd_93x64_Mag"}
    };
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};

class 10Rnd_338_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 5x (10Rnd .338 Mag)";
    pictureItem = "10Rnd_338_Mag";
    requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
    returnedItems[] =
    {
        {5, "10Rnd_338_Mag"}
    };
    components[] =
    {
        {1, "130Rnd_338_Mag"}
    };
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};

class 10Rnd_127x54_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 2x (5Rnd 127x108 Mag)";
    pictureItem = "5Rnd_127x108_Mag";
    requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
    returnedItems[] =
    {
        {2, "5Rnd_127x108_Mag"}
    };
    components[] =
    {
        {1, "10Rnd_127x54_Mag"}
    };
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};

class 30Rnd_65x39_caseless_mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x (30Rnd 65x39 Mag)";
    pictureItem = "30Rnd_65x39_caseless_mag";
    requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
    returnedItems[] =
    {
        {3, "30Rnd_65x39_caseless_mag"}
    };
    components[] =
    {
        {1, "200Rnd_65x39_cased_Box"}
    };
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};

class 20Rnd_762x51_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x (20Rnd 762x51 Mag)";
    pictureItem = "20Rnd_762x51_Mag";
    requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
    returnedItems[] =
    {
        {3, "20Rnd_762x51_Mag"}
    };
    components[] =
    {
        {1, "150Rnd_762x51_Box"}
    };
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};

class 10Rnd_762x54_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 5x (10Rnd 762x54 Mag)";
    pictureItem = "10Rnd_762x54_Mag";
    requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
    returnedItems[] =
    {
        {5, "10Rnd_762x54_Mag"}
    };
    components[] =
    {
        {1, "150Rnd_762x51_Box"}
    };
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};

class 5Rnd_127x108_APDS_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 2x (5Rnd 127x108 APDS Mag)";
    pictureItem = "5Rnd_127x108_APDS_Mag";
    requiredInteractionModelGroup = "WorkBench";
    requiresFire = 1;
    returnedItems[] =
    {
        {2, "5Rnd_127x108_APDS_Mag"}
    };
    components[] =
    {
        {2, "5Rnd_127x108_Mag"},
        {2, "HandGrenade"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
};
*/

////////////////////////////////////////////////////////
//Tools
////////////////////////////////////////////////////////


class Exile_Item_CookingPot: Exile_AbstractCraftingRecipe
{
    name = "Craft: Cooking Pot";
    pictureItem = "Exile_Item_CookingPot";
    requiresFire = 1;
    returnedItems[] =
    {
        {1, "Exile_Item_CookingPot"}
    };
    components[] =
    {
        {1, "Exile_Item_JunkMetal"}
		
    };
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};

class Exile_Item_JunkMetal3: Exile_AbstractCraftingRecipe
{
    name = "Craft: 1x Junk Metal";
    pictureItem = "Exile_Item_JunkMetal";
    requiresFire = 1;
    returnedItems[] =
    {
        {1, "Exile_Item_JunkMetal"}
    };
    components[] =
    {
        {2, "Exile_Item_CookingPot"}
    };
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};

class Exile_Item_JunkMetal2: Exile_AbstractCraftingRecipe
{
    name = "Craft: 2x Junk Metal";
    pictureItem = "Exile_Item_JunkMetal";
    requiresFire = 1;
    returnedItems[] =
    {
        {2, "Exile_Item_JunkMetal"}
		
	};
    components[] =
    {
        {1, "Exile_Item_MetalBoard"}
    };
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};

class Exile_Item_JunkMetal1: Exile_AbstractCraftingRecipe
{
    name = "Craft: 3x Junk Metal";
    pictureItem = "Exile_Item_JunkMetal";
    requiresFire = 1;
    returnedItems[] =
    {
        {4, "Exile_Item_JunkMetal"}
    };
    components[] =
    {
        {1, "Exile_Item_MetalPole"}
    };
	tools[] =
	{
		"Exile_Item_Hammer"
	};
};

class Exile_Item_DuctTape: Exile_AbstractCraftingRecipe
{
    name = "Craft: Duct Tape";
    pictureItem = "Exile_Item_DuctTape";
    requiresFire = 1;
    returnedItems[] =
    {
        {1, "Exile_Item_DuctTape"}
    };
    components[] =
    {
        {1, "Exile_Item_Rope"},
        {1, "Exile_Item_OilCanister"}
    };
};

class Exile_melee_Axe: Exile_AbstractCraftingRecipe
{
    name = "Craft: Axe";
    pictureItem = "Exile_melee_Axe";
    returnedItems[] =
    {
        {1, "Exile_melee_Axe"}
    };
    components[] =
    {
        {1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WoodLog"},
		{1, "Exile_Item_Rope"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Matches"
	};
};

class Exile_Item_Hammer: Exile_AbstractCraftingRecipe
{
    name = "Craft: Hammer";
    pictureItem = "Exile_Item_Hammer";
    returnedItems[] =
    {
        {1, "Exile_Item_Hammer"}
    };
    components[] =
    {
        {1, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_WoodLog"},
		{1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Matches"
	};
};

class Exile_Item_ButaneTorch: Exile_AbstractCraftingRecipe
{
    name = "Craft: Butane Torch";
    pictureItem = "Exile_Item_ButaneTorch";
    requiresFire = 1;
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "Exile_Item_ButaneTorch"}
    };
    components[] =
    {
        {2, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_OilCanister"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
};


class Exile_Item_Toolkit: Exile_AbstractCraftingRecipe
{
    name = "Craft: Tool Kit";
    pictureItem = "Exile_Item_Toolkit";
    returnedItems[] = 
    {
        {1, "Exile_Item_Toolkit"}
    };
    components[] = 
    {
        {1, "Exile_Item_Hammer"},
        {1, "Exile_Item_Screwdriver"},
        {1, "Exile_Item_Wrench"},
        {1, "Exile_Item_Pliers"}
    };
};



/////////////////////////////////////////////////////////
//Silencer
/////////////////////////////////////////////////////////


class CUP_muzzle_PB6P9: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (PB6P9)";
    pictureItem = "CUP_muzzle_PB6P9";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_PB6P9"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};


class CUP_muzzle_snds_M9: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (M9)";
    pictureItem = "CUP_muzzle_snds_M9";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_M9"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_MicroUzi: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (Micro Uzi)";
    pictureItem = "CUP_muzzle_snds_MicroUzi";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_MicroUzi"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_Bizon: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (Bizon)";
    pictureItem = "CUP_muzzle_Bizon";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_Bizon"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_PBS4: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (PBS4)";
    pictureItem = "CUP_muzzle_PBS4";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_PBS4"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};


class CUP_muzzle_snds_XM8: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (XM8)";
    pictureItem = "CUP_muzzle_snds_XM8";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_XM8"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};


class CUP_muzzle_snds_G36_black: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (G36 Black)";
    pictureItem = "CUP_muzzle_snds_G36_black";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_G36_black"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_G36_desert: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (G36 Desert)";
    pictureItem = "CUP_muzzle_snds_G36_desert";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_G36_desert"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_L85: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (L85)";
    pictureItem = "CUP_muzzle_snds_L85";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_L85"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};


class CUP_muzzle_snds_M16_camo: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (M16 camo)";
    pictureItem = "CUP_muzzle_snds_M16_camo";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_M16_camo"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_M16: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (M16)";
    pictureItem = "CUP_muzzle_snds_M16";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_M16"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_SCAR_L: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (SCAR_L)";
    pictureItem = "CUP_muzzle_snds_SCAR_L";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_SCAR_L"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};


class CUP_muzzle_snds_AWM: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (AWM)";
    pictureItem = "CUP_muzzle_snds_AWM";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_AWM"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_SCAR_H: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (SCAR_H)";
    pictureItem = "CUP_muzzle_snds_SCAR_H";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_SCAR_H"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_M110: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (M110)";
    pictureItem = "CUP_muzzle_snds_M110";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_M110"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

class CUP_muzzle_snds_M14: Exile_AbstractCraftingRecipe
{
    name = "Craft: Silencer (M14)";
    pictureItem = "CUP_muzzle_snds_M14";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_muzzle_snds_M14"}
    };
    components[] =
    {
        {1, "Exile_Item_File2"},
		{1, "Exile_Item_MetalPole"},
        {1, "Exile_Item_ButaneTorch"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Matches"
	};
};

/**/


/////////////////////////////////////////////////////////
//Scopes - NVG
/////////////////////////////////////////////////////////


class CUP_optic_NSPU: Exile_AbstractCraftingRecipe
{
    name = "Craft: NSPU Night Vision Scope";
    pictureItem = "CUP_optic_NSPU";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_optic_NSPU"}
    };
    components[] =
    {
        {1, "Exile_Item_File1"},
		{1, "Binocular"},
		{1, "Exile_Item_HandyCam"},
        {1, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ButaneTorch"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Matches"
	};
};

class CUP_optic_AN_PVS_4: Exile_AbstractCraftingRecipe
{
    name = "Craft: AN/PVS-4 Night Vision Scope";
    pictureItem = "CUP_optic_AN_PVS_4";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_optic_AN_PVS_4"}
    };
    components[] =
    {
        {1, "Exile_Item_File1"},
		{1, "Binocular"},
		{1, "Exile_Item_HandyCam"},
        {2, "Exile_Item_MultiMeter"},
		{2, "Exile_Item_ButaneTorch"},
		{1, "Exile_Item_LightBulb"},
		{2, "Exile_Item_ExtensionCord"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Matches"
	};
};

class CUP_optic_AN_PVS_10: Exile_AbstractCraftingRecipe
{
    name = "Craft: AN/PVS-10 Night Vision Scope";
    pictureItem = "CUP_optic_AN_PVS_10";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_optic_AN_PVS_10"}
    };
    components[] =
    {
        {1, "Exile_Item_File1"},
		{1, "Binocular"},
		{1, "Exile_Item_HandyCam"},
        {1, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ButaneTorch"},
		{2, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Matches"
	};
};

//////////////////////////////////////////////////////
//Scopes - Thermal
//////////////////////////////////////////////////////


class CUP_optic_AN_PAS_13c1: Exile_AbstractCraftingRecipe
{
    name = "Craft: AN/PAS 13C1 Light Thermal Scope";
    pictureItem = "CUP_optic_AN_PAS_13c1";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_optic_AN_PAS_13c1"}
    };
    components[] =
    {
        {1, "Exile_Item_File1"},
		{1, "Binocular"},
		{1, "Exile_Item_HandyCam"},
        {2, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ButaneTorch"},
		{2, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Matches"
	};
};

class CUP_optic_AN_PAS_13c2: Exile_AbstractCraftingRecipe
{
    name = "Craft: AN/PAS 13C2 Heavy Thermal Scope";
    pictureItem = "CUP_optic_AN_PAS_13c2";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_optic_AN_PAS_13c2"}
    };
    components[] =
    {
        {1, "Exile_Item_File1"},
		{1, "Binocular"},
		{1, "Exile_Item_HandyCam"},
        {2, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ButaneTorch"},
		{2, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Matches"
	};
};

class CUP_optic_GOSHAWK: Exile_AbstractCraftingRecipe
{
    name = "Craft: GOSHAWK Thermal Scope";
    pictureItem = "CUP_optic_GOSHAWK";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "CUP_optic_GOSHAWK"}
    };
    components[] =
    {
        {1, "Exile_Item_File1"},
		{1, "Binocular"},
		{1, "Exile_Item_HandyCam"},
        {2, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ButaneTorch"},
		{2, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"},
		{3, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Matches"
	};
};


/////////////////////////////////////////////////////////
//Goggles
/////////////////////////////////////////////////////////


class NVGoggles_INDEP: Exile_AbstractCraftingRecipe
{
    name = "Craft: Night Vision Goggles";
    pictureItem = "NVGoggles_INDEP";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "NVGoggles_INDEP"}
    };
    components[] =
    {
        {1, "Exile_Item_File3"},
		{1, "Binocular"},
		{2, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
};

class Rangefinder: Exile_AbstractCraftingRecipe
{
    name = "Craft: Rangefinder";
    pictureItem = "Rangefinder";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "Rangefinder"}
    };
    components[] =
    {
        {1, "Exile_Item_File3"},
		{1, "Binocular"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ExtensionCord"}
	};
	tools[] =
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Pliers"
	};
};

class Laserdesignator: Exile_AbstractCraftingRecipe
{
    name = "Craft: Laser Designator";
    pictureItem = "Laserdesignator";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "Laserdesignator"}
    };
    components[] =
    {
        {1, "Exile_Item_File3"},
		{1, "Rangefinder"},
		{2, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MultiMeter"},
		{1, "Exile_Item_ExtensionCord"}
	};
	tools[] =
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Pliers"
	};
};


/////////////////////////////////////////////////////////
//Color Weapons
/////////////////////////////////////////////////////////

class CUP_lmg_Mk48_des: Exile_AbstractCraftingRecipe
{
    name = "Coloring: MK48 to (Desert)";
    pictureItem = "CUP_lmg_Mk48_des";
    returnedItems[] =
    {
        {1, "CUP_lmg_Mk48_des"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_lmg_M249_para"}
    };
};

class CUP_lmg_Mk48_wdl: Exile_AbstractCraftingRecipe
{
    name = "Coloring: MK48 to (Woodland)";
    pictureItem = "CUP_lmg_Mk48_wdl";
    returnedItems[] =
    {
        {1, "CUP_lmg_Mk48_wdl"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_lmg_M249_para"}
    };
};

class CUP_arifle_M4A1_BUIS_camo_GL: Exile_AbstractCraftingRecipe
{
    name = "Coloring: M4A1 BUIS to (Camo GL)";
    pictureItem = "CUP_arifle_M4A1_BUIS_camo_GL";
    returnedItems[] =
    {
        {1, "CUP_arifle_M4A1_BUIS_camo_GL"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_M4A1_BUIS_GL"}
    };
};

class CUP_arifle_M4A1_BUIS_desert_GL: Exile_AbstractCraftingRecipe
{
    name = "Coloring: M4A1 BUIS to (Desert GL)";
    pictureItem = "CUP_arifle_M4A1_BUIS_desert_GL";
    returnedItems[] =
    {
        {1, "CUP_arifle_M4A1_BUIS_desert_GL"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_M4A1_BUIS_GL"}
    };
};

class CUP_arifle_M4A1_black: Exile_AbstractCraftingRecipe
{
    name = "Coloring: M4A1 to (Black)";
    pictureItem = "CUP_arifle_M4A1_black";
    returnedItems[] =
    {
        {1, "CUP_arifle_M4A1_black"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_M4A1"}
    };
};

class CUP_arifle_M4A1_camo: Exile_AbstractCraftingRecipe
{
    name = "Coloring: M4A1 to (Camo)";
    pictureItem = "CUP_arifle_M4A1_camo";
    returnedItems[] =
    {
        {1, "CUP_arifle_M4A1_camo"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_M4A1"}
    };
};

class CUP_arifle_G36A_camo: Exile_AbstractCraftingRecipe
{
    name = "Coloring: G36A to (Camo)";
    pictureItem = "CUP_arifle_G36A_camo";
    returnedItems[] =
    {
        {1, "CUP_arifle_G36A_camo"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_G36A"}
    };
};

class CUP_arifle_G36K_camo: Exile_AbstractCraftingRecipe
{
    name = "Coloring: G36K to (Camo)";
    pictureItem = "CUP_arifle_G36K_camo";
    returnedItems[] =
    {
        {1, "CUP_arifle_G36K_camo"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_G36K"}
    };
};

class CUP_arifle_G36C_camo: Exile_AbstractCraftingRecipe
{
    name = "Coloring: G36C to (Camo)";
    pictureItem = "CUP_arifle_G36C_camo";
    returnedItems[] =
    {
        {1, "CUP_arifle_G36C_camo"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_G36C"}
    };
};

class CUP_arifle_MG36_camo: Exile_AbstractCraftingRecipe
{
    name = "Coloring: MG36 to (Camo)";
    pictureItem = "CUP_arifle_MG36_camo";
    returnedItems[] =
    {
        {1, "CUP_arifle_MG36_camo"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_arifle_MG36"}
    };
};

class CUP_srifle_M24_des: Exile_AbstractCraftingRecipe
{
    name = "Coloring: M24 to (Desert)";
    pictureItem = "CUP_srifle_M24_des";
    returnedItems[] =
    {
        {1, "CUP_srifle_M24_des"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_srifle_M14"}
    };
};

class CUP_srifle_M24_wdl: Exile_AbstractCraftingRecipe
{
    name = "Coloring: M24 to (Woodland)";
    pictureItem = "CUP_srifle_M24_wdl";
    returnedItems[] =
    {
        {1, "CUP_srifle_M24_wdl"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_srifle_M14"}
    };
};

class CUP_srifle_SVD_des: Exile_AbstractCraftingRecipe
{
    name = "Coloring: SVD to (Desert)";
    pictureItem = "CUP_srifle_SVD_des";
    returnedItems[] =
    {
        {1, "CUP_srifle_SVD_des"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_srifle_SVD"}
    };
};

class CUP_srifle_AWM_wdl: Exile_AbstractCraftingRecipe
{
    name = "Coloring: AWM to (Woodland)";
    pictureItem = "CUP_srifle_AWM_wdl";
    returnedItems[] =
    {
        {1, "CUP_srifle_AWM_wdl"}
    };
    components[] =
    {
        {1, "Exile_Item_PensAndPencils"},
		{1, "CUP_srifle_AWM_des"}
    };
};


/////////////////////////////////////////////////////////
//Medic mit BambiOverall
/////////////////////////////////////////////////////////


class Exile_Item_Bandage: Exile_AbstractCraftingRecipe
{
    name = "Craft: Bandage";
    pictureItem = "Exile_Item_Bandage";
    returnedItems[] =
    {
        {1, "Exile_Item_Bandage"}
    };
    components[] =
    {
        {1, "Exile_Uniform_BambiOverall"}
    };
	tools[] =
    {
        "Exile_Item_Knife"
    };
};


/////////////////////////////////////////////////////////
//Explosives
/////////////////////////////////////////////////////////


class SatchelCharge_Remote_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft: Explosive Satchel Charge";
    pictureItem = "SatchelCharge_Remote_Mag";
    requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "SatchelCharge_Remote_Mag"}
    };
    components[] =
    {
        {1, "Exile_Item_File4"},
        {1, "Exile_Item_DuctTape"},
        {1, "Exile_Item_MobilePhone"},
        {1, "Exile_Item_MultiMeter"},
        {4, "HandGrenade"}
    };
	tools[] =
    {
        "Exile_Item_Pliers"
    };
};

class APERSTripMine_Wire_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft: APRES Tripmine";
    pictureItem = "APERSTripMine_Wire_Mag";
    returnedItems[] =
    {
        {1, "APERSTripMine_Wire_Mag"}
    };
    components[] =
    {
        {2, "MiniGrenade"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_WoodSticks"},
        {1, "Exile_Item_DuctTape"}
    };
};


class ClaymoreDirectionalMine_Remote_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft: Claymore Charge";
    pictureItem = "ClaymoreDirectionalMine_Remote_Mag";
	requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {
        {1, "ClaymoreDirectionalMine_Remote_Mag"}
    };
    components[] =
    {
        {1, "Exile_Item_File4"},
		{2, "HandGrenade"},
		{1, "Exile_Item_JunkMetal"},
        {1, "Exile_Item_MultiMeter"}
	};
	tools[] =
    {
        "Exile_Item_Pliers"
    };
};


class APERSMine_Range_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft: APERS Mine";
    pictureItem = "APERSMine_Range_Mag";
    returnedItems[] =
    {
        {1, "APERSMine_Range_Mag"}
    };
    components[] =
    {
        {1, "Exile_Item_File4"},
		{2, "MiniGrenade"},
		{1, "Exile_Item_GasCooker"}
    };
	tools[] =
    {
        "Exile_Item_Pliers"
    };
};

/*///////////////////////////////////////////////////////*/