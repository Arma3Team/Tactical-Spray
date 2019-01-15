#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class CfgPatches
{
	class Project_WetPaint_Objects
	{
		units[]={};
		weapons[]={
		
			"PaintBall_Box",
			"PaintBall_Pyr",
			"PaintBall_Tri",
			"PaintBall_Cyl",
			"PaintBall_Cyl_Side"
		
		};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class cfgVehicleClasses
{
	class Project_WetPaint
	{
		displayName = "Structures (Paintball)";
	};
};
class CfgVehicles {

	#include "AmmoBox.hpp"
	
	class House;
	class House_F_New: House
	{
		class AnimationSources;
		class DestructionEffects;
		class EventHandlers;
	};
	class Ruins_F;

	// Class of the house in good state
	class PaintBall_Box: House_F_New
	{
		scope = 2; // 2 = public = shown in editor
		displayName = "Paintball Cover (Box)"; // Name in editor
		model = "\Project_WetPaint_Objects\03_Paintball_ob_F.p3d"; // Path to model
		icon = "iconObject_4x5";
		cost = 40000; // Score penalty for destroying the house
		vehicleClass = "Project_WetPaint";
	};	
	class PaintBall_Pyr: House_F_New
	{
		scope = 2; // 2 = public = shown in editor
		displayName = "Paintball Cover (pyramid)"; // Name in editor
		model = "\Project_WetPaint_Objects\01_Paintball_ob_F.p3d"; // Path to model
		icon = "iconObject_4x5";
		cost = 40000; // Score penalty for destroying the house
		vehicleClass = "Project_WetPaint";
	};	
	class PaintBall_Tri: House_F_New
	{
		scope = 2; // 2 = public = shown in editor
		displayName = "Paintball Cover (Triangle)"; // Name in editor
		model = "\Project_WetPaint_Objects\02_Paintball_ob_F.p3d"; // Path to model
		icon = "iconObject_4x5";
		cost = 40000; // Score penalty for destroying the house
		vehicleClass = "Project_WetPaint";
	};
	class PaintBall_Cyl: House_F_New
	{
		scope = 2; // 2 = public = shown in editor
		displayName = "Paintball Cover (Cylinder)"; // Name in editor
		model = "\Project_WetPaint_Objects\04_Paintball_ob_F.p3d"; // Path to model
		icon = "iconObject_4x5";
		cost = 40000; // Score penalty for destroying the house
		vehicleClass = "Project_WetPaint";
	};
	class PaintBall_Cyl_Side: House_F_New
	{
		scope = 2; // 2 = public = shown in editor
		displayName = "Paintball Cover (Cylinder Side)"; // Name in editor
		model = "\Project_WetPaint_Objects\05_Paintball_ob_F.p3d"; // Path to model
		icon = "iconObject_4x5";
		cost = 40000; // Score penalty for destroying the house
		vehicleClass = "Project_WetPaint";
	};
};

