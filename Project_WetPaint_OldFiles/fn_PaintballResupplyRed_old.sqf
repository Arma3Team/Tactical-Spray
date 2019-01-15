_units = [_this,1,[],[[]]] call BIS_fnc_param;

resupplyRed = {
	[[profileName],"removeOut",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
	player addWeaponGlobal "Paintball_Gun_Red_F";
	player addItem "140Rnd_PaintBall_Yellow";
	player addItem "140Rnd_PaintBall_Red";
	player addItem "140Rnd_PaintBall_Red";
	player addItem "140Rnd_PaintBall_Red";
	player setObjectTexture [0, player getVariable "color"];
};
resupplyGreen = {
	[[profileName],"DrawOut",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
	player addWeaponGlobal "Paintball_Gun_Green_F";
	player addItem "140Rnd_PaintBall_Red";
	player addItem "140Rnd_PaintBall_Green";
	player addItem "140Rnd_PaintBall_Green";
	player addItem "140Rnd_PaintBall_Green";
	player setObjectTexture [0, player getVariable "color"];
};

_num = count _units;

for "_x" from 0 to _num step 1 do {

	(_units select _x) addAction ["<t color='#FF0000'>Load Gear</t>",{
	
		call resupplyRed;
		
	}];

} ;
