/*
 **  BLOWOUT MODULE - of Namalsk
 *   CLIENT-SIDE script 
*/
 if (isNil("ns_blow_emp")) then { ns_blow_emp = false; }; 
 if (isNil("ns_blowout")) then { ns_blowout = true; }; 
 if (isNil("ns_blowout_dayz")) then { ns_blowout_dayz = false; };
 if (isNil("ns_blow_delaymod")) then { ns_blow_delaymod = 1; };
 if (isNil("ns_blow_prep")) then { ns_blow_prep = false; };
 if (isNil("ns_blow_status")) then { ns_blow_status = false; };

bl_detection = 
{
	playSound "bl_detect";
	uiSleep 0.2;
    playSound "bl_detect";
    uiSleep 0.5;
    playSound "bl_detect";
    uiSleep 0.1;
    playSound "bl_detect";    
    uiSleep 2;
    playSound "bl_detect";        
    playSound "apsi_on";
	"filmGrain" ppEffectEnable true; 
	"filmGrain" ppEffectAdjust [0.15, 1, 1, 0.1, 1, false];
	"filmGrain" ppEffectCommit 0;
    uiSleep 1;
    playSound "bl_detect";
    uiSleep 0.2;
    playSound "bl_detect";
    uiSleep 23.8;
    waitUntil{ns_blow_status};
    playSound "bl_detect";
    uiSleep 0.2;
    playSound "bl_detect";
};

bl_flash =
{
	titleText["","WHITE OUT",1];
	if (cameraView == "Internal") then {player switchCamera "External";};
	titleText["","WHITE IN",1]; 
	uiSleep 0.35;
};
bl_local_anims = 
{
    4 spawn BIS_fnc_earthQuake;
	if(alive player && (vehicle player isEqualTo player))then{player playMoveNow "AcinPercMstpSnonWnonDnon_agony";};
};
bl_local_def_anim = 
{
   disableUserInput false;
   if(alive player && (vehicle player isEqualTo player))then{
		if((animationState player) isEqualTo "AcinPercMstpSnonWnonDnon_agony")then {
			player playMoveNow "amovppnemstpsraswrfldnon";
		};
   };
};

bl_preparations = {
	playSound "ns_fx_drone2";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	uiSleep 4;
	
	playSound "ns_fx_drone1";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	//-------------------------------------------------
	uiSleep 54.7;
	//-------------------------------------------------
	
	playSound "ns_fx_misc4";
	
	//-------------------------------------------------
	uiSleep 13.5;
	//-------------------------------------------------
	
	playSound "ns_fx_drone2";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	uiSleep 10;
	
	playSound "ns_fx_drone1";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	//-------------------------------------------------
	uiSleep 77;
	//-------------------------------------------------
	
	playSound "ns_fx_drone2";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	uiSleep 10;
	
	playSound "ns_fx_drone1";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	//-------------------------------------------------
	uiSleep 50;
	//-------------------------------------------------
	
	playSound "ns_fx_drone2";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	uiSleep 7;
	
	playSound "ns_fx_drone1";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	//-------------------------------------------------
	uiSleep 33;
	//-------------------------------------------------
	
	playSound "ns_fx_drone2";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	uiSleep 5;
	
	playSound "ns_fx_drone1";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	//-------------------------------------------------
	uiSleep 25;
	//-------------------------------------------------
	
	playSound "ns_fx_misc4";
	playSound "ns_fx_drone2";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
	
	uiSleep 3;
	
	playSound "ns_fx_drone1";
	"chromAberration" ppEffectAdjust [0.25,0,true];
	"chromAberration" ppEffectEnable true;
	"chromAberration" ppEffectCommit 0.5;
	uiSleep 0.2; 
	"chromAberration" ppEffectAdjust [-0.15,0,true];
	"chromAberration" ppEffectCommit 0.35;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [-0.05,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.1;
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 0.20;
	uiSleep 0.25; 
	"chromAberration" ppEffectEnable false;
};

while {true} do {
	if (isNil("ns_blowout_dayz")) then { ns_blowout_dayz = false; };

	waitUntil{ns_blow_prep};

	diag_log format["[NAC BLOWOUT CLIENT] :: ns_blow_prep = %1 Blowout is preparing, take a cover!", ns_blow_prep];

	if (player hasWeapon ns_blow_itemapsi) then {
		_bul = [] spawn bl_detection;
	};

	_bul = [] spawn bl_preparations;

	waitUntil{ns_blow_status};

    diag_log format["[NAC BLOWOUT CLIENT] :: ns_blow_status = %1 Blowout confirmation received.", ns_blow_status];
   
   waitUntil{ns_blow_action};
   
   diag_log format["[NAC BLOWOUT CLIENT] :: ns_blow_action = %1 Blowout action received.", ns_blow_status];  

   playSound "bl_begin";
   _bul = [] spawn bl_flash;
   "dynamicBlur" ppEffectAdjust [8];
   "dynamicBlur" ppEffectEnable true;
   "dynamicBlur" ppEffectCommit 0;
   "dynamicBlur" ppEffectAdjust [0.1];
   "dynamicBlur" ppEffectCommit 0.75;
   "chromAberration" ppEffectAdjust [0.25,0,true];
   "chromAberration" ppEffectEnable true;
   "chromAberration" ppEffectCommit 0.5;
   uiSleep 0.5;
   "chromAberration" ppEffectAdjust [-0.15,0,true];
   "chromAberration" ppEffectCommit 0.35;
   uiSleep 0.5;
   _bul = [] spawn bl_local_anims;
   "chromAberration" ppEffectAdjust [-0.05,0,true];
   "chromAberration" ppEffectCommit 0.20;
   uiSleep 0.20;
   "chromAberration" ppEffectAdjust [0,0,true];
   "chromAberration" ppEffectCommit 0.20;
   uiSleep 0.20; 
   "chromAberration" ppEffectEnable false;
   "dynamicBlur" ppEffectAdjust [3];
   "dynamicBlur" ppEffectCommit 0.75;
   uiSleep 0.75;
	_nonapsi_ef = ppEffectCreate ["colorCorrections", 1555]; 
	_nonapsi_ef ppEffectEnable true;
	_nonapsi_ef ppEffectAdjust [1.0, 1.0, -0.1, [1.0, 0.2, 0.2, 0.0], [1.0, 0.4, 0.0, 0.1],[1.0,0.3,0.3, 0.5]];
	_nonapsi_ef ppEffectCommit 2;
	uiSleep 2;
	
	if (!(player hasWeapon ns_blow_itemapsi)) then {
		playSound "bl_psi";
	};
	
	_s = round (random 3); 
	switch (_s) do 
	{
		case 0: {playSound "bl_wave1";};
		case 1: {playSound "bl_wave2";};
		case 2: {playSound "bl_wave3";};
		case 3: {playSound "bl_wave1";};
	};
	
	_nonapsi_ef ppEffectAdjust [1.0, 1.0, -0.1, [1.0, 0.1, 0.1, 0.0], [1.0, 0.1, 0.0, 0.1],[1.0,0.1,0.0, 0.5]];
	_nonapsi_ef ppEffectCommit 5;
	uiSleep 5;
	
	_s = round (random 3); 
	switch (_s) do 
	{
		case 0: {playSound "bl_wave1";};
		case 1: {playSound "bl_wave2";};
		case 2: {playSound "bl_wave3";};
		case 3: {playSound "bl_wave1";};
	};

	_nonapsi_ef ppEffectAdjust [1.0, 1.0, -0.1, [0.0, 0.0, 0.0, 0.0], [0.0, 0.0, 0.0, 5.0],[0.4,0.0,0.0, 0.7]];
	_nonapsi_ef ppEffectCommit 1;

	
////// BLACKOUT	
	
	uiSleep 0.1;
	playSound "bl_full";
	uiSleep 0.1;
	titleText["","BLACK OUT",1];
	disableUserInput true;
	"dynamicBlur" ppEffectAdjust [3];
    "dynamicBlur" ppEffectCommit 0;
	uiSleep 1.5;
	disableUserInput false;
	if(alive player && (vehicle player isEqualTo player))then{player playMoveNow "amovppnemstpsraswrfldnon";};

	if(ns_blowout_dayz) then {
		private["_isinbuilding"];
		_isinbuilding = false;
		if([player] call NAC_fnc_isInsideBuilding) then {
			_isinbuilding = true;
		};
		if (!(player hasWeapon ns_blow_itemapsi)) then {
			diag_log format["[NAC BLOWOUT CLIENT] :: [S] Player does not have APSI"];
			if (!_isinbuilding) then {
				diag_log format["[NAC BLOWOUT CLIENT] :: [S] and is not in a building, sorry."];
				player setDamage(damage player+0.18);
				diag_log format["[NAC BLOWOUT CLIENT] :: [S] player has been damaged by blowout by 0.15"];
			} else {
				diag_log format["[NAC BLOWOUT CLIENT] :: [S] but is in some building, good for him."];
			};
		} else {
			diag_log format["[NAC BLOWOUT CLIENT] :: [S] Player does have APSI, I do not have problem with him."];
		};
	};
	
	uiSleep 1;
	4 fadeSound 0;
	if (player hasWeapon ns_blow_itemapsi) then {
		disableUserInput false;
		_bul = [] spawn bl_local_def_anim;
	};
	uiSleep 11;
	playSound "bl_psi";
	16 fadeSound 1;
	"dynamicBlur" ppEffectAdjust [0];
	"dynamicBlur" ppEffectCommit 16;
	disableUserInput false;
	_bul = [] spawn bl_local_def_anim;
	titleText["","BLACK IN",10];
	_nonapsi_ef ppEffectAdjust [1, 1, 0, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 1], [1, 1, 1, 0.0]]; 
	_nonapsi_ef ppEffectCommit 2;
	waitUntil {!ns_blow_action}; //CHECK STATUS SERVER
	diag_log format["[NAC BLOWOUT CLIENT] :: ns_blow_action = %1 Blowout actions end received.", ns_blow_action];
	uiSleep 16;
	if (player hasWeapon ns_blow_itemapsi) then{
		playSound "apsi_off";
		"filmGrain" ppEffectEnable false;
	};
	_nonapsi_ef ppEffectEnable false;
	"dynamicBlur" ppEffectEnable false;
	ppEffectDestroy _nonapsi_ef;
	waitUntil {!ns_blow_status};
	disableUserInput false;
	diag_log format["[NAC BLOWOUT CLIENT] :: ns_blow_status = %1 Blowout end received.", ns_blow_status];  
};