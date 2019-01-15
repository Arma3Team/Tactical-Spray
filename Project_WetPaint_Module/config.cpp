#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class CfgPatches
{
	class Project_WetPaint_Module
	{
		units[]={};
		weapons[]={"ZSU_PaintballModule","ZSU_PaintballResupplyModuleRed","ZSU_PaintballResupplyModuleGreen","Project_WetPaint_Uniform"};
		requiredVersion=0.1;
		requiredAddons[]={"Project_wetPaint_Mask","Project_WetPaint_Weapons"};
	};
};

#include "ScreenSplashes.hpp"
#include "Sounds.hpp"

class CfgVehicles {
	
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class ZSU_PaintballModule: Module_F
	{
		author = "Z Special Unit";
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Paintball Core Module (Multilayer)"; // Name displayed in the menu
		icon = "\Project_WetPaint_Module\Data\UI\IconModule_ca.paa"; // Map icon. Delete this entry to use the default icon
		category = "Multiplayer";

		// Name of function triggered once conditions are met
		function = "ZSU_fnc_PaintballCore";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 0;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		
		// Module arguments
		class Arguments: ArgumentsBaseUnits{

			class Units: Units {};

			class Mode
  			{
				displayName = "GameMode"; // Argument label
				description = "what Game Mode To Play"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class TDM	{name = "Team DeathMatch"; value = 0;default = 1;};
					class Dom	{name = "Domination (Beta)"; value = 1;};
					class DM	{name = "DeathMatch (WIP)"; value = 2;};
					class CTF	{name = "Capture The Flag (WIP)"; value = 3;};
				};
			};
			
			class Respawn
  			{
				displayName = "Allowed Respawn"; // Argument label
				description = "If allowed to Respawn"; // Tooltip description
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class yes	{name = "Yes"; value = 0;default = 1;};
					class no	{name = "No"; value = 1;};
					class inf	{name = "Infinite"; value = 2;};
				};
			};
			
			class ScoreTik
  			{
				displayName = "Score Limit";
				description = "Score Limit";
				typeName = "NUMBER";
				defaultValue = 50; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
			
			class spawnLoc
  			{
				displayName = "Spawn Marker";
				description = "Respawn marker when Respawn is set to 'NO', player will be teleported to the marker location";
				typeName = "STRING";
				defaultValue = "respawn_loc"; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
		
		};

		
		class ModuleDescription: ModuleDescription {
			position = 1;
			description = "Core system for Paintball game";
		};
	};
	
	class ZSU_PaintballModule_SP: Module_F
	{
		author = "Z Special Unit";
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Paintball Core Module (Single Player)"; // Name displayed in the menu
		icon = "\Project_WetPaint_Module\Data\UI\IconModule_ca.paa"; // Map icon. Delete this entry to use the default icon
		category = "Multiplayer";

		// Name of function triggered once conditions are met
		function = "ZSU3_fnc_SinglePlayer";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 0;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		
		// Module arguments
		class Arguments: ArgumentsBaseUnits{};

		
		class ModuleDescription: ModuleDescription {
			position = 1;
			description = "Core system for Paintball game SinglePlayer";
		};
	};
	
	class ZSU_PaintballModule_Public: Module_F
	{
		author = "Z Special Unit";
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Paintball Core Module (Public Server)"; // Name displayed in the menu
		icon = "\Project_WetPaint_Module\Data\UI\IconModule_ca.paa"; // Map icon. Delete this entry to use the default icon
		category = "Multiplayer";

		// Name of function triggered once conditions are met
		function = "ZSU4_fnc_publicCore";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 0;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 2;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		
		// Module arguments
		class Arguments: ArgumentsBaseUnits{
		
			class Units: Units {};
			
			class Team1_Marker
  			{
				displayName = "Team 1 Marker Name";
				description = "Name of the marker for team 1";
				typeName = "STRING";
				defaultValue = "team_1"; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
			class Team2_Marker
  			{
				displayName = "Team 2 Marker Name";
				description = "Name of the marker for team 2";
				typeName = "STRING";
				defaultValue = "team_2"; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
			class exit_Marker
			{
				displayName = "Exit Marker Name";
				description = "Name of the marker for player to teleport to when they finish";
				typeName = "STRING";
				defaultValue = "exit_marker"; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
		};

		
		class ModuleDescription: ModuleDescription {
			position = 1;
			description = "Core system for Paintball game SinglePlayer";
		};
	};
	
	class ZSU_PaintballResupplyModule: Module_F
	{
		author = "Z Special Unit";
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Paintball Resupply Module"; // Name displayed in the menu
		icon = "\Project_WetPaint_Module\Data\UI\IconModuleRed_ca.paa"; // Map icon. Delete this entry to use the default icon
		category = "Multiplayer";

		// Name of function triggered once conditions are met
		function = "ZSU2_fnc_PaintballResupplyPoint";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 0;
		// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 0;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 1;
		
		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
		
			class Units: Units {};
			typeName = "STRING";
			class WeaponName
  			{
				displayName = "Weapon Name";
				description = "Class name of the Weapon";
				typeName = "STRING";
				defaultValue = "Paintball_Gun_Black_F"; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};	
			
			class AmmoName
  			{
				displayName = "Ammo Name";
				description = "Class name of Magazine";
				typeName = "STRING";
				defaultValue = "140Rnd_PaintBall_blau"; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
			
			class saveGear
  			{
				displayName = "Enable Save Gear:";
				description = "True : allowed to save gear, false : only can use gear mentioned on this module";
				typeName = "BOOL";// Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
				class values
				{
					class 1yes	{name = "True"; value = true;default = 1;};
					class 2no	{name = "False"; value = false;};
				};
			};
				
		};//ARRAY
		

		
		class ModuleDescription: ModuleDescription {
			position = 1;
			description = "Allows player to resupply";
		};
	};
};

class CfgFunctions 
{
	class ZSU
	{
		class Effects
		{
			file = "\Project_WetPaint_Module\functions";
			class PaintballCore{};
		};
	};
	class ZSU2
	{
		class Effects
		{
			file = "\Project_WetPaint_Module\functions";
			class PaintballResupplyPoint{};
		};
	};
	class ZSU3
	{
		class Effects
		{
			file = "\Project_WetPaint_Module\functions";
			class SinglePlayer{};
		};
	};
	class ZSU4
	{
		class Effects
		{
			file = "\Project_WetPaint_Module\functions";
			class publicCore{};
		};
	};
};

