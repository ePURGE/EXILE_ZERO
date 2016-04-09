// ====================================================================================

// RESTRICT VIEWABLE UNITS
// We use the array KEGsShownSides to restrict which sides will be visible to 
// spectating players:
	
// KEGsShownSides = [west, civilian, independent, east];

// if (side player == west) then {KEGsShownSides = [west];};
// if (side player == civilian) then {KEGsShownSides = [civilian];};
// if (side player == independent) then {KEGsShownSides = [independent];};
// if (side player == east) then {KEGsShownSides = [east];};

// ====================================================================================

// Connect handler for spectating script, check if camera on seagull for first 10 seconds and launch spectating script
for "_i" from 0 to 20 do 
{
	scopeName "SpectaLoop";
	if(typeof cameraOn == "SeaGull") then 
	{
		[player] execVM "system\dialog\cam\specta.sqf";
		breakOut "SpectaLoop";
	}
	else
	{
		_this execVM "system\dialog\cam\specta.sqf";
	};
	
	sleep 0.5;
};

