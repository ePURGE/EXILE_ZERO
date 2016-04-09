/**
 * ExileClient_survival_fx_loop
 * for Exile Mod
*/
if (!hasInterface || isServer) exitWith {};
waitUntil {uiSleep 1; (typeOf player) isEqualTo "Exile_Unit_Player"};

FX_RADIATION = false;
A2LIGHTS_CHECK = false;
A2LIGHTS = false;
life_themp = 100;

private ["_masterTime","_currentTime","_ZoneChangeTime","_Last_ZoneChangeTime","_AmbFXChangeTime","_Last_AmbFXChangeTime","_ThempChangeTime","_Last_ThempChangeTime","_AtemNebelChangeTime","_Last_AtemNebelChangeTime","_fnc_temperatur","_fnc_atemnebel","_fnc_checkinsideBuilding","_fnc_radiationZone","_fnc_fx_ambient"];

/*File: fn_checkinsideBuilding.sqf*/
fnc_checkinsideBuilding = 
{
private["_un","_bu","_ty","_rp","_bb","_min","_max","_myX","_myY","_myZ","_in"];_un=(_this select 0);_bu=nearestObject[_un,"House"];if(isNull _bu)exitWith{false};_ty=(typeOf _bu);_rp=(_bu worldToModel(getPosATL _un));_bb=(boundingBox _bu);_min=(_bb select 0);_max=(_bb select 1);_myX=(_rp select 0);_myY=(_rp select 1);_myZ=(_rp select 2);if((_myX>(_min select 0))and(_myX<(_max select 0)))then{if((_myY>(_min select 1))and(_myY<(_max select 1)))then{if((_myZ>(_min select 2))and(_myZ<(_max select 2)))then{_in=true;}else{_in=false;};}else{_in=false;};}else{_in=false;};_in
};
/*----------------------------*/
_fnc_temperatur = 
{
private ["_cf","_hm","_sub","_isb","_isv","_isw","_isr","_iss","_fp","_th","_rn","_wth","_dc"];_sub=0;_cf=if((uniform player)=="")then{-1}else{0};_dc=if((uniform player)in["U_B_Wetsuit","U_I_Wetsuit","U_O_Wetsuit"])then{true}else{false};_isb=false;_isv=false;_isw=false;_rn=round((rain * 10)/2);_wth=round(((overcast * 10) + _rn)/2);_isr=if(rain>0)then{true}else{false};_iss=if(sunOrMoon>0)then{true}else{false};if((vehicle player)!=player)then{_sub=_sub+round(6 + _cf);_isv=true;}else{private["_vel","_speed"];_vel=velocity player;_speed=round((_vel distance[0,0,0]) * 3.5);_sub=(9 * (_speed / 20)) min 7;_sub=round((_sub-floor(random 2))+_cf);};private ["_fp"];_fp=nearestObjects[player,["Land_Fire","Land_Campfire","Land_Campfire_F","Campfire_burning_F","Land_FirePlace_F","FirePlace_burning_F","MetalBarrel_burning_F","Exile_Construction_CampFire_Static"],6];if(({inflamed _x}count _fp)>0&&(!_isv))then{_sub=_sub+round((15 / (0.5 * ((player distance(_fp select 0)) max 1)^2))+_cf);};if([player] call fnc_checkinsideBuilding)then{_sub=_sub+round(9 + _cf);_isb=true;}else{_isb=false;};if(_iss&&(!_isr)&&(overcast<=0.4)&&(!_isb))then{_sub=_sub+round(12 + _cf);};if((underwater player)&&(!_isv)&&(!_isb)&&(!_dc))then{_isw=true;_sub=_sub+round(-8 + _cf);};if(_isr&&(!_isv)&&(!_isb))then{_sub=_sub+round((rain * -3)+_cf);};if((!_iss)&&(!_isv))then{if(_isb)then{_sub=_sub+round((-1 + _wth)+_cf);}else{_sub=_sub+round(-1+_cf);};};if((((wind select 0)>4)or((wind select 1)>4))&&(!_isv)&&(!_isb))then{_sub=_sub+round( -1 + _cf);};if((!_isv)&&(overcast>=0.4))then{_hm=((getPosASL player select 2)/100)/2;_sub=_sub-round(_hm+_cf);};_sub=round(_sub*2/(60/20)*(0.99));life_themp=(((life_themp+_sub) max 1) min 100);if(life_themp<=12) then{enableCamShake true;for "_i" from 0 to 3 do{addcamShake[0.5,round((1+life_themp)*0.3),6];if(floor(random(5))isEqualTo 0)then{[player,player] say3D (["fx_husten_1","fx_husten_2","fx_husten_3","fx_husten_2","fx_husten_3","fx_husten_1"] call BIS_fnc_selectRandom);};sleep round((100-life_themp) * 0.3);addcamShake[floor(random 0.6),round((1+life_themp)*0.1),floor(random 8)];/*if(life_themp<2)then{player setDamage(damage player+0.08);};*/sleep(round((1+life_themp)*0.1));};resetCamShake;};
};	
/*----------------------------*/
_fnc_atemnebel = 
{
private["_un","_st","_so","_fg","_ve","_sp","_ov","_su"];_un=player;_ve=velocity player;_sp=round((_ve distance [0,0,0])*3.5);_st=0.01;_ov=if(overcast>0.45)then{true}else{false};_su=if(sunOrMoon>0)then{false}else{true};if((alive _un)&&(_sp<1)&&((vehicle player)==player)&&(_ov or _su))then{_so="logic"createVehicleLocal(getPos _un);_fg="#particlesource"createVehicleLocal getPos _so;_fg setParticleParams[["\A3\data_f\ParticleEffects\Universal\Universal",16,12,13,0],"","Billboard",0.5,0.5,[0,0,0],[0,0.2,-0.2],1,1.275,1,0.2,[0,0.2,0],[[1,1,1,_st],[1,1,1,0.01],[1,1,1,0]],[1000],1,0.02,"","",_so];_fg setParticleRandom[2,[0,0,0],[0.25,0.25,0.25],0,0.5,[0,0,0,0.1],0,0,10];_fg setDropInterval 0.001;_so attachTo [_un,[0,0.15,0],"neck"];sleep 0.5;deleteVehicle _so;deleteVehicle _fg;};
};
/*----------------------------*/
_fnc_radiationZone = {
if(FX_RADIATION)then{
if((player distance [4988.4326,6614.4243,40])<20)then{
	[player,player] say3D "fx_geiger_1";
	if(floor(random 5)>3)then{
		FXFilmGrain = ppEffectCreate ["FilmGrain",2000];
		FXFilmGrain ppEffectAdjust [0.15, 1, 1, 0.1, 1, false];
		FXFilmGrain ppEffectCommit 0;
		FXFilmGrain ppEffectEnable true;
		uiSleep 3;
		FXFilmGrain ppEffectEnable false;
		ppEffectDestroy FXFilmGrain;
	};
};
if((player distance [4988.4326,6614.4243,40])<50)then{A2LIGHTS=true;}else{A2LIGHTS=false;};
};
};
/*----------------------------*/
_fnc_fx_ambient = {
	private["_snd"];
	_snd = format["dayz_fx_misc%1",(floor(random 13))];
	[player,player] say3D _snd;
};
/*----------------------------*/
_masterTime=diag_tickTime;
_ThempChangeTime = 2; _Last_ThempChangeTime = diag_tickTime;
_AtemNebelChangeTime = 3; _Last_AtemNebelChangeTime = diag_tickTime;
_AmbFXChangeTime = 120; _Last_AmbFXChangeTime = diag_tickTime;
_ZoneChangeTime = 3; _Last_ZoneChangeTime = diag_tickTime;
/*----------------------------*/
while{alive player} do {
_currentTime=diag_tickTime;
/*THEMPERATUR*/if((_currentTime-_Last_ThempChangeTime)>=(_ThempChangeTime + floor(random 5)))then{[] spawn _fnc_temperatur;_Last_ThempChangeTime=diag_tickTime;};
/*ATEM FX*/if((_currentTime-_Last_AtemNebelChangeTime)>=(_AtemNebelChangeTime + floor(random 2)))then{[] spawn _fnc_atemnebel;_Last_AtemNebelChangeTime=diag_tickTime;};
/*RADIATION*/if((_currentTime-_Last_ZoneChangeTime)>=_ZoneChangeTime)then{[] spawn _fnc_radiationZone;_Last_ZoneChangeTime=diag_tickTime;};
/*AMBIENT*/if((_currentTime-_Last_AmbFXChangeTime)>=_AmbFXChangeTime)then{[] spawn _fnc_fx_ambient;_Last_AmbFXChangeTime=diag_tickTime;};
uiSleep 1;
};

exit
