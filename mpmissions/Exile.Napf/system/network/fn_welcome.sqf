if (!hasInterface) exitWith {};
waitUntil{sleep 1; ExileClientPlayerIsSpawned}; // Waits for Exile to finish up

_onScreenTime = 20;
sleep 8; //Wait in seconds before the credits start after player is in-game

_role1 = "Thank you for participating in - Exile Zero | Napf - Early Access!";
_role1names = [""];
_role2 = "";
_role2names = [""];
_role3 = "This server is now in Alpha phase, and will be so for some time.";
_role3names = ["This means you will experience bugs, unfinished features, problematic design decision, and may more things that disrupt your game experience. We will be working with the community to fix these. Above all, please remember this server is not finished, and is a work in progress."];
_role4 = "";
_role4names = [""];
_role5 = "Server restart: every 4 hours";
_role5names = ["12:00am 4:00am 8:00am - 12:00pm 4:00pm 8:00pm (CET)"];
_role6 = "Custom day/night cycle:";
_role6names = ["Daytime 1,5h / Nighttime 0,5h"];
_role7 = "";
_role7names = [""];
_role8 = "";
_role8names = [""];
 
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.50' color='#FFFFFF' align='center'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.50' color='#FFFFFF' align='center'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[(safezoneX + (safezoneW / 2)) - 0.35,0.7], //[safezoneX + safezoneW - 0.6,0.50] 
[(safezoneY + safezoneH) - 0.36,0.7], //[safezoneY + safezoneH - 0.6,0.7] 
//[safezoneX + safezoneW - 0.8,0.7], //DEFAULT: 0.5,0.35
//[safezoneY + safezoneH - 1.0,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
if (!alive player) exitWith {};
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],

[_role7, _role7names],
[_role8, _role8names]
];

exit
