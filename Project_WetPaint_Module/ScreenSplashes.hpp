class RscPicturePaintball {
	type = CT_STATIC;
	idc = -1;
	style = ST_PICTURE;
	colorBackground[] = {0, 0,0,0};//{red, green, blue, Transparent}
	font = "PuristaMedium"; //FontM//PuristaMedium//TahomaB
	sizeEx = 0;
};
class RscText;
class RscTitles 
{
	titles[] ={image};
	class small_Blue_Splash
	{
		idd=-1;
		movingEnable = false;
		duration=4; // Fade Duration
		fadein=1; // Fade Time
		name = "small_Blue_Splash"; // Name in Editor
		controls[]={Picture};
		class Picture : RscPicturePaintball
		{
			x = 0; // X-Axis dex-six
			y = 0; // Y-Axis su-giu
			w = 1; //WindowWidth
			h = 1; //Window Height
			ColorText[]={1,1,1,1}; // COLOUR
			text = "\Project_WetPaint_Module\Data\UI\Blue_Splash.paa"; // Graphic Direction
			sizeEx = 0.01;
			style=48;
		};
	};
	class small_Red_Splash
	{
		idd=-2;
		movingEnable = false;
		duration=4; // Fade Duration
		fadein=1; // Fade Time
		name = "small_Red_Splash"; // Name in Editor
		controls[]={Picture};
		class Picture : RscPicturePaintball
		{
			x = 0; // X-Axis dex-six
			y = 0; // Y-Axis su-giu
			w = 1; //WindowWidth
			h = 1; //Window Height
			ColorText[]={1,1,1,1}; // COLOUR
			text = "\Project_WetPaint_Module\Data\UI\Red_Splash.paa"; // Graphic Direction
			sizeEx = 0.01;
			style=48;
		};
	};
	class TDM_hud
	{
		idd = 3;
		fadeout=0;
		fadein=0;
		duration = 86400;//24h
		name = "TDM_hud";
		onLoad = "uiNamespace setVariable ['TDM_hud', _this select 0]";	

		class controlsBackground
		{
			class TDM_BG : RscPicturePaintball
			{
				idc = 4;
				ColorText[]={1,1,1,0.8}; // COLOUR
				text = "\Project_WetPaint_Module\Data\UI\GameModeUI\TDM_BG.paa";
				x = 1.18;
				y = 1.08;
				w = 0.4;
				h = 0.4;
				sizeEx = 0.01;
				style=48;
			};
			class TDM_Count_1 : RscText
			{
				idc = 5;
				text = "000";
				x = 1.235;
				y = 1.345;
				w = 0.07;
				h = 0.04;
				ColorText[]={0.4,0.4,1,0.8};
			};
			class TDM_Count_2 : RscText
			{
				idc = 6;
				text = "000";
				x = 1.357;
				y = 1.345;
				w = 0.07;
				h = 0.04;
				ColorText[]={1,0,0,0.8};
			};
			class TDM_Count_3 : RscText
			{
				idc = 7;
				text = "000";
				x = 1.484;
				y = 1.345;
				w = 0.07;
				h = 0.04;
				ColorText[]={0,1,0,0.8};
			};
		};
	};
	class DOM_hud
	{
		idd = 8;
		fadeout=0;
		fadein=0;
		duration = 86400;//24h
		name = "DOM_hud";
		onLoad = "uiNamespace setVariable ['DOM_hud', _this select 0]";	

		class controlsBackground
		{
			class DOM_BG : RscPicturePaintball
			{
				idc = 9;
				ColorText[]={1,1,1,0.8}; // COLOUR
				text = "\Project_WetPaint_Module\Data\UI\GameModeUI\Dom_UI.paa";
				x = 1.18;
				y = 1.08;
				w = 0.4;
				h = 0.4;
				sizeEx = 0.01;
				style=48;
			};
			class DOM_Flag_A : RscPicturePaintball
			{
				idc = 10;
				ColorText[]={1,1,1,0.8}; // COLOUR
				text = "\Project_WetPaint_Module\Data\UI\GameModeUI\Dom_Cap_A_White.paa";
				x = 1.22;
				y = 1.22;
				w = 0.08;
				h = 0.1;
				sizeEx = 0.01;
				style=48;
			};
			class DOM_Flag_B : RscPicturePaintball
			{
				idc = 11;
				ColorText[]={1,1,1,0.8}; // COLOUR
				text = "\Project_WetPaint_Module\Data\UI\GameModeUI\Dom_Cap_B_White.paa";
				x = 1.34;
				y = 1.22;
				w = 0.08;
				h = 0.1;
				sizeEx = 0.01;
				style=48;
			};
			class DOM_Flag_C : RscPicturePaintball
			{
				idc = 12;
				ColorText[]={1,1,1,0.8}; // COLOUR
				text = "\Project_WetPaint_Module\Data\UI\GameModeUI\Dom_Cap_C_White.paa";
				x = 1.47;
				y = 1.22;
				w = 0.08;
				h = 0.1;
				sizeEx = 0.01;
				style=48;
			};
			class DOM_Count_1 : RscText
			{
				idc = 13;
				text = "000";
				x = 1.235;
				y = 1.345;
				w = 0.07;
				h = 0.04;
				ColorText[]={0.4,0.4,1,0.8};
			};
			class DOM_Count_2 : RscText
			{
				idc = 14;
				text = "000";
				x = 1.357;
				y = 1.345;
				w = 0.07;
				h = 0.04;
				ColorText[]={1,0,0,0.8};
			};
			class DOM_Count_3 : RscText
			{
				idc = 15;
				text = "000";
				x = 1.484;
				y = 1.345;
				w = 0.07;
				h = 0.04;
				ColorText[]={0,1,0,0.8};
			};
		};
	};
	class Vic_Splash
	{
		idd=-16;
		movingEnable = false;
		duration=20; // Fade Duration
		fadein=1; // Fade Time
		name = "Victory_Splash"; // Name in Editor
		controls[]={Picture};
		class Picture : RscPicturePaintball
		{
			x = 0; // X-Axis dex-six
			y = 0; // Y-Axis su-giu
			w = 1; //WindowWidth
			h = 1; //Window Height
			ColorText[]={1,1,1,1}; // COLOUR
			text = "\Project_WetPaint_Module\Data\UI\Vic_Dis.paa"; // Graphic Direction
			sizeEx = 0.01;
			style=48;
		};
	};
	class Def_Splash
	{
		idd=-17;
		movingEnable = false;
		duration=20; // Fade Duration
		fadein=1; // Fade Time
		name = "Defet_Splash"; // Name in Editor
		controls[]={Picture};
		class Picture : RscPicturePaintball
		{
			x = 0; // X-Axis dex-six
			y = 0; // Y-Axis su-giu
			w = 1; //WindowWidth
			h = 1; //Window Height
			ColorText[]={1,1,1,1}; // COLOUR
			text = "\Project_WetPaint_Module\Data\UI\Def_Dis.paa"; // Graphic Direction
			sizeEx = 0.01;
			style=48;
		};
	};
};

#include "defines.hpp"

class Host_Session
{
	idd=1;
	movingenable = false;
	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by iConic-21, v1.063, #Mumoma)
		////////////////////////////////////////////////////////

		class Host_Frame: RscPicture1//RscFrame
		{
			idc = 1800;
			text = "\Project_WetPaint_Module\Data\UI\Paintball_Menu.paa"; //--- ToDo: Localize;
			x = 0.39 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			w = 0.23 * safezoneW;
			h = 0.329871 * safezoneH;
		};
		class RscListbox_1500: RscCombo1
		{
			idc = 1500;
			x = 0.505729 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			text = "Yes";
			tooltip = "Allow players to Join In Progress"; //--- ToDo: Localize;
		};
		class Host_AllowJip: RscText1
		{
			idc = 1001;
			text = "Allow JIP :"; //--- ToDo: Localize;
			x = 0.442708 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
			tooltip = "Allow players to Join In Progress"; //--- ToDo: Localize;
		};
		class Host_Password: RscText1
		{
			idc = 1002;
			text = "Password :"; //--- ToDo: Localize;
			x = 0.442708 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
			tooltip = "Password for the session (Leave Empty If not password required)"; //--- ToDo: Localize;
		};
		class Host_Password_Box: RscEdit1
		{
			idc = 1400;
			text = "";
			x = 0.505729 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			tooltip = "Password for the session (Leave Empty If not password required)"; //--- ToDo: Localize;
		};
		class Host_Cancel: RscButton1
		{
			idc = 1600;
			text = "Close"; //--- ToDo: Localize;
			x = 0.436979 * safezoneW + safezoneX;
			y = 0.57697 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0549786 * safezoneH;
			tooltip = "Close Session"; //--- ToDo: Localize;
			action = "closeDialog 0;";
		};
		class Host_Create: RscButton1
		{
			idc = 1601;
			text = "Create"; //--- ToDo: Localize;
			x = 0.528646 * safezoneW + safezoneX;
			y = 0.57697 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0549786 * safezoneH;
			tooltip = "Create Session"; //--- ToDo: Localize;
			//action = "_null = [ctrlText 1400,lbText [1500,(lbCurSel 1500)]] ExecVM ""test.sqf"";closeDialog 0;";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};

class Join_Session {

	idd=2;
	movingenable = false;
	class controls {
	
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by iConic-21, v1.063, #Setuhu)
		////////////////////////////////////////////////////////

		class Join_Frame: RscPicture1
		{
			idc = 1800;
			text = "\Project_WetPaint_Module\Data\UI\Paintball_Menu.paa"; //--- ToDo: Localize;
			x = 0.38 * safezoneW + safezoneX;
			y = 0.35 * safezoneH + safezoneY;
			h = 0.329871 * safezoneH;
			w = 0.22 * safezoneW;
		};
		class Join_Header: RscText1
		{
			idc = 1000;
			text = "Enter Password:"; //--- ToDo: Localize;
			x = 0.454167 * safezoneW + safezoneX;
			y = 0.379047 * safezoneH + safezoneY;
			w = 0.0859375 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		class Join_Pass: RscEdit1
		{
			idc = 1400;
			x = 0.442708 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.108854 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class Join_HostName: RscText1
		{
			idc = 1001;
			text = "Owner: <Name>"; //--- ToDo: Localize;
			x = 0.454167 * safezoneW + safezoneX;
			y = 0.467013 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.0439828 * safezoneH;
		};
		class Join_Cancel: RscButton1
		{
			idc = 1600;
			text = "Close"; //--- ToDo: Localize;
			x = 0.425521 * safezoneW + safezoneX;
			y = 0.565974 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0549786 * safezoneH;
			action = "closeDialog 0;";
		};
		class Join_Join: RscButton1
		{
			idc = 1601;
			text = "Join"; //--- ToDo: Localize;
			x = 0.522917 * safezoneW + safezoneX;
			y = 0.565974 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////
	};
};