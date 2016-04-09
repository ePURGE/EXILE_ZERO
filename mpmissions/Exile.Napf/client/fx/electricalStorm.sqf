if (isServer) exitwith {};
_pos = [4352,7348,10];
while {true} do {
	if (overcast >= 0.8) then {
		Electrical_Storm = "LaserTargetCBase" createVehicle _pos;
		Electrical_Storm enableSimulationGlobal false; Electrical_Storm hideObjectGlobal true;
		Electrical_Storm setPosATL [(_pos select 0)+(random 4000),(_pos select 1)+(random 4000),(_pos select 2)];
		sleep (3 + (random 6));
		[Electrical_Storm, nil, true] spawn BIS_fnc_moduleLightning;
		[Electrical_Storm] spawn {sleep 5;deleteVehicle (_this select 0);};
	};
};