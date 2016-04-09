uiSleep 10;
if (!hasInterface) exitWith {};
waitUntil {!isNil "ExileClientLoadedIn"}; // Waits for Exile to finish up
if(player diarySubjectExists "spacer1")exitwith{};

player createDiarySubject ["spacer1","------------------------"];
player createDiarySubject ["serverrules","SERVER RULES"];
player createDiarySubject ["controls","CONTROLS"];
player createDiarySubject ["spacer2","------------------------"];
player createDiarySubject ["recipes","CRAFT RECIPES"];
player createDiarySubject ["craft_medical","+medical"];
player createDiarySubject ["craft_tools","+tools"];
player createDiarySubject ["craft_builds","+builds"];
player createDiarySubject ["craft_material","+material"];
player createDiarySubject ["craft_scopes","+scopes"];
player createDiarySubject ["craft_goggles","+goggles"];
player createDiarySubject ["craft_silencer","+silencer"];
player createDiarySubject ["craft_explosive","+explosive"];
player createDiarySubject ["spacer3","------------------------"];
//player createDiarySubject ["serverconfig5","LOOT-TYPES"];
player createDiarySubject ["serverconfig4","VEHICLES"];
player createDiarySubject ["serverconfig1","TERRITORIES"];
player createDiarySubject ["serverconfig3","MAKE RESPECT"];
player createDiarySubject ["spacer4","------------------------"];
player createDiarySubject ["missions","AI-MISSIONS"];
player createDiarySubject ["spacer5","------------------------"];
player createDiarySubject ["change","CHANGE LOG"];


// server rules
player createDiaryRecord ["change",
["CHANGE LOG",
"
<br/>
<font color='#A9E2F3'>== CHANGE LOG ==================================</font><br/>
<br/>
<br/>
<br/>[Added] over 120 Persistent Cars/Trucks/Helicopters
<br/>[Added] Radiation Island in Bottom left of Map
<br/>[Added] AI Island in Top right of Map
<br/>[Added] Zombies (New Engine)
<br/>[Added] Map-Edits
<br/>[Added] Custom Loot Tables
<br/>
<br/>
<br/>NOW WE TEST THE NEW EXILE v0.9.6. THE CHANGE-LOG YOU CAN FIND ON: www.exilemod.com




"
]
];	





fnc_BRIEFING_getPicture = {
_recipeConfig = missionConfigFile >> "CfgCraftingRecipes" >> (_this select 0);
_pictureItemClassName = getText(_recipeConfig >> "pictureItem");
_item = [_pictureItemClassName] call exsys_fnc_fetchCfgDetails;
_itemconfig = (_item select 6);
_pictureItemConfig = configFile >> _itemconfig >> _pictureItemClassName;
_recipePicture = getText(_pictureItemConfig >> "picture");
if(isNil "_recipePicture")then{_recipePicture = "\exile_assets\texture\item\Dummy.paa";};
_recipePicture
};

fnc_BRIEFING_getConfig = {
_recipeConfig = missionConfigFile >> "CfgCraftingRecipes" >> (_this select 0);
_recipeName = getText(_recipeConfig >> "name");
_pictureItemClassName = getText(_recipeConfig >> "pictureItem");
_returnedItems = getArray(_recipeConfig >> "returnedItems");
_components = getArray(_recipeConfig >> "components");
_tools = getArray(_recipeConfig >> "tools");
_required = getText(_recipeConfig >> "requiredInteractionModelGroup");
_requiresFire = getNumber(_recipeConfig >> "requiresFire");
[_recipeName,_pictureItemClassName,_returnedItems,_components,_tools,_required,_requiresFire]
};

fnc_BRIEFING_getComponents = {
_ret = "";
{
	_item = [(_x select 1)] call exsys_fnc_fetchCfgDetails;
	_name = (_item select 1);
	_pic = (_item select 2);
	_ret = _ret + format["<br/><img image='%2' width='25' height='25'/> <font size='12' color='#FFFFFF'><font color='#A9E2F3'>%3x</font> %1 </font>",toUpper(_name),_pic,(_x select 0)];
} foreach ((_this select 0) select 3) select 3;
if !(_ret isEqualTo "") then {_ret = "<br/><font color='#A9E2F3'>REQUIRED MATERIALS:</font> " + _ret;};
_ret
};

fnc_BRIEFING_getToolsArray = {
_ret = "";
if !(((_this select 0) select 4) isEqualTo []) then {
	{
	_item = [_x] call exsys_fnc_fetchCfgDetails;
	_name = (_item select 1);
	_pic = (_item select 2);
	_ret = _ret + format["<br/><img image='%2' width='25' height='25'/> <font size='12' color='#FFFFFF'><font color='#A9E2F3'>1x</font> %1 </font>",toUpper(_name),_pic];
	} foreach ((_this select 0) select 4);
};
if !(_ret isEqualTo "") then {_ret = "<br/><br/><font color='#A9E2F3'>ADDITIONAL EQUIPMENT:</font> " + _ret;};
_ret
};

fnc_BRIEFING_getTools = {
_ret = "";
if (((_this select 0) select 6) isEqualTo 1) then {_ret = _ret + format["<font color='#FFFFFF'><font color='#A9E2F3'>#</font> %1 </font>",toUpper("FIRE PLACE")];};
if !(((_this select 0) select 5) isEqualTo "") then {_ret = _ret + format["<font color='#FFFFFF'><font color='#A9E2F3'>#</font> %1 </font>",toUpper((_this select 0) select 5)];};
if !(_ret isEqualTo "") then {_ret = "<br/><br/><font color='#A9E2F3'>CRAFT ON:</font> " + _ret + "";};
_ret
};

private[
"_craftarray_material",
"_craftarray_explosive",
"_craftarray_silencer",
"_craftarray_scopes",
"_craftarray_goggles",
"_craftarray_builds",
"_craftarray_tools",
"_craftarray_medical",
"_iconfig"];

_craftarray_medical = ["Exile_Item_Bandage"];
_craftarray_material = ["CraftMetalBoard","CraftMetalPole","Exile_Item_JunkMetal3","Exile_Item_JunkMetal2","Exile_Item_JunkMetal1"];
_craftarray_explosive = ["APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSMine_Range_Mag","SatchelCharge_Remote_Mag"];
_craftarray_silencer = ["CUP_muzzle_PB6P9","CUP_muzzle_snds_M9","CUP_muzzle_snds_MicroUzi","CUP_muzzle_Bizon","CUP_muzzle_PBS4","CUP_muzzle_snds_XM8","CUP_muzzle_snds_G36_black","CUP_muzzle_snds_G36_desert","CUP_muzzle_snds_L85","CUP_muzzle_snds_M16_camo","CUP_muzzle_snds_M16","CUP_muzzle_snds_SCAR_L","CUP_muzzle_snds_AWM","CUP_muzzle_snds_SCAR_H","CUP_muzzle_snds_M110","CUP_muzzle_snds_M14"];
_craftarray_scopes = ["CUP_optic_NSPU","CUP_optic_AN_PVS_4","CUP_optic_AN_PVS_10","CUP_optic_AN_PAS_13c1","CUP_optic_AN_PAS_13c2","CUP_optic_GOSHAWK"];
_craftarray_goggles = ["NVGoggles_INDEP","Rangefinder","Laserdesignator"];
_craftarray_builds = ["CraftFirePlace","CraftFloodLight","CraftPortableGenerator","CraftStorageCrate","CraftWoodPlank","CraftWorkBench"];
_craftarray_tools = ["CraftItemKitCanOpener","Exile_Item_CookingPot","Exile_Item_DuctTape","Exile_melee_Axe","Exile_Item_Hammer","Exile_Item_ButaneTorch","Exile_Item_Toolkit","CraftItemKitMetalScrews"];

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_medical",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_medical;

/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_tools",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_tools;

/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_builds",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_builds;


/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_goggles",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_goggles;


/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_scopes",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_scopes;


/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_silencer",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_silencer;


/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_explosive",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_explosive;


/*-----*/

{
_iconfig = [_x] call fnc_BRIEFING_getConfig;
player createDiaryRecord ["craft_material",
["" + (format["%1",(_iconfig) select 0]) + "","" + (format[
"
<br/>
<img image='%2' height='35'/> <font size='14' color='#FFFFFF'>%1</font><br/>
<font color='#A9E2F3'>=================================================</font><br/>
%3
%4
%5
<hr/>
<br/>
",
(_iconfig) select 0,
([_x] call fnc_BRIEFING_getPicture),
([(_iconfig)] call fnc_BRIEFING_getComponents),
([(_iconfig)] call fnc_BRIEFING_getToolsArray),
([(_iconfig)] call fnc_BRIEFING_getTools)
]) + ""
]];
} foreach _craftarray_material;



// server rules
player createDiaryRecord ["serverconfig5",
["LOOT-TYPES",
"
<br/>
<font color='#A9E2F3'>== SERVER LOOT-CATEGORIES ==================================</font><br/>
<br/>
<br/>- Industrial (60%)
<br/>- Farm (100%)
<br/>- Office (80%)
<br/>- VehicleService (100%)
<br/>- Hospital (60%)
<br/>- HospitalSpecial (100%)
<br/>- Residential (80%)
<br/>- SuperMarket (100%)
<br/>
<br/>- Military (50%)
<br/>- MilitarySpecial (70%)
<br/>- MilitaryHighLoot (100%)
<br/>
<br/>- HeliCrash (100%)
<br/>- C130Crash (100%)
<br/>
"
]
];	


// server rules
player createDiaryRecord ["serverrules",
["SERVER RULES",
"
<br/>
<font color='#A9E2F3'>== SERVER RULES ================================</font><br/>
<br/>	
<br/>* NO GLITCHING
<br/>* NO BUG-USING
<br/>* NO VOICE IN SIDE CHANNEL
<br/>* NO COMBAT-LOG!
<br/>			
<br/><font color='#999999'>If you have questions, visit us at our Teamspeak server:
<br/>You can find the TS-IP on our website.</font>
<br/>				
<br/>
<br/>
"
]
];		
	
	
// server controls
player createDiaryRecord ["controls",
["GAME CONTROLS",
"
<br/>
<font color='#A9E2F3'>== IMPORTANT GAME CONTROLS =========================</font><br/>
<br/>
<br/>* Press <font color='#A9E2F3'>KEY 0</font> to activate auto-run function.
<br/>* Press <font color='#A9E2F3'>KEY 4</font> to holster your weapon.		
<br/>* Press <font color='#A9E2F3'>KEY 5</font> to activate earplugs function.	
<br/>* Press <font color='#A9E2F3'>KEY 6</font> to open your xm8 tablet.
<br/>
<br/>* Press <font color='#A9E2F3'>TAB KEY</font> switch your player health/temp/thirst.
<br/>
<br/>* Press <font color='#A9E2F3'>ACTION-KEY 2</font> to activate the ingame group marker function.
<br/>* Press <font color='#A9E2F3'>WINDOWS-KEY</font> to switch your group-icons. (names on/off)
<br/>			
<br/><font color='#666666'></font>
<br/>				
<br/>
<br/>
"
]
];	


// server Loot Categories
player createDiaryRecord ["serverconfig3",
["PLAYER RESPECT",
"
<br/>
<font color='#A9E2F3'>== Player Respect ================================</font><br/>
<br/>
<br/><font color='#999999'>Amount of respect earned/lost for certain types of frags</font>
<br/>
<br/># <font color='#A9E2F3'>0</font> = (Bambi slayers)
<br/># <font color='#A9E2F3'>-100</font> = (For party members)
<br/># <font color='#A9E2F3'>+50</font> = (Roadkill)
<br/># <font color='#A9E2F3'>+60</font> = (Roadkill, but with chopper/plane)
<br/># <font color='#A9E2F3'>+80</font> = (Keeps killing the same guy)
<br/># <font color='#A9E2F3'>+100</font> = (Normal kill)
<br/># <font color='#A9E2F3'>+150</font> = (MG, also vehicle MGs)
<br/># <font color='#A9E2F3'>+300</font> = (Axe)
<br/># <font color='#A9E2F3'>+400</font> = (Out of car/chopper/boat)
<br/># <font color='#A9E2F3'>+600</font> = (fly into chopper/plane)
<br/>
<br/>
<br/>Bonus per full 100m = <font color='#A9E2F3'>+10</font>
<br/>First blood after server restart = <font color='#A9E2F3'>+100</font>
<br/>Bonus for Kill Streak = <font color='#A9E2F3'>+50</font>
<br/>Kill someone while you are in your own territory = <font color='#A9E2F3'>+20</font>
<br/>Kill someone who is in his own territory = <font color='#A9E2F3'>+20</font>
<br/>
<br/><font color='#A9E2F3'>Important!</font>
<br/>When you die you will lose 2% of your respect.
<br/>If you kill someone you will receive 2% of your enemy respect.
<br/>
<br/>
<br/>
"
]
];


// vehicles
player createDiaryRecord ["serverconfig4",
["VEHICLES",
"
<br/>
<font color='#A9E2F3'>== Persistent Vehicles ==========================</font><br/>
<br/>
<br/>Important! All vehicles are persistent on map.
<br/>
<br/>You only can find and repair it around the map.
<br/><font color='#FF0000'>You can not purchase new vehicles!</font>
<br/>
<br/>
<br/>
<br/>
"
]
];



// server Territories
player createDiaryRecord ["serverconfig1",
["TERRITORIES",
"
<br/>
<font color='#A9E2F3'>== Territories ==================================</font><br/>
<br/>
<br/>Please do not forget <font color='#FF0000'>every 14 days</font> to pay your territory! You can pay at any time this fee at Trader office.
<br/>
<br/>Protection Period = <font color='#A9E2F3'>14 Days</font>
<br/>PopTab Amount Per Object = <font color='#A9E2F3'>50 Tabs</font>
<br/>Respect Amount Per Object = <font color='#A9E2F3'>25 Respect</font>
<br/>
<br/>Base Cost / Radius
<br/><font color='#999999'>Level 1 is allways for Pop Tabs, >= 2 for Respect</font>
<br/># Level 01:  = <font color='#A9E2F3'>15m</font> - <font color='#A9E2F3'>30 Objects</font> (buy for 5.000 pop tabs)
<br/># Level 02:  = <font color='#A9E2F3'>30m</font> - <font color='#A9E2F3'>60 Objects</font> (buy for 10.000 respect)
<br/># Level 03:  = <font color='#A9E2F3'>45m</font> - <font color='#A9E2F3'>90 Objects</font> (buy for 15.000 respect)
<br/># Level 04:  = <font color='#A9E2F3'>60m</font> - <font color='#A9E2F3'>120 Objects</font> (buy for 20.000 respect)
<br/># Level 05:  = <font color='#A9E2F3'>75m</font> - <font color='#A9E2F3'>150 Objects</font> (buy for 25.000 respect)
<br/># Level 06:  = <font color='#A9E2F3'>90m</font> - <font color='#A9E2F3'>180 Objects</font> (buy for 30.000 respect)
<br/># Level 07:  = <font color='#A9E2F3'>105m</font> - <font color='#A9E2F3'>210 Objects</font> (buy for 35.000 respect)
<br/># Level 08:  = <font color='#A9E2F3'>120m</font> - <font color='#A9E2F3'>240 Objects</font> (buy for 40.000 respect)
<br/># Level 09:  = <font color='#A9E2F3'>135m</font> - <font color='#A9E2F3'>270 Objects</font> (buy for 45.000 respect)
<br/># Level 10:  = <font color='#A9E2F3'>150m</font> - <font color='#A9E2F3'>300 Objects</font> (buy for 50.000 respect)
<br/>				
<br/>Maximum Radius = <font color='#A9E2F3'>150m</font>
<br/>Maximum Number of Objects = <font color='#A9E2F3'>300 Object per Flag</font>
<br/>Minimum Distance To Other Territories = <font color='#A9E2F3'>325m</font>
<br/>Minimum Distance To TraderZones = <font color='#A9E2F3'>1000m</font>
<br/>Minimum Distance To SpawnZones = <font color='#A9E2F3'>180m</font>
<br/>Minimum Distance To Towns / Citys = <font color='#A9E2F3'>180m</font>
<br/>Minimum Distance To All Military Objects = <font color='#A9E2F3'>500m</font>
<br/>
<br/>
<br/>
<br/>
"
]
];
	
	
	
	
// Missions Section
player createDiaryRecord ["missions",
		[
			"SIDE MISSIONS",
				"
					<br/>

<br/>Now we test our new mission system.
<br/>It includes 3 missions. Others will follow soon.
				"
		]
	];	