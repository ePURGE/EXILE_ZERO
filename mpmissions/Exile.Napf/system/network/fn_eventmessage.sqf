private ["_mission_type"];
_mission_type = _this select 0;
if (!alive player) exitWith {};
if("ItemRadio" in (assignedItems player)) then {
	if(!isNil "_mission_type") exitWith {
		switch (_mission_type) do
		{
			case "missionCamp":	{ [["InfantryMovement", "InfantryCamp"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "missionTransport":	{ [["InfantryMovement", "InfantryTransport"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "missionPlane":	{ [["InfantryMovement", "InfantryPlane"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "missionHelicopter":	{ [["InfantryMovement", "InfantryHelicopter"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "missionConvoy":	{ [["InfantryMovement", "InfantryConvoy"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "InfantryPatrol_1":	{ [["InfantryMovement", "InfantryPatrol_1"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; }; //B_Heli_Transport_01_F
			case "InfantryPatrol_2":	{ [["InfantryMovement", "InfantryPatrol_2"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; }; //B_Heli_Transport_03_F
			case "InfantryPatrol_3":	{ [["InfantryMovement", "InfantryPatrol_3"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; }; //B_Heli_Light_01_F
			
			case "InfantryAirDrop_1": { [["InfantryMovement", "InfantryAirDrop_1"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "InfantryAirDrop_2": { [["InfantryMovement", "InfantryAirDrop_2"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "InfantryAirDrop_3": { [["InfantryMovement", "InfantryAirDrop_3"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "InfantryAirDrop_4": { [["InfantryMovement", "InfantryAirDrop_4"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			case "InfantryAirDrop_5min": { systemChat format["+++ LOOT AIR-DROP +++ The cargo will be destroyed in 5 minutes!"]; };
			case "InfantryAirDrop_1min": { systemChat format["+++ LOOT AIR-DROP +++ The cargo will be destroyed in 1 minutes!"]; };
			case "InfantryAirDrop_10sec": { systemChat format["+++ LOOT AIR-DROP +++ The cargo will be destroyed in 10 seconds!"]; };
			case "InfantryAirDrop_5": { [["InfantryMovement", "InfantryAirDrop_5"], 15, "", 15, "", true, false, false, true] call BIS_fnc_advHint; playSound "RadioAmbient6"; };
			
			default	{};
		};
		_mission_type = nil;
	};
};
exit
