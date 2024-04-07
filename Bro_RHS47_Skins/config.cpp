class CfgPatches
{
	class Bro_RHS47_Camos
	{
		addonRootClass = "Bro_RHS_Vehicle_Skins";
		name="[Bro] RHS Chinook - Camos";
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"RHS_US_A2_AirImport"};
		author="Bromine";
	};
};
class Heli_Transport_02_base_F;
class CfgVehicles
{
	class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		class textureSources
		{
			class Bro_Winter
			{
				displayName = "[Bro] Winter";
				author = "Bromine";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Snow\ch47_ext_1_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Snow\ch47_ext_2_co.paa"
				};
				factions[] = {};
			};
			class Bro_Woodland: Bro_Winter
			{
				displayName = "[Bro] Woodland";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Wdl\ch47_ext_1_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Wdl\ch47_ext_2_co.paa"
				};
			};
			class Bro_Red: Bro_Winter
			{
				displayName = "[Bro] Red";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Red\ch47_ext_1_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Red\ch47_ext_2_co.paa"
				};
			};
			class Bro_Orng: Bro_Winter
			{
				displayName = "[Bro] Orange";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Orng\ch47_ext_1_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Orng\ch47_ext_2_co.paa"
				};
			};
			class Bro_Blue: Bro_Winter
			{
				displayName = "[Bro] Blue";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Blue\ch47_ext_1_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Blue\ch47_ext_2_co.paa"
				};
			};
			class Bro_Black: Bro_Winter
			{
				displayName = "[Bro] Black";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Black\ch47_ext_1_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS47_Skins\Black\ch47_ext_2_co.paa"
				};
			};
		};
	};
};