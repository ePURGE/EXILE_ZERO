/**
 * ExileClient_system_map_initialize
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileSpawnZoneMarkerPositions = [];
ExileSpawnZoneMarkerPositionsAndSize = [];
ExileTraderZoneMarkerPositions = [];
ExileTraderZoneMarkerPositionsAndSize = [];
{
	switch (getMarkerType _x) do 
	{
		case "ExileSpawnZone":
		{
			ExileSpawnZoneMarkerPositions pushBack (getMarkerPos _x);
			ExileSpawnZoneMarkerPositionsAndSize pushBack [getMarkerPos _x, 300];
		};
		case "hd_destroy": /*"ExileTraderZone":*/ 
		{
			/*[8961.65,69.2431,15514.5]*/
			if !(_x isEqualTo "TraderZoneChop")then {
			ExileTraderZoneMarkerPositions pushBack (getMarkerPos _x);
			ExileTraderZoneMarkerPositionsAndSize pushBack [getMarkerPos _x, 50];
			};
		};
	};
}
forEach allMapMarkers;