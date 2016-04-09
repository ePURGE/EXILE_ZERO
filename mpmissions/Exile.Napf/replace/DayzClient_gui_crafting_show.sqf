/**
 * ExileClient_gui_crafting_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_recipeClassName","_recipeConfig","_recipeName","_pictureItemClassName","_pictureItemConfig","_recipePicture","_canCraftItem","_possibleCraftQuantity","_equippedMagazines","_components","_returnedItems","_tools","_dialog","_description","_componentQuantity","_componentItemClassName","_componentItemName","_equippedComponentQuantity","_toolItemClassName","_toolItemName","_equippedToolQuantity","_interactionModelGroupClassName","_interactionModelGroupConfig","_interactionModelGroupName","_interactionModelGroupModels","_foundObject","_i","_listBoxIndex"];
_recipeClassName = _this;
_recipeConfig = missionConfigFile >> "CfgCraftingRecipes" >> _recipeClassName;
_recipeName = getText(_recipeConfig >> "name");
_pictureItemClassName = getText(_recipeConfig >> "pictureItem");
//_pictureItemConfig = configFile >> "CfgMagazines" >> _pictureItemClassName;
/*edit*/
private["_item","_itemconfig"];
_item = [_pictureItemClassName] call exsys_fnc_fetchCfgDetails;
_itemconfig = (_item select 6);
_pictureItemConfig = configFile >> _itemconfig >> _pictureItemClassName;
/*edit*/
_recipePicture = getText(_pictureItemConfig >> "picture");
_canCraftItem = true;
_possibleCraftQuantity = 99999;
//_equippedMagazines = magazines player;
/*edit*/
_equippedMagazines = [];
if((primaryWeapon player) != "") then {_equippedMagazines pushBack (primaryWeapon player);};
if((uniform player) != "") then {{_equippedMagazines pushBack _x;} foreach (uniformItems player);};
if((vest player) != "") then {{_equippedMagazines pushBack _x;} foreach (vestItems player);};
if((backpack player) != "") then {{_equippedMagazines pushBack _x;} foreach (backPackItems player);};
/*edit*/
_components = getArray(_recipeConfig >> "components");
_returnedItems = getArray(_recipeConfig >> "returnedItems");
_tools = getArray(_recipeConfig >> "tools");
createDialog "RscExileCraftItemDialog";
waitUntil { !isNull findDisplay 24005 };
uiNameSpace setVariable ["RscExileCraftItemRecipeClassName", _recipeClassName];
_dialog = uiNameSpace getVariable ["RscExileCraftItemDialog", displayNull];
_description = format["<t size='1.5' font='PuristaMedium' align='left'>%1</t><br/><br/>", _recipeName];
{
	_componentQuantity = _x select 0;
	_componentItemClassName = _x select 1;
	//_componentItemName = getText(configFile >> "CfgMagazines" >> _componentItemClassName >> "displayName");
	/*edit*/
	_item = [_componentItemClassName] call exsys_fnc_fetchCfgDetails;
	_itemconfig = (_item select 6);
	_componentItemName = getText(configFile >> _itemconfig >> _componentItemClassName >> "displayName");
	/*edit*/
	_equippedComponentQuantity = { _x == _componentItemClassName } count _equippedMagazines;
	_description = _description + format["<t size='1' font='puristaMedium' align='left'><img image='%2' width='18' height='18'/> %1</t>", _componentItemName,(getText(configFile >> _itemconfig >> _componentItemClassName >> "picture"))];
	_possibleCraftQuantity = _possibleCraftQuantity min (floor (_equippedComponentQuantity / _componentQuantity));
	if (_equippedComponentQuantity < _componentQuantity ) then
	{
		_canCraftItem = false;
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2/%3</t>", "#ea0000", _equippedComponentQuantity, _componentQuantity];
	}
	else
	{ 
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2/%3</t>", "#b2ec00", _equippedComponentQuantity, _componentQuantity];
	};
	_description = _description + "<br/>";
}
forEach _components;

	_description = _description + "<br/>";

{
	_toolItemClassName = _x;
	//_toolItemName = getText(configFile >> "CfgMagazines" >> _toolItemClassName >> "displayName");
	/*edit*/
	_item = [_toolItemClassName] call exsys_fnc_fetchCfgDetails;
	_itemconfig = (_item select 6);
	_toolItemName = getText(configFile >> _itemconfig >> _toolItemClassName >> "displayName");
	/*edit*/
	_equippedToolQuantity = { _x == _toolItemClassName } count _equippedMagazines;
	_description = _description + format["<t size='1' font='puristaMedium' align='left'><img image='%2' width='18' height='18'/> %1</t>", _toolItemName,(getText(configFile >> _itemconfig >> _toolItemClassName >> "picture"))];
	if (_equippedToolQuantity == 0 ) then
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#ea0000", "NOT EQUIPPED"];
		_canCraftItem = false;
	}
	else
	{ 
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#b2ec00", "EQUIPPED"];
	};
	_description = _description + "<br/>";
}
forEach _tools;

	_description = _description + "<br/>";

if ( getNumber(_recipeConfig >> "requiresOcean") == 1 ) then
{
	_description = _description + format["<t size='1' font='puristaMedium' align='left'>%1</t>", "REQUIRES: Ocean"];
	if( surfaceIsWater getPosATL player ) then 
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#b2ec00", "FOUND"];
	}
	else 
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#ea0000", "NOT FOUND"];
		_canCraftItem = false;
	};
	_description = _description + "<br/>";
};
if ( getNumber(_recipeConfig >> "requiresFire") == 1 ) then
{
	_description = _description + format["<t size='1' font='puristaMedium' align='left'>%1</t>", "REQUIRES: Fire"];
	if( [player, 4] call ExileClient_util_world_isFireInRange ) then 
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#b2ec00", "FOUND"];
	}
	else 
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#ea0000", "NOT FOUND"];
		_canCraftItem = false;
	};
	_description = _description + "<br/>";
};
_interactionModelGroupClassName = getText(_recipeConfig >> "requiredInteractionModelGroup");
if( _interactionModelGroupClassName != "" ) then
{
	_interactionModelGroupConfig = missionConfigFile >> "CfgInteractionModels" >> _interactionModelGroupClassName;
	_interactionModelGroupName = getText(_interactionModelGroupConfig >> "name");
	_interactionModelGroupModels = getArray(_interactionModelGroupConfig >> "models");
	_description = _description + format["<t size='1' font='puristaMedium' align='left'>REQUIRES: %1</t>", _interactionModelGroupName];
	_foundObject = false;
	if ([ASLtoAGL (getPosASL player), 10, _interactionModelGroupModels] call ExileClient_util_model_isNearby) then
	{
		_foundObject = true;	
	}
	else 
	{
		if ( _interactionModelGroupModels call ExileClient_util_model_isLookingAt ) then
		{
			_foundObject = true;
		};
	};
	if (_foundObject) then
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#b2ec00", "FOUND"];
	}
	else 
	{
		_description = _description + format["<t size='1' font='puristaMedium' align='right' color='%1'>%2</t>", "#ea0000", "NOT FOUND"];
		_canCraftItem = false;
	};
	_description = _description + "<br/>";
};
if !([_components, _returnedItems] call ExileClient_util_inventory_canExchangeItems) then
{
	_canCraftItem = false;
	_description = _description + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>%2</t>", "#ea0000", "Your inventory is full."];
};
if( _canCraftItem ) then 
{
	switch (_possibleCraftQuantity) do
	{
		case 1:
		{
			_description = _description + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>%2</t>", "#b2ec00", "You can craft this item once."];
		};
		case 99999:
		{
			_description = _description + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>%2</t>", "#b2ec00", "You can craft this item whenever you like."];
			_possibleCraftQuantity = 10; 
		};
		default 
		{
			_description = _description + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>%2</t>", "#b2ec00", format["You can craft this item %1 times.", _possibleCraftQuantity]];
		};
	};
	for "_i" from 1 to _possibleCraftQuantity do 
	{
		_listBoxIndex = lbAdd[5002, str(_i)]; 
		lbSetValue[5002, _listBoxIndex, _i];
	};
	lbSetCurSel[5002, 0];
}
else 
{
	_description = _description + format["<br/><t size='1' font='puristaMedium' align='left' color='%1'>%2</t>", "#ea0000", "You cannot craft this item yet."];
	(_dialog displayCtrl 5002) ctrlEnable false; 
	(_dialog displayCtrl 5001) ctrlEnable false; 
};
(_dialog displayCtrl 5000) ctrlSetText _recipePicture;
(_dialog displayCtrl 5003) ctrlSetStructuredText parseText _description;
true