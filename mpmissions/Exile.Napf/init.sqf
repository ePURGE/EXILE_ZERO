///////////////////////////////////////////////
T_Server=false;T_Client=false;T_JIP=false;
if(isServer)then{T_Server=true;if(!(isNull player))then{T_Client=true;};
}else{T_Client=true;if(isNull player)then{T_JIP = true;};};
///////////////////////////////////////////////
enableSaving[false,false];
enableRadio false;//disable radio messages
enableSentences false;// no messages from NPC
createCenter EAST; //make east AIside
///////////////////////////////////////////////
ExileMissionConfigRoot = [(str missionConfigFile), 0, -15] call BIS_fnc_trimString;
diag_log format["EXILE init: Load Scripts"];
///////////////////////////////////////////////

[]spawn{
	waitUntil {!isNull player && player == player && (typeOf (vehicle player) == "Exile_Unit_Player")}; //Wait till the player is ready
	sleep 30;
	DAYZ_Exile_version = (isClass (configFile >> "CfgPatches" >> "NS_modules"));
	if(DAYZ_Exile_version)exitWith{hint format["WARNING! Please download the new [ Exile Mod - Exile Zero Addon ]. Otherwise you can not connect to our server."];systemChat format["Please download the new [ Exile Mod - Exile Zero Addon ]. Otherwise you can not connect to our server."];sleep 20;["NotRightVersion",false,1] call BIS_fnc_endMission;};
};


//////////////////////////////////////////////////////
ns_blowout = true; // true / false
ns_blowout_dayz = true;// true / false
ns_blow_delaymod = 0.9; // Blowout delay
ns_blow_itemapsi = "NVGoggles"; //ItemRadio ItemAPSI replacement
ns_blow_playerdamage = 0.18; // Damage players without ns_blow_itemapsi
ns_blow_debug = false; //debug bomb check
//[] execVM "addons\blowout\blowout_init.sqf";
//////////////////////////////////////////////////////
[] execVM "AVS\AVS_fnc_init.sqf";

//////////////////////////////////////////////////////
if (T_Server) then {
	//[] execVM "exilez\init\fn_init.sqf";
};

////////////////////////////////////////////////
if((T_Client)&&(!T_Server))then
{
	dayz_fnc_handleSound = compile preprocessFileLineNumbers "client\zed_zombieSpeak.sqf";
	"zzsound" addPublicVariableEventHandler {[(_this select 1) select 0,(_this select 1) select 1] call dayz_fnc_handleSound;};
	dayz_fnc_handleEyes = compile preprocessFileLineNumbers "client\zed_zombieCanSee.sqf";
	dayz_fnc_handleDamage = compile preprocessFileLineNumbers "client\zed_zombieSetHit.sqf";
	dayz_player_firedCooldown = diag_tickTime;
};
////////////////////////////////////////////////
if(T_JIP)then
{
	dayz_fnc_handleSound = compile preprocessFileLineNumbers "client\zed_zombieSpeak.sqf";
	"zzsound" addPublicVariableEventHandler {[(_this select 1) select 0,(_this select 1) select 1] call dayz_fnc_handleSound;};
	dayz_fnc_handleEyes = compile preprocessFileLineNumbers "client\zed_zombieCanSee.sqf";
	dayz_fnc_handleDamage = compile preprocessFileLineNumbers "client\zed_zombieSetHit.sqf";
	dayz_player_firedCooldown = diag_tickTime;
};
////////////////////////////////////////////////