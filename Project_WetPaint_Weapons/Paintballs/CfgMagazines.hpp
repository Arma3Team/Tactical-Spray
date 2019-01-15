class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 140Rnd_PaintBall_blau: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "140Rnd PaintBall (blau)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_blau_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_blau;
		count = 140; /// 30 rounds is enough
		initSpeed = 120; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 140; /// tracers to track low ammo
		descriptionShort = "140 Rounds of blau Paintballs"; /// on mouse-over in Inventory
		model = "\Project_WetPaint_Objects\ammo\pod.p3d";
	};
	class 140Rnd_PaintBall_fire: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "140Rnd PaintBall (fire)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_fire_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_fire;
		count = 140; /// 30 rounds is enough
		initSpeed = 120; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 140; /// tracers to track low ammo
		descriptionShort = "140 Rounds of fire Paintballs"; /// on mouse-over in Inventory
		model = "\Project_WetPaint_Objects\ammo\pod.p3d";
	};
	class 140Rnd_PaintBall_glow: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "140Rnd PaintBall (glow)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_glow_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_glow;
		count = 140; /// 30 rounds is enough
		initSpeed = 120; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 140; /// tracers to track low ammo
		descriptionShort = "140 Rounds of glow Paintballs"; /// on mouse-over in Inventory
		model = "\Project_WetPaint_Objects\ammo\pod.p3d";
	};
	class 140Rnd_PaintBall_gold: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "140Rnd PaintBall (gold)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_gold_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_gold;
		count = 140; /// 30 rounds is enough
		initSpeed = 120; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 140; /// tracers to track low ammo
		descriptionShort = "140 Rounds of gold Paintballs"; /// on mouse-over in Inventory
		model = "\Project_WetPaint_Objects\ammo\pod.p3d";
	};
	class 140Rnd_PaintBall_grun: 140Rnd_PaintBall_gold
	{
		displayName = "140Rnd PaintBall (grun)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_grun_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_grun;
		descriptionShort = "140 Rounds of grun Paintballs"; /// on mouse-over in Inventory
	};
	class 140Rnd_PaintBall_grungelb: 140Rnd_PaintBall_gold
	{
		displayName = "140Rnd PaintBall (grungelb)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_grungelb_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_grungelb;
		descriptionShort = "140 Rounds of grungelb Paintballs"; /// on mouse-over in Inventory
	};
	class 140Rnd_PaintBall_rotgelb: 140Rnd_PaintBall_gold
	{
		displayName = "140Rnd PaintBall (rotgelb)";
		picture = "\Project_WetPaint_Weapons\Data\UI\gear_grungelb_Paintball_Pod_x_ca.paa"; /// just some icon
		ammo = Caseless_rotgelb;
		descriptionShort = "140 Rounds of rotgelb Paintballs"; /// on mouse-over in Inventory
	};
	
	class 15Rnd_PaintBall_blau: 140Rnd_PaintBall_blau
	{
		displayName = "15Rnd PaintBall (Blau)";
		descriptionShort = "15 Rounds of blau Paintballs"; /// on mouse-over in Inventory
		count = 15; /// 30 rounds is enough
		initSpeed = 120; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 15; /// tracers to track low ammo
	};
	class 15Rnd_PaintBall_gold: 140Rnd_PaintBall_gold
	{
		displayName = "15Rnd PaintBall (gold)";
		descriptionShort = "15 Rounds of gold Paintballs"; /// on mouse-over in Inventory
		count = 15; /// 30 rounds is enough
		initSpeed = 120; /// standard muzzle speed
		tracersEvery = 1; /// disable tracers by default
		lastRoundsTracer = 15; /// tracers to track low ammo
	};
	class Chemlight_red;
	class Chemlight_red_New : Chemlight_red {
	
		ammo = "Chemlight_red_New";
	
	};
};
