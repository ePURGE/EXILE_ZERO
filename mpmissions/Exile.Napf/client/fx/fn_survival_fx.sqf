/**
 * ExileClient_survival_fx_loop
 * for Exile Mod
*/
if (!hasInterface || isServer) exitWith {};
waitUntil {uiSleep 1; (typeOf player) isEqualTo "Exile_Unit_Player"};

private ["_masterTime","_currentTime","_AmbFXChangeTime","_Last_AmbFXChangeTime","_fnc_fx_ambient"];
/*----------------------------*/
_fnc_fx_ambient = {
	private["_snd"];
	_snd = format["dayz_fx_misc%1",(floor(random 13))];
	[player,player] say3D _snd;
};
/*----------------------------*/
_masterTime=diag_tickTime;
_AmbFXChangeTime = 120; _Last_AmbFXChangeTime = diag_tickTime;
/*----------------------------*/
while{alive player} do {
_currentTime=diag_tickTime;
/*AMBIENT*/if((_currentTime-_Last_AmbFXChangeTime)>=_AmbFXChangeTime)then{[] spawn _fnc_fx_ambient;_Last_AmbFXChangeTime=diag_tickTime;};
uiSleep 1;
};

exit
