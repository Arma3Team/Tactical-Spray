#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class CfgPatches
{
	class Project_WetPaint_Weapons
	{
		units[]={};
		weapons[]={"Paintball_Gun_Red_F","Paintball_Gun_Green_F"};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class CowsSlot;
class PointerSlot;

#include "cfgRecoils.hpp" /// specific recoil patterns for this rifle
#include "Paintballs\cfgMagazines.hpp" /// specific magazines for this rifle
#include "Paintballs\cfgAmmo.hpp" /// specific ammo for this rifle

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class Paintball_Markers_Base_F: Rifle_Base_F /// Just basic values common for all testing rifle variants
	{
		fireLightDuration = 0;
		fireLightIntensity = 0;
		magazines[] = {140Rnd_PaintBall_blau,140Rnd_PaintBall_fire,140Rnd_PaintBall_glow,140Rnd_PaintBall_gold,140Rnd_PaintBall_grun,140Rnd_PaintBall_grungelb,140Rnd_PaintBall_rotgelb}; /// original custom made magazines
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		discreteDistanceInitIndex = 0; /// Ironsight zeroing is the lowest value by default

		// Size of recoil sway of the cursor
		maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon
		inertia = 0.5;			

		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;

		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		descriptionShort = ""; /// displayed on mouseOver in Inventory
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;

//caseless ammo//
		caseless[] = {"",1,1,1};  /// no sound of ejected brass
		soundBullet[] = {caseless,1};
		
		selectionFireAnim = "muzzleFlash"; /// are we able to get rid of all the zaslehs?
		
		modes[] = {Single, FullAuto}; /// Includes fire modes for AI
		
    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////		
		
		class Single: Mode_SemiAuto /// Pew
		{
			sounds[] = {		/// the new parameter to distinguish muzzle accessories type
				StandardSound, // default zvuk
				SilencedSound // silenced zvuk
			};

			class BaseSoundModeType
			{

				weaponSoundEffect  = "DefaultRifle"; /// custom made sounds

				closure1[]={"\Project_WetPaint_Weapons\Data\Sound\paint_fire.wav", db3, 1,10}; /// custom made sounds
				closure2[]={"\Project_WetPaint_Weapons\Data\Sound\paint_fire.wav", db3, 1,10}; /// custom made sounds
				soundClosure[]={closure1,0.5, closure2,0.5}; /// custom made sounds
			};

			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Project_WetPaint_Weapons\sounds\fire1.wss", db3, 1,1200}; /// custom made sounds
				begin2[] = {"\Project_WetPaint_Weapons\sounds\fire2.wss", db3, 1,1200}; /// custom made sounds
				begin3[] = {"\Project_WetPaint_Weapons\sounds\fire3.wss", db3, 1,1200}; /// custom made sounds
				begin4[] = {"\Project_WetPaint_Weapons\sounds\fire4.wss", db3, 1,1200}; /// custom made sounds
				begin5[] = {"\Project_WetPaint_Weapons\sounds\fire5.wss", db3, 1,1200}; /// custom made sounds
				begin6[] = {"\Project_WetPaint_Weapons\sounds\fire6.wss", db3, 1,1200}; /// custom made sounds
				soundBegin[] = {begin1,0.5, begin2,0.5, begin3,0.5, begin4,0.5, begin5,0.5, begin6,0.5}; /// custom made sounds
			};
			
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\Project_WetPaint_Weapons\sounds\fire1.wss", db3, 1,1200}; /// custom made sounds
				begin2[] = {"\Project_WetPaint_Weapons\sounds\fire2.wss", db3, 1,1200}; /// custom made sounds
				begin3[] = {"\Project_WetPaint_Weapons\sounds\fire3.wss", db3, 1,1200}; /// custom made sounds
				begin4[] = {"\Project_WetPaint_Weapons\sounds\fire4.wss", db3, 1,1200}; /// custom made sounds
				begin5[] = {"\Project_WetPaint_Weapons\sounds\fire5.wss", db3, 1,1200}; /// custom made sounds
				begin6[] = {"\Project_WetPaint_Weapons\sounds\fire6.wss", db3, 1,1200}; /// custom made sounds
				soundBegin[] = {begin1,0.5, begin2,0.5, begin3,0.5, begin4,0.5, begin5,0.5, begin6,0.5}; /// custom made sounds
			};
			
			reloadTime = 0.096; /// means some 625 rounds per minute
			dispersion = 0.00087; /// A bit less than 3 MOA
			
			recoil = "recoil_single_Test_rifle_01"; /// defined in cfgRecoils
			recoilProne = "recoil_single_prone_Test_rifle_01"; /// defined in cfgRecoils
			
			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};
		
		class FullAuto: Mode_FullAuto /// Pew-pew-pew-pew-pew
		{
			sounds[] = {		/// the new parameter to distinguish muzzle accessories type
				StandardSound, // default zvuk
				SilencedSound // silenced zvuk
			};

			class BaseSoundModeType
			{

				weaponSoundEffect  = "DefaultRifle"; /// custom made sounds

				closure1[]={"\Project_WetPaint_Weapons\Data\Sound\paint_fire.wav", db3, 1,10}; /// custom made sounds
				closure2[]={"\Project_WetPaint_Weapons\Data\Sound\paint_fire.wav", db3, 1,10}; /// custom made sounds
				soundClosure[]={closure1,0.5, closure2,0.5}; /// custom made sounds
			};

			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Project_WetPaint_Weapons\sounds\fire1.wss", db3, 1,1200}; /// custom made sounds
				begin2[] = {"\Project_WetPaint_Weapons\sounds\fire2.wss", db3, 1,1200}; /// custom made sounds
				begin3[] = {"\Project_WetPaint_Weapons\sounds\fire3.wss", db3, 1,1200}; /// custom made sounds
				begin4[] = {"\Project_WetPaint_Weapons\sounds\fire4.wss", db3, 1,1200}; /// custom made sounds
				begin5[] = {"\Project_WetPaint_Weapons\sounds\fire5.wss", db3, 1,1200}; /// custom made sounds
				begin6[] = {"\Project_WetPaint_Weapons\sounds\fire6.wss", db3, 1,1200}; /// custom made sounds
				soundBegin[] = {begin1,0.5, begin2,0.5, begin3,0.5, begin4,0.5, begin5,0.5, begin6,0.5}; /// custom made sounds
			};
			
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"\Project_WetPaint_Weapons\sounds\fire1.wss", db3, 1,1200}; /// custom made sounds
				begin2[] = {"\Project_WetPaint_Weapons\sounds\fire2.wss", db3, 1,1200}; /// custom made sounds
				begin3[] = {"\Project_WetPaint_Weapons\sounds\fire3.wss", db3, 1,1200}; /// custom made sounds
				begin4[] = {"\Project_WetPaint_Weapons\sounds\fire4.wss", db3, 1,1200}; /// custom made sounds
				begin5[] = {"\Project_WetPaint_Weapons\sounds\fire5.wss", db3, 1,1200}; /// custom made sounds
				begin6[] = {"\Project_WetPaint_Weapons\sounds\fire6.wss", db3, 1,1200}; /// custom made sounds
				soundBegin[] = {begin1,0.5, begin2,0.5, begin3,0.5, begin4,0.5, begin5,0.5, begin6,0.5}; /// custom made sounds
			};

			reloadTime = 0.120;
			dispersion = 0.00087;
			
			recoil = "recoil_auto_Test_rifle_01"; /// defined in cfgRecoils
			recoilProne = "recoil_auto_prone_Test_rifle_01"; /// defined in cfgRecoils
			
			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1; 
			
			aiRateOfFire = 0.000001;
		};
		
		aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
		reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_MX",db-8,1, 30}; /// custom made sounds
	};

	class Paintball_Gun_Red_F: Paintball_Markers_Base_F
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Paintball Gun(Red)"; /// some name
		model = "\Project_WetPaint_Weapons\paintball_weapon_01_F"; /// path to model

		picture = "\Project_WetPaint_Weapons\Data\UI\gear_Red_Paintball_Gun_x_ca.paa"; /// different accessories have M, S, T instead of X

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};
	class Paintball_Gun_Green_F: Paintball_Markers_Base_F
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Paintball Gun(Green)"; /// some name
		model = "\Project_WetPaint_Weapons\paintball_weapon_02_F"; /// path to model

		picture = "\Project_WetPaint_Weapons\Data\UI\gear_Green_Paintball_Gun_x_ca.paa"; /// different accessories have M, S, T instead of X

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};
	
	class Paintball_Gun_Black_F: Paintball_Markers_Base_F
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Paintball Gun(Black)"; /// some name
		model = "\Project_WetPaint_Weapons\paintball_weapon_03_F"; /// path to model

		picture = "\Project_WetPaint_Weapons\Data\UI\gear_Black_Paintball_Gun_x_ca.paa"; /// different accessories have M, S, T instead of X
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100; /// some rough estimate
		};
	};
};


