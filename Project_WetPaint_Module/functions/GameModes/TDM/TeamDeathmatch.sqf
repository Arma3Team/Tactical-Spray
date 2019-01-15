
[[],"initTDM",TRUE,TRUE] call BIS_fnc_MP;

initTDM = 
{
	cutRsc["TDM_hud", "PLAIN"];
	[[team1,team2,team3],"scoreDisTDM",TRUE,TRUE] call BIS_fnc_MP;
	_me = player;
	switch (PlayerSide) do 
	{
		case west: 
		{
			_me addEventHandler ["HandleDamage",
			{
				.0;
				(_this select 0) setDamage 0;
				if ((currentWeapon player != "") && (side (_this select 3) != west)) then {
					titleRsc [call SelectSplash, "PLAIN"];
					[[[(_this select 0)]],"UnitOut",TRUE,TRUE] call BIS_fnc_MP;
					removeAllWeapons (_this select 0);
					(_this select 0) globalRadio "PaintSplash";
					if (team1 == 1) then {
						[[],"endgame",TRUE,TRUE] call BIS_fnc_MP;
					}else {
						if (team1 > 1)then {
							[[0],"removeScore",TRUE,TRUE] call BIS_fnc_MP;
						};
						if(team1 == 0)then {
							[(_this select 0)] spawn {sleep 2.0;(_this select 0) setpos getMarkerPos spawnLoc;};
						};
					};
				};
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[_me]] call GearSetUpBlue;
				_me setVariable ["color","#(argb,8,8,3)color(0.0,0.9,1.0,1,ca)",true];
			};
		};
		case east: 
		{
		
			_me addEventHandler ["HandleDamage",
			{
				.0;
				(_this select 0) setDamage 0;
				if ((currentWeapon player != "") && (side (_this select 3) != east)) then {
					titleRsc [call SelectSplash, "PLAIN"];
					[[[(_this select 0)]],"UnitOut",TRUE,TRUE] call BIS_fnc_MP;
					removeAllWeapons (_this select 0);
					(_this select 0) globalRadio "PaintSplash";
					if (team2 == 1) then {
						[[],"endgame",TRUE,TRUE] call BIS_fnc_MP;
					}else {
						if (team2 > 1)then {
							[[1],"removeScore",TRUE,TRUE] call BIS_fnc_MP;
						};
						if(team1 == 0)then {
							[(_this select 0)] spawn {sleep 2.0;(_this select 0) setpos getMarkerPos spawnLoc;};
						};
					};
				};
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[[_me]],"GearSetUpRed",TRUE,TRUE] call BIS_fnc_MP;
				_me setVariable ["color","#(argb,8,8,3)color(0.5,0.5,0.0,1,ca)",true];
			};
		};
		
		case independent: 
		{
		
			_me addEventHandler ["HandleDamage",
			{
				.0;
				(_this select 0) setDamage 0;
				if ((currentWeapon player != "") && (side (_this select 3) != independent)) then {
					titleRsc [call SelectSplash, "PLAIN"];
					[[[(_this select 0)]],"UnitOut",TRUE,TRUE] call BIS_fnc_MP;
					removeAllWeapons (_this select 0);
					(_this select 0) globalRadio "PaintSplash";
					if (team3 == 1) then {
						[[],"endgame",TRUE,TRUE] call BIS_fnc_MP;
					}else {
						if (team3 > 1)then {
							[[2],"removeScore",TRUE,TRUE] call BIS_fnc_MP;
						};
						if(team1 == 0)then {
							[(_this select 0)] spawn {sleep 2.0;(_this select 0) setpos getMarkerPos spawnLoc;};
						};
					};
				};
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[[_me]],"GearSetUpGreen",TRUE,TRUE] call BIS_fnc_MP;
				_me setVariable ["color","#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)",true];
			};
		};
	};
};

removeScore = 
{
	switch (_this select 0) do {
	
		case 0 : {
		
			team1 = team1 - 1;
		
		};
		case 1 : {
		
			team2 = team2 - 1;
		
		};
		case 2 : {
		
			team3 = team3 - 1;
		
		};
	};
	
	[[team1,team2,team3],"scoreDisTDM",TRUE,TRUE] call BIS_fnc_MP;
	
};