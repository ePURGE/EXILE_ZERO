private["_target","_agent","_cantSee"];
_target = _this select 0;
_agent = _this select 1;
_cantSee = true;
if (!isNull _target) then {
	_tPos = eyePos _target;
	_zPos = eyePos _agent;
	if ((count _tPos > 0) and (count _zPos > 0)) then {
		_cantSee = terrainIntersectASL [_tPos, _zPos];
		if (!_cantSee) then {
			_cantSee = lineIntersects [_tPos, _zPos];
		};
	};
};
_cantSee