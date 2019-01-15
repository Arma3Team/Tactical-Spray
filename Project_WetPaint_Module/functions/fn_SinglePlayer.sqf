GearSetUpBlue = 
{
	
	removeHeadgear ((_this select 0) select 0);
	removeVest ((_this select 0) select 0);
	removeAllWeapons ((_this select 0) select 0);
	removeBackpackGlobal ((_this select 0) select 0);
	((_this select 0) select 0) addUniform (call SelectUniform_B);
	_headGear = call SelectMask;
	((_this select 0) select 0) addHeadGear _headGear;
	((_this select 0) select 0) setObjectTexture [0, "#(argb,8,8,3)color(0.0,0.9,1.0,1,ca)"];
	
	((_this select 0) select 0) setVariable ["gearSet", "true", true];
	
};
GearSetUpRed = 
{
	removeHeadgear ((_this select 0) select 0);
	removeVest ((_this select 0) select 0);
	removeAllWeapons ((_this select 0) select 0);
	removeBackpackGlobal ((_this select 0) select 0);
	((_this select 0) select 0) addUniform (call SelectUniform_O);
	_headGear = call SelectMask;
	((_this select 0) select 0) addHeadGear _headGear;
	((_this select 0) select 0) setObjectTexture [0, "#(argb,8,8,3)color(0.5,0.5,0.0,1,ca)"];
	
	((_this select 0) select 0) setVariable ["gearSet", "true", true];
	
};
GearSetUpGreen = 
{
	removeHeadgear ((_this select 0) select 0);
	removeVest ((_this select 0) select 0);
	removeAllWeapons ((_this select 0) select 0);
	removeBackpackGlobal ((_this select 0) select 0);
	((_this select 0) select 0) addUniform (call SelectUniform_I);
	_headGear = call SelectMask;
	((_this select 0) select 0) addHeadGear _headGear;
	((_this select 0) select 0) setObjectTexture [0, "#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)"];
	
	((_this select 0) select 0) setVariable ["gearSet", "true", true];
	
};
SelectUniform = {

	((_this select 0) select 0) setObjectTexture [1, ((_this select 0) select 1)];
	((_this select 0) select 0) setObjectTexture [2, ((_this select 0) select 1)];

};
SelectWeaponlist = {

	_items = compile loadFile "\Project_WetPaint_Weapons\Data\scripts\weaponList.sqf";
	_maskList = call _items;
	_num = floor random (count _maskList);
	_returnMe = _maskList select _num;
	_returnMe
};
SelectMask = {

	_items = compile loadFile "\Project_WetPaint_Mask\ItemNames.sqf";
	_weaponList = call _items;
	_num = floor random (count _weaponList);
	_returnMe = _weaponList select _num;
	_returnMe
};
SelectAmmo = {

	_items = compile loadFile "\Project_WetPaint_Weapons\Data\scripts\ammoList.sqf";
	_AmmoList = call _items;
	_num = floor random (count _AmmoList);
	_returnMe = _AmmoList select _num;
	_returnMe
};
SelectUniform_B = {

	_items2 = compile loadFile "\Project_WetPaint_Uniform\ItemNames_B.sqf";
	_UniformList = call _items2;
	_num = floor random (count _UniformList);
	_returnMe = _UniformList select _num;
	_returnMe
};
SelectUniform_O = {

	_items2 = compile loadFile "\Project_WetPaint_Uniform\ItemNames_O.sqf";
	_UniformList = call _items2;
	_num = floor random (count _UniformList);
	_returnMe = _UniformList select _num;
	_returnMe
};
SelectUniform_I = {

	_items2 = compile loadFile "\Project_WetPaint_Uniform\ItemNames_I.sqf";
	_UniformList = call _items2;
	_num = floor random (count _UniformList);
	_returnMe = _UniformList select _num;
	_returnMe
};
endgame = {["end1",false,2] call BIS_fnc_endMission;};
westPlayers = 0;
eastPlayers = 0;
intPlayers = 0;
{
	_me = _x;
	switch (side _me) do {

		case west: 
		{
			westPlayers = westPlayers + 1;
			_me addEventHandler ["HandleDamage",
			{
				(_this select 0) removeEventHandler ["HandleDamage", 0];
				.0;
				(_this select 0) setDamage 0;
				if (!isPlayer (_this select 0)) then {
					westPlayers = westPlayers - 1;
					if (westPlayers <= 0) then {
						[] spawn {cutRsc["Vic_Splash", "PLAIN"];sleep 5.0; call endgame;};
					};
					(_this select 0) setCaptive true;
					removeAllWeapons (_this select 0);
					[(_this select 0)] spawn {
						sleep 5.0;
						deleteVehicle (_this select 0);
					};
					
				}else {cutRsc["Def_Splash", "PLAIN"];(_this select 0) setCaptive true;removeAllWeapons (_this select 0);[] spawn {sleep 5.0; call endgame;} };
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[_me]] call GearSetUpBlue;
				_me setVariable ["color","#(argb,8,8,3)color(0.0,0.9,1.0,1,ca)",true];
			};
			_me addWeapon call SelectWeaponlist;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
		};
		case east: 
		{
			eastPlayers = eastPlayers + 1;
			_me addEventHandler ["HandleDamage",
			{
				(_this select 0) removeEventHandler ["HandleDamage", 0];
				.0;
				(_this select 0) setDamage 0;
				if (!isPlayer (_this select 0)) then {
					eastPlayers = eastPlayers - 1;
					if (eastPlayers <= 0) then {
						[] spawn {cutRsc["Vic_Splash", "PLAIN"];sleep 5.0; call endgame;};
					};
					(_this select 0) setCaptive true;
					removeAllWeapons (_this select 0);
					[(_this select 0)] spawn {
						sleep 5.0;
						deleteVehicle (_this select 0);
					};
				}else {cutRsc["Def_Splash", "PLAIN"];(_this select 0) setCaptive true;removeAllWeapons (_this select 0);[] spawn {sleep 5.0; call endgame;} };
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[_me]] call GearSetUpRed;
				_me setVariable ["color","#(argb,8,8,3)color(0.5,0.5,0.0,1,ca)",true];
			};
			_me addWeapon call SelectWeaponlist;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
		};
		
		case independent: 
		{
			intPlayers = intPlayers + 1;
			_me addEventHandler ["HandleDamage",
			{
				(_this select 0) removeEventHandler ["HandleDamage", 0];
				.0;
				(_this select 0) setDamage 0;
				if (!isPlayer (_this select 0)) then {
					intPlayers = intPlayers - 1;
					if (intPlayers <= 0) then {
						[] spawn {cutRsc["Vic_Splash", "PLAIN"];sleep 5.0; call endgame;};
					};
					(_this select 0) setCaptive true;
					removeAllWeapons (_this select 0);
					[(_this select 0)] spawn {
						sleep 5.0;
						deleteVehicle (_this select 0);
					};
				}else {cutRsc["Def_Splash", "PLAIN"];(_this select 0) setCaptive true;removeAllWeapons (_this select 0);[] spawn {sleep 5.0; call endgame;} };
			}];
			if (format["%1",(_me getVariable "gearSet")] != "true") then {
				[[_me]] call GearSetUpGreen;
				_me setVariable ["color","#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)",true];
			};
			_me addWeapon call SelectWeaponlist;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
			_me addMagazine call SelectAmmo;
		};

	};	

} forEach allUnits;