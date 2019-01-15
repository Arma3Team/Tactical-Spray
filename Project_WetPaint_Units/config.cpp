#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

#include "cfgPatches.hpp"

class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};

	//Base class for BLUFOR soldiers
	class Test_Soldier_base_F: SoldierWB
	{
		faceType = Man_A3; /// this soldier is going to use standard faces
		side = 1; /// that means BLUFOR
		faction = BLU_F; /// Standard NATO faction
		genericNames = "NATOMen"; /// Standard names for lads of NATO
		vehicleClass = Men; /// Should be listed under Men
		
		scope = 0; /// base class should not be visible in editor
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Common\Data\basicbody.rvmat", 			/// what material is changed
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like in damage 0.5 and more
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",	/// how does the material look like while the part has damage 1	

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",			/// next materials are used through personality of the soldier
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",	

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};

		model 			= "\Project_WetPaint_Units\A3_character_Paint_Uni_1.p3d"; /// path to model
		modelSides[] 	= {3, 1}; 				/// what sides could use this uniform, means civilians and BLUFOR can use it
		nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
		uniformClass 	= "U_Test_uniform";		/// standard uniform used by this soldier, there is a special one defined later

		class UniformInfo /// defines allowed slots of the uniform
		{
			class SlotsInfo
			{
				class NVG : UniformSlotInfo{slotType = NVG_SLOT; };
				class Scuba : UniformSlotInfo{slotType = SCUBA_SLOT;};
				class Googles : UniformSlotInfo{slotType = GOGGLE_SLOT;};
				class Headgear : UniformSlotInfo{slotType = HEADGEAR_SLOT;};
			};
		};
		
		class HitPoints : HitPoints
		{
			class HitHead:HitHead {armor = 0.3*HeadArmourCoef;}; /// default soldier doesn't have any head armour, uses helmet
			class HitBody:HitBody {armor = 0.5*BodyArmourCoef;}; /// default soldier doesn't have protective uniform on body, uses vest
			class HitHands: HitHands {armor = 0.8*HandArmourCoef;}; /// some protection for hands by uniform
			class HitLegs: HitLegs {armor = 0.8*LegArmourCoef;}; /// some protection for legs by uniform
		};

		hiddenSelections[] = {"Camo", "insiginia"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\basicbody_grey_co.paa"}; /// what texture does this soldier use for camo selection

		weapons[] = {Test_weapon_01_holo_pointer_F, Throw, Put}; /// we have a sample weapon, why not use it? Throw and put weapons are required for grenades/mines
		respawnWeapons[] = {Test_weapon_01_holo_pointer_F, Throw, Put}; /// should be the same as previous most of the time
		Items[] = {FirstAidKit}; /// one First aid kit is good to start with
		RespawnItems[] = {FirstAidKit};
		magazines[] = {30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, HandGrenade, HandGrenade};
		respawnMagazines[] = {30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, 30Rnd_test_mag, HandGrenade, HandGrenade};		
		linkedItems[] = {V_Test_Vest, H_Test_Headgear, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles}; /// items directly in inventory slots
		respawnLinkedItems[] = {V_Test_Vest, H_Test_Headgear, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};

	class Test_Soldier_F: Test_Soldier_base_F /// class visible in editor
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		displayName = "Test Soldier"; /// what's displayed in editor or on cursor over
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	#include "cfgUniforms.hpp"
};