DrawOut = {
	[((_this select 0) select 0), "onEachFrame",   {   
		if (!(lineIntersects [eyepos player, getpos _this, player, _this])) then {
			drawIcon3D["\Project_WetPaint_Module\Data\UI\Red_X.paa", [1,1,1,1], [(visiblePosition _this) select 0,(visiblePosition _this) select 1,((visiblePosition _this) select 2)+2], 1, 1, 0, ""];  
		};
	},((_this select 0) select 1)] call BIS_fnc_addStackedEventHandler;
};
removeOut = {[(_this select 0), "onEachFrame"] call BIS_fnc_removeStackedEventHandler;};
SelectMask = {

	_items = compile loadFile "\Project_WetPaint_Mask\ItemNames.sqf";
	_maskList = call _items;
	_num = floor random (count _maskList);
	_returnMe = _maskList select _num;
	_returnMe
};
SelectUniform = {

	_itemsUni = ["desert_01.paa","desert_02.paa","desert_03.paa","digital_urban.paa","Fun_camo.paa","hex_camo.paa","jungle_01.paa"];
	_num2 = floor random (count _itemsUni);
	_returnMe2 = _itemsUni select _num2;
	_returnMe2 = format["\Project_WetPaint_Module\Data\%1",_returnMe2];
	_returnMe2

};
SetupGear = {

	removeHeadgear (_this select 0);
	removeVest (_this select 0);
	removeAllWeapons (_this select 0);
	(_this select 0) unassignItem "NVGoggles";
	(_this select 0) removeItem "NVGoggles";
	removeBackpackGlobal (_this select 0);
	(_this select 0) addHeadGear (call SelectMask);
	_uni = (call SelectUniform);
	(_this select 0) addUniform "U_B_Protagonist_VR";
	(_this select 0) setObjectTexture [1,_uni];
	(_this select 0) setObjectTexture [2,_uni];
	(_this select 0) setObjectTexture [0, "#(argb,8,8,3)color(0.0,0.9,1.0,1,ca)"];
};
blueOut = {
	.0;
	hint "YOU ARE OUT!!!";
	(_this select 0) setDamage 0;
	(_this select 0) setObjectTexture [0, "#(argb,8,8,3)color(1,0.0,0.0,1,ca)"];
	removeAllWeapons (_this select 0);
	[[[profileName,(_this select 0)]],"DrawOut",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
};
init = {
	switch (side (_this select 0)) do {      
		case west: {
			
			[[(_this select 0)],"SetupGear",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
			(_this select 0) addWeaponGlobal "Paintball_Gun_Green_F";
			(_this select 0) addItem "140Rnd_PaintBall_Red";
			(_this select 0) addItem "140Rnd_PaintBall_Green";
			(_this select 0) addItem "140Rnd_PaintBall_Green";
			(_this select 0) addItem "140Rnd_PaintBall_Green";
			(_this select 0) setVariable ["color","#(argb,8,8,3)color(0.0,0.9,1.0,1,ca)",true];
			
			(_this select 0) addEventHandler ["HandleDamage",{
				[[(_this select 0)],"blueOut",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
			}];
		};
		case east: { 
			(_this select 0) addUniform "U_O_Protagonist_VR";
			[(_this select 0)] call SetupGear;
			(_this select 0) addWeaponGlobal "Paintball_Gun_Red_F";
			(_this select 0) addItem "140Rnd_PaintBall_Yellow";
			(_this select 0) addItem "140Rnd_PaintBall_Red";
			(_this select 0) addItem "140Rnd_PaintBall_Red";
			(_this select 0) addItem "140Rnd_PaintBall_Red";
			
			(_this select 0) setObjectTexture [0, "#(argb,8,8,3)color(0.5,0.5,0.0,1,ca)"];
			(_this select 0) setVariable ["color","#(argb,8,8,3)color(0.5,0.5,0.0,1,ca)",true];
			
			(_this select 0) addEventHandler ["HandleDamage",{
				.0;
				hint "YOU ARE OUT!!!";
				(_this select 0) setDamage 0;
				(_this select 0) setObjectTexture [0, "#(argb,8,8,3)color(1,0.0,0.0,1,ca)"];  
				removeAllWeapons (_this select 0);
				[[[profileName,(_this select 0)]],"DrawOut",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
			}];
		};
		case independent: { 
			(_this select 0) addUniform "U_I_Protagonist_VR";
			[(_this select 0)] call SetupGear;
			(_this select 0) addWeaponGlobal "Paintball_Gun_Green_F";
			(_this select 0) addItem "140Rnd_PaintBall_Red";
			(_this select 0) addItem "140Rnd_PaintBall_Green";
			(_this select 0) addItem "140Rnd_PaintBall_Green";
			(_this select 0) addItem "140Rnd_PaintBall_Green";
			
			(_this select 0) setObjectTexture [0, "#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)"];
			(_this select 0) setVariable ["color","#(argb,8,8,3)color(0.0,1.0,0.2,1,ca)",true];
			
			(_this select 0) addEventHandler ["HandleDamage",{
				.0;
				hint "YOU ARE OUT!!!";
				(_this select 0) setDamage 0;
				(_this select 0) setObjectTexture [0, "#(argb,8,8,3)color(1,0.0,0.0,1,ca)"];  
				removeAllWeapons (_this select 0);
				[[[profileName,(_this select 0)]],"DrawOut",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
			}];
		};  
	};
};
[init,objNull] call BIS_fnc_onPlayerConnected;

[[player],"init",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;


