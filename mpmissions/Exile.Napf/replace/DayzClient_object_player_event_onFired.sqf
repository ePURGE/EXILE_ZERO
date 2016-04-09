/**
 * ExileClient_object_player_event_onFired
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_object","_intersection","_firstInsection"];
_unit = _this select 0;
_weapon = _this select 1;
_muzzle = _this select 2;
_mode =	_this select 3;
_ammo = _this select 4;
_magazine =	_this select 5;
_projectile = _this select 6;
if (ExilePlayerInSafezone) then 
{
	if (local _projectile) then 
	{
		deleteVehicle _projectile;
	};
}
else 
{
	if (_ammo isKindOf "Exile_Ammo_Swing") then
	{
		player playActionNow "GestureAxeSwing01";
		[] call ExileClient_object_tree_chop;
	}
	else 
	{
		if (_weapon isEqualTo "Put") then
		{
			if (_magazine in ["DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag"]) then
			{
				_object = cursorTarget;
				if ((_object isKindOf "LandVehicle") || (_object isKindOf "Air") || (_object isKindOf "Boat") || (_object isKindOf "Man") || (_object isKindOf "Exile_Construction_Abstract_Static")) then
				{
					_intersection = lineIntersectsSurfaces 
					[
						AGLToASL positionCameraToWorld [0, 0, 0],  
						AGLToASL positionCameraToWorld [0, 0, 5],  
						player, 
						objNull, 
						true, 
						1, 
						"VIEW", 
						"GEOM" 
					];
					if (count _intersection > 0) then 
					{
						_firstInsection = _intersection select 0;
						if !(simulationEnabled _object) then 
						{
							if (local _object) then 
							{
								_object enableSimulation true;
							}
							else 
							{
								["enableSimulationRequest", [netId _object]] call ExileClient_system_network_send;
							};
						};
						_projectile setPosASL [0, 0, 0]; 
						_projectile attachTo [_object, _object worldToModel (ASLtoAGL (_firstInsection select 0)) ];
						_projectile setVectorUp (_firstInsection select 1);
					};
				};
			};
		}
		else 
		{
			if !(_weapon isEqualTo "Throw") then
			{
				ExileClientPlayerIsInCombat = true;
				ExileClientPlayerLastCombatAt = diag_tickTime;
				true call ExileClient_gui_hud_toggleCombatIcon;
			};
		};
		
	/*edit*/
	private["_lt","_ta","_cooldown"];
	_cooldown=diag_tickTime;
	if((_cooldown - dayz_player_firedCooldown) > 30)then{
		dayz_player_firedCooldown = diag_tickTime;
		_lt = (getPosATL _unit) nearEntities [["Man"],100];
		{
			if ((side _x) isEqualTo EAST) then {
				_ta = _x getVariable ["targets",[]];
				if (!(_unit in _ta)) then {
					_ta pushBack _unit;
					_x setVariable ["targets",_ta,true];
					diag_log format["ZOMBIE ENGINE :: zombieAlert | add target: %1 to zombie %2 - list: %3",_unit,_x,_ta];
				};
			};
		} forEach _lt;
	};
	/*edit*/	
		
	};
};
true