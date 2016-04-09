/**
 * ExileClient_util_item_getCraftingRecipes
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_forItemClassName","_foundItems","_availableRecipes","_recipeConfig","_recipeClassName","_recipeName","_pictureItem","_picture","_components","_tools","_item","_itemconfig"];
_forItemClassName = _this;
_foundItems = [];
_availableRecipes = (missionConfigFile >> "CfgCraftingRecipes") call Bis_fnc_getCfgSubClasses;
{
	_recipeConfig = (missionConfigFile >> "CfgCraftingRecipes" >> _x);
	_recipeClassName = _x;
	_recipeName = getText(_recipeConfig >> "name");
	_pictureItem = getText (_recipeConfig >> "pictureItem");
	//_picture = getText(configFile >> "CfgMagazines" >> _pictureItem >> "picture");
	/*edit*/
	_item = [_pictureItem] call exsys_fnc_fetchCfgDetails;
	_itemconfig = (_item select 6);
	_picture = getText(configFile >> _itemconfig >> _pictureItem >> "picture");
	/*edit*/
	_components = getArray(_recipeConfig >> "components");
	_tools = getArray(_recipeConfig >> "tools");
	{
		if( _x select 1 == _forItemClassName ) exitWith 
		{
			_foundItems pushBack [_recipeClassName, _recipeName, _picture];
		};
	}
	forEach _components;
	{
		if( _x == _forItemClassName ) exitWith 
		{
			_foundItems pushBack [_recipeClassName, _recipeName, _picture];
		};
	}
	forEach _tools;
} 
forEach _availableRecipes;
_foundItems
