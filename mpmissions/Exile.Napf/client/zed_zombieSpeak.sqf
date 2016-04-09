/*
	zombieSpeak: CLIENT-SIDE
*/
private ["_zombie", "_type"];
if (isNil "ZEDsIdle") then {ZEDsIdle = 1;ZEDsPunch = 1;ZEDsHurt = 1;};
_zombie = _this select 0;
_type = _this select 1;
_chance = _this select 2;
if((isNull _zombie) OR (isNil "_zombie")) exitWith {diag_log format["ZOMBIE ENGINE :: fnc_nextSound | isNull _zombie"];};
if (!(_type in ["punch","move_init"])) then {if (floor(random(_chance + 0.2)) isEqualTo 0)exitWith{};};

if (_type isEqualTo "idle") then {
	[_zombie,player] say3D ("zidle" + str(ZEDsIdle));
	if (ZEDsIdle == 5) then {
		ZEDsIdle = 1;
	} else {
		ZEDsIdle = ZEDsIdle + 1;
	};
};
if (_type isEqualTo "hurt") then {
	[_zombie,player] say3D ("zhurt" + str(ZEDsHurt));
	if (ZEDsHurt == 3) then {
		ZEDsHurt = 1;
	} else {
		ZEDsHurt = ZEDsHurt + 1;
	};
};
if (_type isEqualTo "punch") then {
	_zombie switchMove "AwopPercMstpSgthWnonDnon_throw";
	[_zombie,player] say3D ("zpunch" + str(ZEDsPunch));
	if (ZEDsPunch == 4) then {
		ZEDsPunch = 1;
	} else {
		ZEDsPunch = ZEDsPunch + 1;
	};
	if ((_zombie distance player) < 2) then {
		[_zombie,"zombie"] spawn dayz_fnc_handleDamage;
		//[800] call BIS_fnc_bloodEffect;
	};
};
if (_type isEqualTo "move_init") then {
	_zombie switchmove "AmovPercMstpSnonWnonDnon_SaluteOut";
};

true

