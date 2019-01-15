class CfgAmmo
{
	class BulletBase;
	class Caseless_blau: BulletBase
	{
	
		soundfly[]={"\Project_WetPaint_Weapons\sounds\ball-flyby.wss",0.01};
		
		soundHitWood1[]={"\Project_WetPaint_Weapons\sounds\impakt-holz1.wss",0.1,1};soundHitWood2[]={"\Project_WetPaint_Weapons\sounds\impakt-holz2.wss",0.1,1};
		soundHitWood3[]={"\Project_WetPaint_Weapons\sounds\impakt-holz3.wss",0.1,1};soundHitWood4[]={"\Project_WetPaint_Weapons\sounds\impakt-holz4.wss",0.1,1};
		hitWood[]={"soundHitWood1",0.3,"soundHitWood2",0.3,"soundHitWood3",0.3,"soundHitWood4",0.3};

		soundhitRubber1[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi1.wss",0.2,1};soundhitRubber2[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi2.wss",0.2,1};
		soundhitRubber3[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi3.wss",0.2,1};soundhitRubber4[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi4.wss",0.2,1};
		soundhitRubber5[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi5.wss",0.2,1};soundhitRubber6[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi6.wss",0.2,1};
		soundhitRubber7[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi7.wss",0.2,1};soundhitRubber8[]={"\Project_WetPaint_Weapons\sounds\impakt-gummi8.wss",0.2,1};
		hitRubber[]={"soundhitRubber1",0.5,"soundhitRubber2",0.5,"soundhitRubber3",0.5,"soundhitRubber4",0.5,"soundhitRubber5",0.5,"soundhitRubber6",0.5,"soundhitRubber7",0.5,"soundhitRubber8",0.5};
		
		cartridge = "";
		hit = 6;					
		indirectHit = 0;			
		indirectHitRange = 0;	
		typicalSpeed = 140;			
		visibleFire = 14;			
		audibleFire = 14;			
		visibleFireTime = 6;		
		timeToLive=3.5;				
		deflecting = 45;			
		caliber = 0.05;	
		tracerStartTime = 0.02;
		tracerEndTime = 3.5;
		airFriction = -0.032000;
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_blau; /// just for tracer
		class HitEffects {
			vehicle = "cal68_impact_red";
			object = "cal68_impact_red";  
			Hit_Foliage = "cal68_impact_red";
			Hit_Glass = "cal68_impact_red";
			Hit_Glass_Thin = "cal68_impact_red";
			Hit_Wood = "cal68_impact_red";
			Hit_Metal = "cal68_impact_red";
			Hit_Plaster = "cal68_impact_red";
			Hit_Rubber = "cal68_impact_red";
			Hit_Concrete = "cal68_impact_red";
			Hit_Blood = "cal68_impact_red";

			Hit_Foliage_Dead = "cal68_impact_red";
			Hit_Foliage_green = "cal68_impact_red"
			Hit_Foliage_Green_big = "cal68_impact_red";
			Hit_Foliage_Palm = "cal68_impact_red";
			Hit_Foliage_Pine = "cal68_impact_red";
			hitBuilding = "cal68_impact_red";
			hitConcrete = "cal68_impact_red";
			hitFoliage = "cal68_impact_red";
			hitGlass = "cal68_impact_red";
			hitGlassArmored = "cal68_impact_red";
			hitGroundHard = "cal68_impact_red";
			hitGroundSoft = "cal68_impact_red";
			hitMan = "cal68_impact_red";
			hitMetal = "cal68_impact_red";
			hitMetalPlate = "cal68_impact_red";
			hitPlastic = "cal68_impact_red";
			hitRubber = "cal68_impact_red";
			hitVirtual = "cal68_impact_red";
			hitWater = "cal68_impact_red";
			hitWood = "cal68_impact_red";
		};
	};
	
	class Caseless_fire: Caseless_blau
	{
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_fire; /// just for tracer
		class HitEffects {
			vehicle = "cal68_impact_yellow";
			object = "cal68_impact_yellow";   
			Hit_Foliage = "cal68_impact_yellow";
			Hit_Glass = "cal68_impact_yellow";
			Hit_Glass_Thin = "cal68_impact_yellow";
			Hit_Wood = "cal68_impact_yellow";
			Hit_Metal = "cal68_impact_yellow";
			Hit_Plaster = "cal68_impact_yellow";
			Hit_Rubber = "cal68_impact_yellow";
			Hit_Concrete = "cal68_impact_yellow";
			Hit_Blood = "cal68_impact_yellow";
			
			Hit_Foliage_Dead = "cal68_impact_yellow";
			Hit_Foliage_green = "cal68_impact_yellow"
			Hit_Foliage_Green_big = "cal68_impact_yellow";
			Hit_Foliage_Palm = "cal68_impact_yellow";
			Hit_Foliage_Pine = "cal68_impact_yellow";
			hitBuilding = "cal68_impact_yellow";
			hitConcrete = "cal68_impact_yellow";
			hitFoliage = "cal68_impact_yellow";
			hitGlass = "cal68_impact_yellow";
			hitGlassArmored = "cal68_impact_yellow";
			hitGroundHard = "cal68_impact_yellow";
			hitGroundSoft = "cal68_impact_yellow";
			hitMan = "cal68_impact_yellow";
			hitMetal = "cal68_impact_yellow";
			hitMetalPlate = "cal68_impact_yellow";
			hitPlastic = "cal68_impact_yellow";
			hitRubber = "cal68_impact_yellow";
			hitVirtual = "cal68_impact_yellow";
			hitWater = "cal68_impact_yellow";
			hitWood = "cal68_impact_yellow";
		};
	};
	
	class Caseless_glow: Caseless_blau
	{
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_glow; /// just for tracer	
		class HitEffects {
			vehicle = "cal68_impact_green";
			object = "cal68_impact_green";   
			Hit_Foliage = "cal68_impact_green";
			Hit_Glass = "cal68_impact_green";
			Hit_Glass_Thin = "cal68_impact_green";
			Hit_Wood = "cal68_impact_green";
			Hit_Metal = "cal68_impact_green";
			Hit_Plaster = "cal68_impact_green";
			Hit_Rubber = "cal68_impact_green";
			Hit_Concrete = "cal68_impact_green";
			Hit_Blood = "cal68_impact_green";
			
			Hit_Foliage_Dead = "cal68_impact_green";
			Hit_Foliage_green = "cal68_impact_green"
			Hit_Foliage_Green_big = "cal68_impact_green";
			Hit_Foliage_Palm = "cal68_impact_green";
			Hit_Foliage_Pine = "cal68_impact_green";
			hitBuilding = "cal68_impact_green";
			hitConcrete = "cal68_impact_green";
			hitFoliage = "cal68_impact_green";
			hitGlass = "cal68_impact_green";
			hitGlassArmored = "cal68_impact_green";
			hitGroundHard = "cal68_impact_green";
			hitGroundSoft = "cal68_impact_green";
			hitMan = "cal68_impact_green";
			hitMetal = "cal68_impact_green";
			hitMetalPlate = "cal68_impact_green";
			hitPlastic = "cal68_impact_green";
			hitRubber = "cal68_impact_green";
			hitVirtual = "cal68_impact_green";
			hitWater = "cal68_impact_green";
			hitWood = "cal68_impact_green";
		};
	};
	
	class Caseless_gold: Caseless_blau
	{
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_gold; /// just for tracer
		class HitEffects {
			vehicle = "cal68_impact_yellow";
			object = "cal68_impact_yellow";   
			Hit_Foliage = "cal68_impact_yellow";
			Hit_Glass = "cal68_impact_yellow";
			Hit_Glass_Thin = "cal68_impact_yellow";
			Hit_Wood = "cal68_impact_yellow";
			Hit_Metal = "cal68_impact_yellow";
			Hit_Plaster = "cal68_impact_yellow";
			Hit_Rubber = "cal68_impact_yellow";
			Hit_Concrete = "cal68_impact_yellow";
			Hit_Blood = "cal68_impact_yellow";
			
			Hit_Foliage_Dead = "cal68_impact_red";
			Hit_Foliage_green = "cal68_impact_red"
			Hit_Foliage_Green_big = "cal68_impact_red";
			Hit_Foliage_Palm = "cal68_impact_red";
			Hit_Foliage_Pine = "cal68_impact_red";
			hitBuilding = "cal68_impact_red";
			hitConcrete = "cal68_impact_red";
			hitFoliage = "cal68_impact_red";
			hitGlass = "cal68_impact_red";
			hitGlassArmored = "cal68_impact_red";
			hitGroundHard = "cal68_impact_red";
			hitGroundSoft = "cal68_impact_red";
			hitMan = "cal68_impact_red";
			hitMetal = "cal68_impact_red";
			hitMetalPlate = "cal68_impact_red";
			hitPlastic = "cal68_impact_red";
			hitRubber = "cal68_impact_red";
			hitVirtual = "cal68_impact_red";
			hitWater = "cal68_impact_red";
			hitWood = "cal68_impact_red";
		};
	};
	class Caseless_grun: Caseless_blau
	{
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_grun; /// just for tracer
		class HitEffects {
			vehicle = "cal68_impact_green";
			object = "cal68_impact_green";   
			Hit_Foliage = "cal68_impact_green";
			Hit_Glass = "cal68_impact_green";
			Hit_Glass_Thin = "cal68_impact_green";
			Hit_Wood = "cal68_impact_green";
			Hit_Metal = "cal68_impact_green";
			Hit_Plaster = "cal68_impact_green";
			Hit_Rubber = "cal68_impact_green";
			Hit_Concrete = "cal68_impact_green";
			Hit_Blood = "cal68_impact_green";
			
			Hit_Foliage_Dead = "cal68_impact_green";
			Hit_Foliage_green = "cal68_impact_green"
			Hit_Foliage_Green_big = "cal68_impact_green";
			Hit_Foliage_Palm = "cal68_impact_green";
			Hit_Foliage_Pine = "cal68_impact_green";
			hitBuilding = "cal68_impact_green";
			hitConcrete = "cal68_impact_green";
			hitFoliage = "cal68_impact_green";
			hitGlass = "cal68_impact_green";
			hitGlassArmored = "cal68_impact_green";
			hitGroundHard = "cal68_impact_green";
			hitGroundSoft = "cal68_impact_green";
			hitMan = "cal68_impact_green";
			hitMetal = "cal68_impact_green";
			hitMetalPlate = "cal68_impact_green";
			hitPlastic = "cal68_impact_green";
			hitRubber = "cal68_impact_green";
			hitVirtual = "cal68_impact_green";
			hitWater = "cal68_impact_green";
			hitWood = "cal68_impact_green";
		};
	};
	class Caseless_grungelb: Caseless_blau
	{
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_grungelb; /// just for tracer
		class HitEffects {
			vehicle = "cal68_impact_red";
			object = "cal68_impact_red";  
			Hit_Foliage = "cal68_impact_red";
			Hit_Glass = "cal68_impact_red";
			Hit_Glass_Thin = "cal68_impact_red";
			Hit_Wood = "cal68_impact_red";
			Hit_Metal = "cal68_impact_red";
			Hit_Plaster = "cal68_impact_red";
			Hit_Rubber = "cal68_impact_red";
			Hit_Concrete = "cal68_impact_red";
			Hit_Blood = "cal68_impact_red";
			
			Hit_Foliage_Dead = "cal68_impact_red";
			Hit_Foliage_green = "cal68_impact_red"
			Hit_Foliage_Green_big = "cal68_impact_red";
			Hit_Foliage_Palm = "cal68_impact_red";
			Hit_Foliage_Pine = "cal68_impact_red";
			hitBuilding = "cal68_impact_red";
			hitConcrete = "cal68_impact_red";
			hitFoliage = "cal68_impact_red";
			hitGlass = "cal68_impact_red";
			hitGlassArmored = "cal68_impact_red";
			hitGroundHard = "cal68_impact_red";
			hitGroundSoft = "cal68_impact_red";
			hitMan = "cal68_impact_red";
			hitMetal = "cal68_impact_red";
			hitMetalPlate = "cal68_impact_red";
			hitPlastic = "cal68_impact_red";
			hitRubber = "cal68_impact_red";
			hitVirtual = "cal68_impact_red";
			hitWater = "cal68_impact_red";
			hitWood = "cal68_impact_red";
		};
	};
	class Caseless_rotgelb: Caseless_blau
	{
		model = \Project_WetPaint_Weapons\Paintballs\cal68_ball_rotgelb; /// just for tracer
		class HitEffects {
			vehicle = "cal68_impact_red";
			object = "cal68_impact_red";  
			Hit_Foliage = "cal68_impact_red";
			Hit_Glass = "cal68_impact_red";
			Hit_Glass_Thin = "cal68_impact_red";
			Hit_Wood = "cal68_impact_red";
			Hit_Metal = "cal68_impact_red";
			Hit_Plaster = "cal68_impact_red";
			Hit_Rubber = "cal68_impact_red";
			Hit_Concrete = "cal68_impact_red";
			Hit_Blood = "cal68_impact_red";
			
			Hit_Foliage_Dead = "cal68_impact_red";
			Hit_Foliage_green = "cal68_impact_red"
			Hit_Foliage_Green_big = "cal68_impact_red";
			Hit_Foliage_Palm = "cal68_impact_red";
			Hit_Foliage_Pine = "cal68_impact_red";
			hitBuilding = "cal68_impact_red";
			hitConcrete = "cal68_impact_red";
			hitFoliage = "cal68_impact_red";
			hitGlass = "cal68_impact_red";
			hitGlassArmored = "cal68_impact_red";
			hitGroundHard = "cal68_impact_red";
			hitGroundSoft = "cal68_impact_red";
			hitMan = "cal68_impact_red";
			hitMetal = "cal68_impact_red";
			hitMetalPlate = "cal68_impact_red";
			hitPlastic = "cal68_impact_red";
			hitRubber = "cal68_impact_red";
			hitVirtual = "cal68_impact_red";
			hitWater = "cal68_impact_red";
			hitWood = "cal68_impact_red";
		};
	};
	
	class Chemlight_red;
	class Chemlight_red_New : Chemlight_red {
	
		timeToLive = -1;
	
	};
};

class CfgCloudlets {
	class Blood;
	class cal68_impact_red: Blood {
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;  
		size[] = {0.3,0.5};
		color[] = {{1,0,0,1},{1,0,0,0.1}};
	};
	class cal68_impact_green: Blood {
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;  
		size[] = {0.3,0.5};  
		color[] = {{0.0,1,0.0,1},{0.0,1,0.0,0.1}};
	};
	class cal68_impact_yellow: Blood {
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;  
		size[] = {0.3,0.5};  
		color[] = {{1,1,0,1},{1,1,0,0.1}};
	};
};

class cal68_impact_red {
	class cal68_impact_red {
		position[] = {0,0,0};
		simulation = "particles";
		type = "cal68_impact_red";
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};
class cal68_impact_green {
	class cal68_impact_green {
		position[] = {0,0,0};
		simulation = "particles";
		type = "cal68_impact_green";
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};
class cal68_impact_yellow {
	class cal68_impact_yellow {
		position[] = {0,0,0};
		simulation = "particles";
		type = "cal68_impact_yellow";
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};