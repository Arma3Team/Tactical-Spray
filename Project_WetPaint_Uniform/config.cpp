#include "basicdefines_A3.hpp"
class CfgPatches
{
	class Project_WetPaint_Uniform
	{
		units[]={};
		weapons[]={""};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgVehicles
{
	class B_Protagonist_VR_F;
	class I_Protagonist_VR_F;
	
	//Desert 01 -->
	class Paintball_Desert_01_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_01.paa","\Project_WetPaint_Uniform\Data\02_desert_01.paa"};
	};
	class Paintball_Desert_01_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_01.paa","\Project_WetPaint_Uniform\Data\02_desert_01.paa"};
		faction = "OPF_F";
	};
	class Paintball_Desert_01_I: I_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_01.paa","\Project_WetPaint_Uniform\Data\02_desert_01.paa"};
		faction = "IND_F";
	};
	//<--
	
	//Desert 02 -->
	class Paintball_Desert_02_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 02)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_02.paa","\Project_WetPaint_Uniform\Data\02_desert_02.paa"};
	};
	class Paintball_Desert_02_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 02)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_02.paa","\Project_WetPaint_Uniform\Data\02_desert_02.paa"};
		faction = "OPF_F";
	};
	class Paintball_Desert_02_I: I_Protagonist_VR_F/// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 02)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_02.paa","\Project_WetPaint_Uniform\Data\02_desert_02.paa"};
		faction = "IND_F";
	};
	//<--
	
	//Desert 03 -->
	class Paintball_Desert_03_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 03)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_03.paa","\Project_WetPaint_Uniform\Data\02_desert_03.paa"};
	};
	class Paintball_Desert_03_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 03)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_03.paa","\Project_WetPaint_Uniform\Data\02_desert_03.paa"};
		faction = "OPF_F";
	};
	class Paintball_Desert_03_I: I_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Desert 03)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\desert_03.paa","\Project_WetPaint_Uniform\Data\02_desert_03.paa"};
		faction = "IND_F";
	};
	//<--
	
	//Digital Urban 01 -->
	class Paintball_Digital_Urban_01_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Digital Urban 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\digital_urban.paa","\Project_WetPaint_Uniform\Data\02_digital_urban.paa"};
	};
	class Paintball_Digital_Urban_01_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Digital Urban 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\digital_urban.paa","\Project_WetPaint_Uniform\Data\02_digital_urban.paa"};
		faction = "OPF_F";
	};
	class Paintball_Digital_Urban_01_I: I_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Digital Urban 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\digital_urban.paa","\Project_WetPaint_Uniform\Data\02_digital_urban.paa"};
		faction = "IND_F";
	};
	//<--
	
	//Fun Camo 01 -->
	class Paintball_Fun_Camo_01_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Fun Camo 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\Fun_camo.paa","\Project_WetPaint_Uniform\Data\02_Fun_camo.paa"};
	};
	class Paintball_Fun_Camo_01_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Fun Camo 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\Fun_camo.paa","\Project_WetPaint_Uniform\Data\02_Fun_camo.paa"};
		faction = "OPF_F";
	};
	class Paintball_Fun_Camo_01_I: I_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Fun Camo 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\Fun_camo.paa","\Project_WetPaint_Uniform\Data\02_Fun_camo.paa"};
		faction = "IND_F";
	};
	//<--
	
	//Hex Camo 01 -->
	class Paintball_Hex_Camo_01_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Hex Camo 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\hex_camo.paa","\Project_WetPaint_Uniform\Data\02_hex_camo.paa"};
	};
	class Paintball_Hex_Camo_01_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Hex Camo 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\hex_camo.paa","\Project_WetPaint_Uniform\Data\02_hex_camo.paa"};
		faction = "OPF_F";
	};
	class Paintball_Hex_Camo_01_I: I_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Hex Camo 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\hex_camo.paa","\Project_WetPaint_Uniform\Data\02_hex_camo.paa"};
		faction = "IND_F";
	};
	//<--
	
	//Blue 01 -->
	class Paintball_Blue_01_B: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Blue 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\Blue_01.paa","\Project_WetPaint_Uniform\Data\02_Blue_01.paa"};
	};
	class Paintball_Blue_01_O: B_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Blue 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\Blue_01.paa","\Project_WetPaint_Uniform\Data\02_Blue_01.paa"};
		faction = "OPF_F";
	};
	class Paintball_Blue_01_I: I_Protagonist_VR_F /// class visible in editor
	{
		scope = 1; /// scope needs to be 2 to have a visible class
		displayName = "Paintball (Blue 01)"; /// what's displayed in editor or on cursor over
		hiddenSelectionsTextures[] = {"","\Project_WetPaint_Uniform\Data\Blue_01.paa","\Project_WetPaint_Uniform\Data\02_Blue_01.paa"};
		faction = "IND_F";
	};
	//<--
};
//faction = "IND_F";
//faction = "OPF_F";
#include "uniforms.hpp"