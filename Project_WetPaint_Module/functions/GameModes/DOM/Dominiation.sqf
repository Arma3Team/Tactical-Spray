


addScor = 
{
	_return = 0;
	switch ((_this select 0) getVariable "cap") do 
	{
		
		case 1:
		{
			team1Score = team1Score + 1;
		};
		case 2:
		{
			team2Score = team2Score + 1;
		};
		case 3:
		{
			team3Score = team3Score + 1;
		};
	};
};

capture_fn = 
{

	switch (side (_this select 1)) do 
	{
		case west: 
		{
			(_this select 0) setVariable ["cap",1,true];
			(_this select 0) setFlagTexture "\A3\Data_F\Flags\Flag_blue_CO.paa";
			[[(_this select 0)],"removeDraw",TRUE,TRUE] call BIS_fnc_MP;
			[[[(_this select 0),format["Dom_Cap_%1_Blue.paa",(_this select 0) getVariable "Name"]]],"DrawIc",TRUE,TRUE] call BIS_fnc_MP;
			
		};
		case east: 
		{
			(_this select 0) setVariable ["cap",2,true];
			(_this select 0) setFlagTexture "\A3\Data_F\Flags\Flag_red_CO.paa";
			[[(_this select 0)],"removeDraw",TRUE,TRUE] call BIS_fnc_MP;
			[[[(_this select 0),format["Dom_Cap_%1_Red.paa",(_this select 0) getVariable "Name"]]],"DrawIc",TRUE,TRUE] call BIS_fnc_MP;
				
		};
		case independent: 
		{
			(_this select 0) setVariable ["cap",3,true];
			(_this select 0) setFlagTexture "\A3\Data_F\Flags\Flag_green_CO.paa";
			[[(_this select 0)],"removeDraw",TRUE,TRUE] call BIS_fnc_MP;
			[[[(_this select 0),format["Dom_Cap_%1_Green.paa",(_this select 0) getVariable "Name"]]],"DrawIc",TRUE,TRUE] call BIS_fnc_MP;
			
		};
	};
};
removeDraw = 
{

	[(_this select 0) getVariable "Name", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;

};
setupFlags =
{
	if (format ["%1",((_this select 0) getVariable "cap")]=="<null>") then {
		(_this select 0) setVariable ["cap",0,true];
		[[[(_this select 0),format["Dom_Cap_%1_White.paa",(_this select 0) getVariable "Name"]]],"DrawIc",TRUE,TRUE] call BIS_fnc_MP;
	};
};
DrawIc = 
{
	switch(((_this select 0) select 0) getVariable "Name") do {
		case "A":
		{
			((uiNamespace getVariable "DOM_hud") displayCtrl 10) ctrlSetText (format ["\Project_WetPaint_Module\Data\UI\GameModeUI\%1",((_this select 0) select 1)]);
		};
		case "B":
		{
			((uiNamespace getVariable "DOM_hud") displayCtrl 11) ctrlSetText (format ["\Project_WetPaint_Module\Data\UI\GameModeUI\%1",((_this select 0) select 1)]);
		};
		case "C":
		{	
			((uiNamespace getVariable "DOM_hud") displayCtrl 12) ctrlSetText (format ["\Project_WetPaint_Module\Data\UI\GameModeUI\%1",((_this select 0) select 1)]);
		};
	};
	[(((_this select 0) select 0)getVariable "Name"), "onEachFrame",   {   
		drawIcon3D[format ["\Project_WetPaint_Module\Data\UI\GameModeUI\%1",(_this select 1)], [1,1,1,0.5], [(getPos (_this select 0)) select 0,(getPos (_this select 0)) select 1,((getPos (_this select 0)) select 2)+8], 1, 1, 0, ""];  
	},[((_this select 0) select 0),((_this select 0) select 1)]] call BIS_fnc_addStackedEventHandler;
			
};

initDom = 
{
	(_this select 0) addaction ["Capture A",{[[(_this select 0),(_this select 1)],"capture_fn",TRUE,TRUE] call BIS_fnc_MP;},"",1.5,true,true,"","((currentWeapon  _this) != '')"];
	(_this select 1) addaction ["Capture B",{[[(_this select 0),(_this select 1)],"capture_fn",TRUE,TRUE] call BIS_fnc_MP;},"",1.5,true,true,"","((currentWeapon  _this) != '')"];
	(_this select 2) addaction ["Capture C",{[[(_this select 0),(_this select 1)],"capture_fn",TRUE,TRUE] call BIS_fnc_MP;},"",1.5,true,true,"","((currentWeapon  _this) != '')"];
};