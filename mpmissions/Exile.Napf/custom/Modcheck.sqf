waitUntil {!isNull (findDisplay 46)};
waitUntil {!dialog};

sleep 6;

if(getText(configFile >> "cfgWeapons" >> "windowlicker" >> "displayname") isEqualTo "")then{
    _att = format["[Hello %1!]",name player];
	
    _att hintC [
        parseText "<t shadow='2' size='2'align='center'color='#cf2e4e'>Welcome to The Olddogs: </t><br/><img align='center' size='7' image='images\loadscreen.paa'/><br/><t shadow='2' size='1.5'align='center'color='#b0eb00'>@ASDG_JR @CUP_Weapons @RHSAFRF @RHSUSAF @TRYK</t><br/><br/><t shadow='2'align='center' size='1.25'>These mods add a lot to the game!  Make sure they're named this</t><br/><t shadow='2'align='center'>You can continue to play on this server without them, but for a much better experience it's recommended you download them!</t>",
        parseText "<a shadow='2'size='1.1'align='center'color='#2e92cf' href='http://www.theolddogs.net/home'>TheOldDogs Forum</a>",
        parseText "<a shadow='2'size='1.1'align='center'color='#2e92cf' href='https://twitter.com/olddogsgaming'>TheOldDogs Twitter</a>",
		 parseText "<a shadow='2'size='1.1'align='center'color='#2e92cf' href='http://steamcommunity.com/gid/103582791439390488'>TheOldDogs Steam Group</a>
       <br/><br/><t shadow='2'size='1.1'>The above addresses can be clicked for a direct link. </t><br/><br/><t shadow='2'align='center'size='1.75'color='#3d94af'>See you in game!</t>"
    ];
	hintC_arr_EH = findDisplay 72 displayAddEventHandler ["unload", {
		0 = _this spawn {
			_this select 0 displayRemoveEventHandler ["unload", hintC_arr_EH];
			hintSilent "";
		};
	}];
};