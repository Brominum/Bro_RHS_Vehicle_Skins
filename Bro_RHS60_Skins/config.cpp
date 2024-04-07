class CfgPatches
{
	class Bro_RHS60_Camos
	{
		addonRootClass = "Bro_RHS_Vehicle_Skins";
		name="[Bro] RHS Blackhawk - Camos";
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"RHS_US_A2_AirImport"};
		author="Bromine";
	};
};
class RHS_UH60_Base;
class cfgVehicles
{
	class RHS_UH60M_base: RHS_UH60_Base
	{
		class textureSources
		{
			class Bro_Winter
			{
				displayName = "[Bro] Winter";
				author = "Bromine";
				textures[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Snow\uh60m_fuselage_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Snow\uh60m_engine_co.paa"
				};
				factions[] = {};
			};
			class Bro_Wdl: Bro_Winter
			{
				displayName = "[Bro] Woodland";
				textures[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Wdl\uh60m_fuselage_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Wdl\uh60m_engine_co.paa"
				};
			};
			class Bro_Tan: Bro_Winter
			{
				displayName = "[Bro] Tan";
				textures[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Tan\uh60m_fuselage_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Tan\uh60m_engine_co.paa"
				};
			};
			class Bro_Red: Bro_Winter
			{
				displayName = "[Bro] Red";
				textures[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Red\uh60m_fuselage_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Red\uh60m_engine_co.paa"
				};
			};
			class Bro_Blue: Bro_Winter
			{
				displayName = "[Bro] Blue";
				textures[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Blue\uh60m_fuselage_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Blue\uh60m_engine_co.paa"
				};
			};
			class Bro_Orng: Bro_Winter
			{
				displayName = "[Bro] Orng";
				textures[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Orng\uh60m_fuselage_co.paa",
					"Bro_RHS_Vehicle_Skins\Bro_RHS60_Skins\Orng\uh60m_engine_co.paa"
				};
			};
		};
	};
};