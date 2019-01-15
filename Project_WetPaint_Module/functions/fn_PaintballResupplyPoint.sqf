_units = [_this,1,[],[[]]] call BIS_fnc_param;
_logic = [_this,0,objnull,[objnull]] call bis_fnc_param;

resupply = {

	(_this select 0) setObjectTexture [0, (_this select 0) getVariable "color"];
};

_num = count _units;
_allowSave =  _logic getVariable ["saveGear",true];

for "_x" from 0 to _num step 1 do {

	(_units select _x) addAction ["<t color='#FF0000'>Load Default Gear</t>",{
		_Ammo =  (_this select 3) getVariable ["AmmoName","140Rnd_PaintBall_blau"];
		_Weapon =  (_this select 3) getVariable ["WeaponName","Paintball_Gun_Black_F"];
		
		(_this select 1) addWeaponGlobal _Weapon;
		
		(_this select 1) addItem _Ammo;
		(_this select 1) addItem _Ammo;
		
		[[(_this select 1)],"resupply",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
		
	},_logic];
	
	if (_allowSave) then {
	
		(_units select _x) addAction ["<t color='#64FE2E'>Save Weapon</t>",{
		
			(_this select 1) setVariable ["gear", currentWeapon (_this select 1) , true];
			
		
		}];
		
		(_units select _x) addAction ["<t color='#F7FE2E'>Load Weapon</t>",{
		
			(_this select 1) addWeaponGlobal ((_this select 1) getVariable ["gear","Paintball_Gun_Black_F"]);
			hint "Weapon Loaded!";
			[[(_this select 1)],"resupply",BIS_fnc_spawn, true, false, false] spawn BIS_fnc_MP;
		
		}];
	
	};
} ;
