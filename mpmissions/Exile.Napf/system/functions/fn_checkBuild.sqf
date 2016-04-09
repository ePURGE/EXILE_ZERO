/*
	File: [_position] call exsys_fnc_checkBuild;
*/
private["_ret","_stop","_pos","_array","_newArray"];
_pos = _this select 0;
_ret = false;
_newArray = [];

/* Stops Building near */
_stop = [
"Land_a_stationhouse",
"Land_Mil_ControlTower",
"Land_SS_hangar",
"Land_A_BuildingWIP",
"Land_Mil_Barracks_i",
"land_mil_house",
"Land_Mil_Barracks",
"Camp",
"CampEast",
"CampEast_EP1",
"MASH",
"MASH_EP1",
"USMC_WarfareBFieldhHospital",
"land_mil_guardhouse",
"Land_Mil_ControlTower_EP1",
"Land_Mil_hangar_EP1",
"Land_Mil_Guardhouse_EP1",
"Land_Mil_Barracks_i_EP1",
"Land_fortified_nest_big_EP1",
"Land_Mil_House_EP1",
"Land_Mil_Barracks_EP1",
"Land_vez",
"Land_Mil_Barracks_L",
"Land_Mil_Barracks_L_EP1",
"Land_Barrack2",
"Land_MBG_Companybuilding_1",
"Land_budova4_in",
"land_army_hut_int",
"Land_army_hut3_long_int",
"land_army_hut2_int",
"land_ibr_hangar",
"land_ind_pec_03",
"land_ind_pec_03a",
"Land_MBG_Police_Station",
"Land_GeneralStore_01a_PMC",
"land_st_vez",
"land_pozorovatelna",
"land_vstup",
"land_smd_hlaska",
"land_smd_army_hut2",
"land_smd_ss_hangard_withdoor",
"land_budova5",
"land_smd_army_hut2_int",
"land_smd_strazni_vez",
"land_smd_army_hut3_long_int",
"Land_Offices_01_V1_F",
"Land_TentHangar_V1_F", 
"Land_u_Barracks_V2_F", 
"Land_Radar_Small_F", 
"Land_Hangar_F_EP1", 
"Land_Hangar_F", 
"Land_Hangar_2",
 /*supermarket*/
"Land_A_GeneralStore_01",
"Land_A_GeneralStore_01_dam",
 /*special*/
"Land_wreck_c130j_ep1"
];

_array = [_pos select 0, _pos select 1] nearObjects ["House", 500];
_array = _array + ([_pos select 0, _pos select 1] nearObjects ["NonStrategic", 500]);
{if !(_x isEqualTo "") then { _newArray pushBack (toUpper _x); }; } foreach _stop;
if (({(toUpper (typeOf _x)) in _newArray} count _array) > 0) then 
{ 
	_ret = true;
};

/*check sectorb*/
{
	if (_x isEqualTo "sectorzone")then {
		if (((getMarkerPos _x) distance2D player) < 3000) exitWith
		{
			_ret = true;
		};
	};
}
forEach allMapMarkers;

_ret