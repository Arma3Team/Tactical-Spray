_units = [_this,1,[],[[]]] call BIS_fnc_param;
_logic = [_this,0,objnull,[objnull]] call bis_fnc_param;

_T1Marker =  _logic getVariable ["Team1_Marker","team_1"];
_T2Marker =  _logic getVariable ["Team2_Marker","team_2"];
_ExMarker =  _logic getVariable ["exit_Marker","exit_marker"];
SaveGear = {

	(_this select 0) setVariable ["PaintSavedWeaponS",secondaryWeapon (_this select 0),true];
	(_this select 0) setVariable ["PaintSavedWeaponP",primaryWeapon (_this select 0),true];
	(_this select 0) setVariable ["PaintSavedMagazineS",secondaryWeaponMagazine (_this select 0),true];
	(_this select 0) setVariable ["PaintSavedMagazineP",primaryWeaponMagazine (_this select 0),true];
	(_this select 0) setVariable ["PaintSavedHead",headgear (_this select 0),true];

};
returnGear = {

	(_this select 0) addWeapon ((_this select 0) getVariable "PaintSavedWeaponP");
	(_this select 0) addWeapon ((_this select 0) getVariable "PaintSavedWeaponS");
	(_this select 0) addItem (((_this select 0) getVariable "PaintSavedMagazineS") select 0);
	(_this select 0) addItem (((_this select 0) getVariable "PaintSavedMagazineP")  select 0);
	(_this select 0) addHeadGear ((_this select 0) getVariable "PaintSavedHead");

};
chooseTeam = {
	_CoreObj = ((_this select 0) getVariable "CoreObject");
	_T1Count = _CoreObj getVariable "T1";
	_T2Count = _CoreObj getVariable "T2";
	if (_T1Count == _T2Count || _T1Count < _T2Count) then {
		_CoreObj setVariable ["T1",_T1Count + 1,true];
		(_this select 0) setVariable ["PTeam",1,true];
	}else {(_this select 0) setVariable ["PTeam",2,true];_CoreObj setVariable ["T2",_T2Count + 1,true];};
};
teleportP = {
	_CoreObj = ((_this select 0) getVariable "CoreObject");
	if ((_this select 0) getVariable "PTeam" == 1) then {
		(_this select 0) setPos (getMarkerPos (_CoreObj getVariable "T1Marker"));
	}else {
		(_this select 0) setPos (getMarkerPos (_CoreObj getVariable "T2Marker"));
	};
	[(_this select 0)] spawn {sleep 5.0;(_this select 0) removeEventHandler ["HandleDamage", 0];};
};
teleportOutP = {
	_CoreObj = ((_this select 0) getVariable "CoreObject");
	(_this select 0) setPos (getMarkerPos (_CoreObj getVariable "ExitMarker"));
};
eventHandelPaint = {
	(_this select 0) addEventHandler ["HandleDamage",
	{
		.0;
		(_this select 0) setDamage 0;
		_CoreObj = ((_this select 0) getVariable "CoreObject");
		if ((_this select 3) in (_CoreObj getVariable "currentSession")) then {
			[(_this select 0),_CoreObj] call QuitSession;
		}else {(_this select 3) setDamage 1;};
	}];
};
GearSetUp = 
{
	[((_this select 0) select 0)] call SaveGear;
	[((_this select 0) select 0)] call chooseTeam;
	removeAllWeapons ((_this select 0) select 0);
	removeHeadgear ((_this select 0) select 0);
	_headGear = call SelectMask;
	((_this select 0) select 0) addHeadGear _headGear;
	((_this select 0) select 0) setVariable ["gearSet", "true", true];
	[((_this select 0) select 0)] call teleportP;
	((_this select 0) select 0) addWeapon (call SelectWeaponlist);
	((_this select 0) select 0) addItem (call SelectAmmo);
	((_this select 0) select 0) addItem (call SelectAmmo);
	((_this select 0) select 0) addItem (call SelectAmmo);
	[((_this select 0) select 0)] call eventHandelPaint;
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
leaveSession = {
	if ((_this select 2) == 1) then {
		(_this select 1) addaction ["<t color='#FF0000'>Leave Session</t>",{
				
			((_this select 3) select 0) setVariable ["currentSession",(((_this select 3) select 0) getVariable "currentSession") - [(_this select 0)],true];
			(_this select 0) setVariable ["inSession",false,true];
			(_this select 0) setVariable ["CoreObject",objNull,true];
			removeAllActions (_this select 0);
						
		},[(_this select 0)],1,false,true,"","(_target == player)"];
	};
};
listOfPlayers = {
	_PlayerList = (_this select 1) addaction ["<t color='#FACC2E'>Players In Session</t>",{
		hint format ["%1",((_this select 3) select 0) getVariable "currentSession"];
	},[(_this select 0)],1,false,true,"","(_target == player)"];
};
QuitSession = {
	[(_this select 0)] call teleportOutP;
	[(_this select 0)] call returnGear;
	(_this select 1) setVariable ["currentSession",((_this select 1) getVariable "currentSession") - [(_this select 0)],true];
	if (count((_this select 1) getVariable "currentSession") == 1) then {
		[(((_this select 1) getVariable "currentSession") select 0),(_this select 1)] call QuitSession;
	}else{
		if (count((_this select 1) getVariable "currentSession") <= 0)then{
			(_this select 1) setVariable ["stage",0,true];
			(_this select 1) setVariable ["host",objNull,true];
			(_this select 1) setVariable ["currentSession",[],true];
			};
	};
	(_this select 0) setVariable ["inSession",false,true];
	(_this select 0) setVariable ["CoreObject",objNull,true];
	(_this select 0) setVariable ["stage",0,true];
	removeAllActions (_this select 0);
};

initObjectPaintball = {
	(_this select 0) select 0 addaction ["<t color='#3ADF00'>Host Session</t>",{	
		createDialog "Host_Session";
		(_this select 0) setVariable ["stage",50,true];
		{lbAdd[1500,_x]} forEach ["Yes","No"];lbSetCurSel [1500, 0];
		buttonSetAction [1601,"_null = [0,ctrlText 1400,lbText [1500,(lbCurSel 1500)]] ExecVM ""\Project_WetPaint_Module\functions\Public_menu.sqf"";closeDialog 0;"];
		waitUntil {!dialog};	
		if ((_this select 1) getVariable "session") then {
		
			(_this select 0) setVariable ["host",(_this select 1),true];
			(_this select 1) setVariable ["stage",1,true];
			(_this select 0) setVariable ["stage",1,true];
			(_this select 1) setVariable ["CoreObject",(_this select 0),true];
			(_this select 1) setVariable ["inSession",true,true];
			(_this select 0) setVariable ["currentSession",((_this select 0) getVariable "currentSession") + [(_this select 1)],true];
			
			_startGame = (_this select 1) addaction ["<t color='#3ADF00'>Start The Game</t>",{
				(_this select 0) setVariable ["stage",2,true];
				(_this select 3 select 0) setVariable ["stage",2,true];
				{removeAllActions _x;
			
					_x addaction ["<t color='#FF0000'>Quit Session</t>",{
						[(_this select 0),((_this select 3) select 0)] call QuitSession;		
					},[(_x getVariable "CoreObject")],1,false,true,"","(_target == player)"];
				
					[[_x]] call GearSetUp;
			
				} forEach (((_this select 3) select 0) getVariable "currentSession");
				[(_this select 3 select 0),(_this select 0)] call listOfPlayers;
			},[(_this select 0)],1,false,true,"","(_target == player) && ((_target getVariable ""stage"") == 1)"];
			[(_this select 0),(_this select 1)] call listOfPlayers;
			(_this select 1) addaction ["<t color='#FF0000'>Disband Session</t>",{
				{removeAllActions _x;_x setVariable ["inSession",false,true];hint "Session Disbanded";} forEach (((_this select 3) select 0) getVariable "currentSession");
				((_this select 3) select 0) setVariable ["stage",0,true];
				(_this select 0) setVariable ["stage",0,true];
				(_this select 0) setVariable ["CoreObject",objNull,true];
				((_this select 3) select 0) setVariable ["host",objNull,true];
				((_this select 3) select 0) setVariable ["currentSession",[],true];
				(_this select 0) setVariable ["session",false,true];
				removeAllActions (_this select 0);
				
			},[(_this select 0)],1,false,true,"","(_target == player) && ((_target getVariable ""stage"") == 1)"];
			hint "Session Created!";
		};
		if (!((_this select 1) getVariable "session")) then {(_this select 0) setVariable ["stage",0,true];};
		
	},[],1,false,true,"","_target getVariable ""stage"" < 1 && !(_this getVariable 'inSession')"];

	(_this select 0) select 0 addAction ["<t color='#3ADF00'>Join Session</t>",{
		if ( (((_this select 0) getVariable "host") getVariable "Pass") != "") then {

			(_this select 1) setVariable ["Pass",(((_this select 0) getVariable "host") getVariable "Pass"),true];
			createDialog "Join_Session";
			ctrlSetText [1001,format["Owner: %1",name ((_this select 0) getVariable "host")]];
			buttonSetAction [1601,"_null = [1,ctrlText 1400] ExecVM ""\Project_WetPaint_Module\functions\Public_menu.sqf"";"];
			[(_this select 0),(_this select 1)] spawn {	waitUntil {!dialog};
				if (((_this select 1) getVariable "PassTyped") == ((_this select 1) getVariable "Pass")) then {
					{hint (name (_this select 1))} forEach ((_this select 0) getVariable "currentSession");
					(_this select 0) setVariable ["currentSession",((_this select 0) getVariable "currentSession") + [(_this select 1)],true];
					(_this select 1) setVariable ["inSession",true,true];
					(_this select 1) setVariable ["CoreObject",(_this select 0),true];
					hint "Joined Session!";
					[(_this select 0),(_this select 1),(_this select 0) getVariable "stage"] call leaveSession;
				};
			};
		}else {
			{hint (name (_this select 1))} forEach ((_this select 0) getVariable "currentSession");
			(_this select 0) setVariable ["currentSession",((_this select 0) getVariable "currentSession") + [(_this select 1)],true];
			(_this select 1) setVariable ["inSession",true,true];
			(_this select 1) setVariable ["CoreObject",(_this select 0),true];
			hint "Joined Session!";
			[(_this select 0),(_this select 1),(_this select 0) getVariable "stage"] call leaveSession;
		};	// check if pass needed.bi

	},[],1,false,true,"","(((((_target getVariable 'host') getVariable ""stage"") == 1) || (((_target getVariable 'host') getVariable ""stage"") == 2) && ((_target getVariable 'host') getVariable ""JIP"")) && (!(_this in (_target getVariable 'currentSession'))) && !(_this getVariable 'inSession'))"];	
};
PLayerSetUP = {

	player setVariable ["inSession",false,true];
	player setVariable ["session",false,true];
	
};

if (format["%1",(_units select 0) getVariable "stage"] == "<null>") then {
	(_units select 0) setVariable ["currentSession",[],true];
	(_units select 0) setVariable ["stage",0,true];
	(_units select 0) setVariable ["T1",0,true];
	(_units select 0) setVariable ["T2",0,true];
	(_units select 0) setVariable ["T1Marker",_T1Marker,true];
	(_units select 0) setVariable ["T2Marker",_T2Marker,true];
	(_units select 0) setVariable ["ExitMarker",_ExMarker,true];
};

[] call PLayerSetUP;
[[_units select 0]] call initObjectPaintball;