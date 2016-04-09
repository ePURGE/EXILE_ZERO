private["_unit","_weapon","_ammo","_projectile","_distance","_listTalk","_zombie","_targets","_pos","_firedCooldown"];
//[unit, weapon, muzzle, mode, ammo, magazine, projectile]
_unit = _this select 0;
_weapon = _this select 1;
_ammo = _this select 4;
_projectile = _this select 6;
if((isNull _unit) OR (isNil "_projectile")) exitWith {diag_log format["ZOMBIE ENGINE :: zed_zombieAlert | isNull _unit"];};
//Alert Zed's to noise of shot
_distance = 200;
_pos = (getPosATL _unit);
_firedCooldown=diag_tickTime;
if((_firedCooldown - dayz_player_firedCooldown) > 30)then{
	dayz_player_firedCooldown = diag_tickTime;
	_listTalk = _pos nearEntities [["Man"],_distance];
	{
		_zombie = _x;
		if ((side _zombie) isEqualTo EAST) then {
			_targets = _zombie getVariable ["targets",[]];
			if (!(_unit in _targets)) then {
				_targets pushBack _unit;
				_zombie setVariable ["targets",_targets,true];
				diag_log format["ZOMBIE ENGINE :: zombieAlert | add target: %1 to zombie %2 - list: %3",_unit,_zombie,_targets];
			};
		};
	} forEach _listTalk;
};
//diag_log format["ZOMBIE ENGINE :: zombieAlert | EXIT | _unit: %1 _weapon: %2 | _ammo: %3 | _projectile: %4",_unit,_weapon,_ammo,_projectile];
exit

/*
(!(_targets isEqualTo []))
_zombie setVariable ["myDest",_pos,true];
*/