/*wait for player to load*/
waitUntil{uiSleep 0.2;!isNil "ExileClientPlayerIsSpawned"};
waitUntil {!(isNull (findDisplay 46))};
diag_log "EXILE DAYZ :: initialize clientside scripts";
///////////////////////////////////////////////////////////////////////////
/*init mission functions*/
"customMissionWarning" addPublicVariableEventHandler {[(_this select 1)] execVM "system\network\fn_eventmessage.sqf"};
call compile preprocessFileLineNumbers "system\functions\fn_mapSwitchTextures.sqf";//MapTexOFF
[]spawn {{if(getMarkerType _x isEqualTo "ExileSpawnZone")then{_x setMarkerAlpha 0;};}forEach allMapMarkers;};
///////////////////////////////////////////////////////////////////////////
/*init mission welcome message*/
[] execVM "system\network\fn_welcome.sqf";
