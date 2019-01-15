class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	
	class UniformItem: InventoryItem_Base_F
	{
		type = UNIFORM_SLOT; /// to what slot does the uniform fit
	};

	//Desert 01 -->
	class Paintball_Uniform_desert_01_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_01_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_desert_01_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_01_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_desert_01_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_01_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
	
	//Desert 02 -->
	class Paintball_Uniform_desert_02_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 02)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_02_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_desert_02_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 02)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_02_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_desert_02_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 02)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_02_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
	
	//Desert 03 -->
	class Paintball_Uniform_desert_03_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 03)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_03_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_desert_03_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 03)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_03_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_desert_03_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Desert 03)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Desert_03_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
	
	//Digital Urban 01 -->
	class Paintball_Uniform_Digital_Urban_01_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Digital Urban 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Digital_Urban_01_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_Digital_Urban_01_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Digital Urban 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Digital_Urban_01_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_Digital_Urban_01_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Digital Urban 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Digital_Urban_01_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
	
	//Fun Camo 01 -->
	class Paintball_Uniform_Fun_Camo_01_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Fun Camo 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Fun_Camo_01_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_Fun_Camo_01_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Fun Camo 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Fun_Camo_01_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_Fun_Camo_01_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Fun Camo 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Fun_Camo_01_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
	
	//Hex Camo 01 -->
	class Paintball_Uniform_Hex_Camo_01_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Hex Camo 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Hex_Camo_01_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_Hex_Camo_01_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Hex Camo 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Hex_Camo_01_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_Hex_Camo_01_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (Hex Camo 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Hex_Camo_01_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
	
	//blue 01 -->
	class Paintball_Uniform_blue_01_B: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (blue 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Blue_01_B; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_blue_01_O: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (blue 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Blue_01_O; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	class Paintball_Uniform_blue_01_I: Itemcore
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		allowedSlots[] = {BACKPACK_SLOT}; /// where does the uniform fit to when not equipped
		displayName = "Paintball (blue 01)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F_Bootcamp\Common\VR_Protagonist_F.p3d"; /// how does the uniform look when put on ground

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = Paintball_Blue_01_I; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
			containerClass = Supply90; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 80; /// combined weight and volume
		};
	};
	//<--
};