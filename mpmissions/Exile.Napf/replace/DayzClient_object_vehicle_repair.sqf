/**
 * ExileClient_object_vehicle_repair
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_vehicle","_availableHitpoints","_fixable","_equippedMagazines"];
_vehicle = _this select 0;
if (ExilePlayerInSafezone) exitWith
{
	["RepairFailedWarning", ["You can not repair while in safezone!"]] call ExileClient_gui_notification_event_addNotification;
};
if (ExileClientPlayerIsInCombat) exitWith
{
	["RepairFailedWarning", ["You are in combat!"]] call ExileClient_gui_notification_event_addNotification;
};
if (vehicle player isEqualTo _vehicle) exitWith 
{
	["RepairFailedWarning", ["Are you serious?"]] call ExileClient_gui_notification_event_addNotification;
};
_availableHitpoints = (getAllHitPointsDamage _vehicle) select 0;
{
	if((_vehicle getHitPointDamage _x) > 0)exitWith
	{
		_fixable = "potato";
	};
}
forEach _availableHitpoints;
if (isNil "_fixable") exitWith 
{
	["RepairFailedWarning", ["This vehicle already looks fine."]] call ExileClient_gui_notification_event_addNotification;
}; 
if (!local _vehicle) then
{
	["RepairFailedWarning", ["Please get in as driver/pilot first."]] call ExileClient_gui_notification_event_addNotification;
}
else 
{
	_equippedMagazines = magazines player;
	/*edit*/
	private["_canrepair1","_canrepair2"];
	_canrepair1 = false;
	_canrepair2 = false;
	if ("Exile_Item_DuctTape" in _equippedMagazines) then {_canrepair1 = true;};
	if ("Exile_Item_ToolKit" in _equippedMagazines) then {_canrepair2 = true;};
	if (_canrepair1 or _canrepair2) then
	{
		if ("Exile_Item_DuctTape" in _equippedMagazines) then
		{
			player playMove "AinvPknlMstpSnonWnonDr_medic3";
			_vehicle setDamage (((damage _vehicle) - 0.2) max 0);
			player removeMagazine "Exile_Item_DuctTape";
			[_vehicle,player] say3D "fxDayz_repair";
			["Success",["Vehicle fixed"]] call ExileClient_gui_notification_event_addNotification;
		}
		else
		{
			player playMove "AinvPknlMstpSnonWnonDr_medic3";
			_vehicle setDamage 0;
			player removeMagazine "Exile_Item_ToolKit";
			[_vehicle,player] say3D "fxDayz_repair";
			["Success",["Vehicle repaired"]] call ExileClient_gui_notification_event_addNotification;
		};
	}
	else 
	{
		["RepairFailedWarning", ["You need duct tape or tool kit to do that!"]] call ExileClient_gui_notification_event_addNotification;
	};
	/*edit*/
};
true