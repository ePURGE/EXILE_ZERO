private["_agent","_targets","_type","_vehicle","_cantSee","_newHitDamage"];
_agent = _this select 0;
_type = _this select 1;
_vehicle = (vehicle player);
if((isNull _agent) OR (isNil "_agent")) exitWith {diag_log format["ZOMBIE ENGINE :: zed_zombieSetHit | isNull _agent"];};
if(!(alive player)) exitWith {diag_log format["ZOMBIE ENGINE :: zed_zombieSetHit | player alive"];};

//Do the attack
if (_vehicle == player && _type == "zombie") then {
	if (((_agent distance player) < 2)) then {	/* and ((animationState _agent) in ["AwopPercMstpSgthWnonDnon_throw"])*/
		/*_cantSee = [_agent,_vehicle] call dayz_fnc_handleEyes;
		if (!_cantSee) then {*/
			if (alive player) then {
				/*edit*/
				[300] call BIS_fnc_bloodEffect;
				ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1, 0, [1.0, 1.0, 1.0, 0.0], [1.0, 1.0, 1.0, 0.0],  [1.0, 1.0, 1.0, 0.0]];
				ExileClientPostProcessingColorCorrections ppEffectCommit 0.300;
				/*edit*/
				_newHitDamage = ((damage player) + (0.1 + (random 0.14))) min 1;
				player setDamage _newHitDamage;
				//if((floor(random 100)) < 10) then {_target setHit["legs",1];};
			};
		/*};*/
	};
};
true
