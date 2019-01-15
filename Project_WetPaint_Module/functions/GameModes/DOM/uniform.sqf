[[],"initUniform",TRUE,TRUE] call BIS_fnc_MP;
initUniform = 
{
	cutRsc["DOM_hud", "PLAIN"];
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
				};
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[[_me]],"GearSetUpGreen",TRUE,TRUE] call BIS_fnc_MP;
				_me setVariable ["color","#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)",true];
			};
		};
	};
};