_units = [_this,1,[],[[]]] call BIS_fnc_param;

_logic = [_this,0,objnull,[objnull]] call bis_fnc_param;

_Mode =  _logic getVariable ["Mode",0];

_Respawn =  _logic getVariable ["Respawn",0];

_scoreLimit =  _logic getVariable ["ScoreTik",50];

spawnLoc =  _logic getVariable ["spawnLoc","respawn_loc"];

UnitOut = 
{

	(_this select 0) select 0 setObjectTexture [0, "#(argb,8,8,3)color(1,0.0,0.0,1,ca)"];

};

SelectUniform = {

	((_this select 0) select 0) setObjectTexture [1, ((_this select 0) select 1)];
	((_this select 0) select 0) setObjectTexture [2, ((_this select 0) select 1)];

};

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

SelectMask = {

	_items = compile loadFile "\Project_WetPaint_Mask\ItemNames.sqf";
	_maskList = call _items;
	_num = floor random (count _maskList);
	_returnMe = _maskList select _num;
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

SelectSplash = {

	_items = ["small_Blue_Splash","small_Red_Splash"];
	_num = floor random (count _items);
	_returnMe = _items select _num;
	_returnMe
};
endgame = {["end1",false,2] call BIS_fnc_endMission;};
//Score  -----
scoreDisTDM =  // TDM
{
	((uiNamespace getVariable "TDM_hud") displayCtrl 5) ctrlSetText (format["%1", (_this select 0)]); //Blue
	((uiNamespace getVariable "TDM_hud") displayCtrl 6) ctrlSetText (format["%1", (_this select 1)]); //Red
	((uiNamespace getVariable "TDM_hud") displayCtrl 7) ctrlSetText (format["%1", (_this select 2)]); //Green
};
scoreDisDOM = 
{
	if ((_this select 0) < 10) then {
		((uiNamespace getVariable "DOM_hud") displayCtrl 13) ctrlSetText (format["00%1", (_this select 0)]); //Blue
	}else {
		if ((_this select 0) < 100) then {
			((uiNamespace getVariable "DOM_hud") displayCtrl 13) ctrlSetText (format["0%1", (_this select 0)]); //Blue
		}else {
			((uiNamespace getVariable "DOM_hud") displayCtrl 13) ctrlSetText (format["%1", (_this select 0)]); //Blue
		};
	};
	if ((_this select 1) < 10) then {
		((uiNamespace getVariable "DOM_hud") displayCtrl 14) ctrlSetText (format["00%1", (_this select 1)]); //Red
	}else {
		if ((_this select 1) < 100) then {
			((uiNamespace getVariable "DOM_hud") displayCtrl 14) ctrlSetText (format["0%1", (_this select 1)]); //Red
		}else {
			((uiNamespace getVariable "DOM_hud") displayCtrl 14) ctrlSetText (format["%1", (_this select 1)]); //Red
		};
	};
	if ((_this select 2) < 10) then {
		((uiNamespace getVariable "DOM_hud") displayCtrl 15) ctrlSetText (format["00%1", (_this select 2)]); //Green
	}else {
		if ((_this select 2) < 100) then {
			((uiNamespace getVariable "DOM_hud") displayCtrl 15) ctrlSetText (format["0%1", (_this select 2)]); //Green
		}else {
			((uiNamespace getVariable "DOM_hud") displayCtrl 15) ctrlSetText (format["%1", (_this select 2)]); //Green
		};
	};
};
switch (_Mode) do {

	case 0: {
		_TDM = compile loadFile "\Project_WetPaint_Module\functions\GameModes\TDM\TeamDeathmatch.sqf";
		call _TDM;
		if (_Respawn < 2) then {
			if (_Respawn == 1) then {
				team1 = 0;
				team2 = 0;
				team3 = 0;
			}else {
				team1 = _scoreLimit;
				team2 = _scoreLimit;
				team3 = _scoreLimit;
			};
		}else {
			team1 = -1;
			team2 = -1;
			team3 = -1;
		};
	};
	case 1: {
		_DomUniform = compile loadFile "\Project_WetPaint_Module\functions\GameModes\DOM\uniform.sqf";
		call _DomUniform;
		_Dom = compile loadFile "\Project_WetPaint_Module\functions\GameModes\DOM\Dominiation.sqf";
		[(_units select 0),(_units select 1),(_units select 2),_scoreLimit] call _Dom;
		[(_units select 0),(_units select 1),(_units select 2),_scoreLimit] call initDom;
		if (isServer) then 
		{
			//[[(_units select 0),(_units select 1),(_units select 2),_scoreLimit],"initDom",BIS_fnc_spawn,true,true] spawn BIS_fnc_MP;
			team1Score = 0;
			team2Score = 0;
			team3Score = 0;	
			
			(_units select 0) setPos [getPos (_units select 0) select 0,getPos (_units select 0) select 1,(getpos (_units select 0) select 2)-4];
			(_units select 1) setPos [getPos (_units select 1) select 0,getPos (_units select 1) select 1,(getpos (_units select 1) select 2)-4];
			(_units select 2) setPos [getPos (_units select 2) select 0,getPos (_units select 2) select 1,(getpos (_units select 2) select 2)-4];
		};
		(_units select 0) setVariable ["Name","A",true];
		(_units select 1) setVariable ["Name","B",true];
		(_units select 2) setVariable ["Name","C",true];
		[(_units select 0)] call setupFlags;
		[(_units select 1)] call setupFlags;
		[(_units select 2)] call setupFlags;	
		if (isServer) then 
		{	
			[(_units select 0),(_units select 1),(_units select 2),_scoreLimit] spawn {
			
				while {((team1Score < (_this select 3)) && (team2Score < (_this select 3)) && (team3Score < (_this select 3)))} do 
				{
					sleep 10;
					[(_this select 0)] call addScor;
					[(_this select 1)] call addScor;
					[(_this select 2)] call addScor;
					[[team1Score,team2Score,team3Score],"scoreDisDOM",TRUE,TRUE] call BIS_fnc_MP;
				};
				[[],"endgame",TRUE,TRUE] call BIS_fnc_MP;
			};
		};
	};
};