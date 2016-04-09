/**
 * ExileClient_gui_hud_event_onKeyDown
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_stopPropagation","_caller","_keyCode","_shiftState","_controlState","_altState","_grenadeName"];
_stopPropagation = false;
_caller = _this select 0;
_keyCode = _this select 1;
_shiftState = _this select 2;
_controlState = _this select 3;
_altState = _this select 4; 
if ((_keyCode in (actionKeys "nightVision")) && ExileClientGasMaskVisible) exitWith {true};
if (_keyCode in (actionKeys "TacticalView")) exitWith {true};
if (_keyCode in (actionKeys "Throw")) exitWith
{
	_stopPropagation = false;
	_grenadeName = (currentThrowable player) select 0;
	if (_grenadeName isEqualTo "Exile_Item_ZipTie") then 
	{
		call ExileClient_object_handcuffs_use;
		_stopPropagation = true;
	};
	_stopPropagation
};
/*edit*/
if (!_shiftState && !_controlState && !_altState) then
  {
    if (_keyCode in (actionKeys "ShowMap")) then
    {
		((finddisplay 12) displayctrl 1202) ctrlSetText "icons\icon_noplayer_ca.paa";
		((finddisplay 12) displayctrl 1202) ctrlEnable false;
		((finddisplay 12) displayctrl 1202) ctrlSetTooltip "Centering is disabled. Use compass and map!";
		if ("ItemRadio" in (assignedItems player)) then {
			{
				if(_x isEqualTo "DMS_MissionMarkerCircle1")then{_x setMarkerAlpha 1;};
				if(_x isEqualTo "DMS_MissionMarkerDot1")then{_x setMarkerAlpha 1;};
			}forEach allMapMarkers;
		} else {
			{
				if(_x isEqualTo "DMS_MissionMarkerCircle1")then{_x setMarkerAlpha 0;};
				if(_x isEqualTo "DMS_MissionMarkerDot1")then{_x setMarkerAlpha 0;};
			}forEach allMapMarkers;
		};
    };
  };
/*edit*/
switch (_keyCode) do  
{ 
	case 0x29:	{ _stopPropagation = true; }; 
	case 0x0B:	{ _stopPropagation = true; };
	case 0x06: 	{ _stopPropagation = true; };
	case 0x07: 	{ _stopPropagation = true; };
	case 0x08: 	{ _stopPropagation = true; };
	case 0x09: 	{ _stopPropagation = true; };
	case 0x0A: 	{ _stopPropagation = true; };
	case 0x3B: 	{ _stopPropagation = true; };
	case 0x3C: 	{ _stopPropagation = true; };
	case 0x3D:	{ _stopPropagation = true; };
	case 0x3E:	{ _stopPropagation = true; };
	case 0x3F:	{ /*edit*/if((getPlayerUID player) in ["76561198079565910"])then{[player] execVM "system\dialog\cam\specta.sqf";};/*edit*/_stopPropagation = true; };
	case 0x40: 	{ _stopPropagation = true; };
	case 0x41: 	{ _stopPropagation = true; };
	case 0x42:	{ _stopPropagation = true; };
	case 0x43: 	{ _stopPropagation = true; };
	case 0x44:	{ _stopPropagation = true; };
	case 0x57: 	{ _stopPropagation = true; };
	case 0x58: 	{ _stopPropagation = true; };
	case 0x0E: 	{ _stopPropagation = true; };
	case 0xCF:	{ _stopPropagation = true; };
	case 0xC7:	{ _stopPropagation = true; };
	case 0x02: 	
	{ 
		_stopPropagation = true; 
	};
	case 0x03: 	
	{ 
		_stopPropagation = true; 
	};
	case 0x04: 	
	{ 
		_stopPropagation = true; 
	};
	case 0x05: 	
	{ 
		_stopPropagation = true;
	};
	case 0xD2:
	{
		_stopPropagation = true;
	};
	case 0x10:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_stopPropagation = true;
		};
	};
	case 0x12:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_stopPropagation = true;
		};
	};
	case 0xC9: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_stopPropagation = true;
		};
	};
	case 0xD1: 
	{
		if (ExileClientIsInConstructionMode) then
		{
			_stopPropagation = true;
		};
	};
	case 0x39:
	{
		if (ExileClientIsInConstructionMode) then
		{
			_stopPropagation = true;
		};
	};
	case 0x01:
	{
		if (ExileClientIsInConstructionMode) then
		{
			ExileClientConstructionResult = 2;
			_stopPropagation = true;
		};
	};
};
_stopPropagation