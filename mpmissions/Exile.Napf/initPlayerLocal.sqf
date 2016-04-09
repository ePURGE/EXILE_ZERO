///////////////////////////////////////////////////////////////////////////
// init ClientSide scripts
///////////////////////////////////////////////////////////////////////////
#include "initServer.sqf"
if (!hasInterface || isServer) exitWith {};
///////////////////////////////////////////////////////////////////////////
diag_log "::Exile DayZ Client:: Init Traders"; 

///////////////////////////////////////////////////////////////////////////
// Hardware Trader NORTH
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 80;
_workBench setPosATL [9906.8066,13606.764,0];
_trader = 
[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader NORTH
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 299.04837;
_cashDesk setPosATL [9886.8477,13581.383,0];
_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];
_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];
_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];
_trader = 
[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

///////////////////////////////////////////////////////////////////////////
// Armory Trader NORTH
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 95;  
_chair setPosATL [9896.2461,13576.158,0];
_trader = 
[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

///////////////////////////////////////////////////////////////////////////
// Equipment Trader NORTH
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [9898.6768,13580.813,0],
    285
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

///////////////////////////////////////////////////////////////////////////
// Specops Trader NORTH
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [9900.3838,13584.459,0],
    275
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

///////////////////////////////////////////////////////////////////////////
// Office Trader NORTH
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [9910.4873,13598.505,0.3],
    257
]
call ExileClient_object_trader_create;
//_trader setVariable ["ExileTraderType", "Exile_Trader_Office"];

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader NORTH
///////////////////////////////////////////////////////////////////////////
/*
_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [9883.0215,13589.602,0.4],
    395
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader NORTH
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [9883.8242,13598.885,0],
    80
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_VehicleCustoms"];
*/
///////////////////////////////////////////////////////////////////////////	







///////////////////////////////////////////////////////////////////////////
// Hardware Trader WEST
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 178;
_workBench setPosATL [4275.1606,9696.8242,0];
_trader = 
[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader WEST
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 200;
_cashDesk setPosATL [4287.8198,9698.6006,0.8];
_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];
_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];
_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];
_trader = 
[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

///////////////////////////////////////////////////////////////////////////
// Armory Trader WEST
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 16;  
_chair setPosATL [4293.5215,9712.8496,0.8];
_trader = 
[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

///////////////////////////////////////////////////////////////////////////
// Equipment Trader WEST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [4294.7368,9696.9727,0.9],
    295
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

///////////////////////////////////////////////////////////////////////////
// Specops Trader WEST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [4297.9175,9710.4443,0.9],
    196
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

///////////////////////////////////////////////////////////////////////////
// Office Trader WEST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [4269.0713,9693.1699,0.3],
    387
]
call ExileClient_object_trader_create;
//_trader setVariable ["ExileTraderType", "Exile_Trader_Office"];

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader WEST
///////////////////////////////////////////////////////////////////////////
/*
_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [4281.0586,9726.5176,0],
    203
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader WEST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [4286.1523,9722.9854,0],
    251
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_VehicleCustoms"];
*/
///////////////////////////////////////////////////////////////////////////	






///////////////////////////////////////////////////////////////////////////
// Hardware Trader EAST
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 280;
_workBench setPosATL [18692.582,9435.3203,0];
_trader = 
[
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Hardware"];


///////////////////////////////////////////////////////////////////////////
// Fast Food Trader EAST
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 11;
_cashDesk setPosATL [18707.602,9445.0039,0];
_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];
_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];
_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];
_trader = 
[
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Food"];

///////////////////////////////////////////////////////////////////////////
// Armory Trader EAST
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 290;  
_chair setPosATL [18690.092,9442.6934,0.2];
_trader = 
[
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Armory"];

///////////////////////////////////////////////////////////////////////////
// Equipment Trader EAST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [18686.68,9425.5801,0.2],
    110
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Equipment"];

///////////////////////////////////////////////////////////////////////////
// Specops Trader EAST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [18689.473,9430.0791,0.2],
    110
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_SpecialOperations"];

///////////////////////////////////////////////////////////////////////////
// Office Trader EAST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [18695.506,9411.9668,0.1],
    206
]
call ExileClient_object_trader_create;
//_trader setVariable ["ExileTraderType", "Exile_Trader_Office"];

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader EAST
///////////////////////////////////////////////////////////////////////////
/*
_trader = 
[
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [18703.227,9416.7197,0],
    -26
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_Vehicle"];

///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader EAST
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [18698.053,9413.8604,0],
    6
]
call ExileClient_object_trader_create;
_trader setVariable ["ExileTraderType", "Exile_Trader_VehicleCustoms"];
*/
///////////////////////////////////////////////////////////////////////////	




diag_log "::Exile DayZ Client:: Init Traders :: COMPLETE "; 
///////////////////////////////////////////////////////////////////////////
[] execVM "system\init.sqf";
///////////////////////////////////////////////////////////////////////////