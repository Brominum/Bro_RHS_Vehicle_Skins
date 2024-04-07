class CfgPatches
{
	class Bro_RHSLB_Camos
	{
		addonRootClass = "Bro_RHS_Vehicle_Skins";
		name="[Bro] RHS Little Bird - Camos";
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"rhsusf_c_melb"};
		author="Bromine";
	};
};
class Helicopter_Base_H;
class CfgVehicles
{
	class RHS_MELB_base: Helicopter_Base_H
	{
		class textureSources
		{
			class Bro_Base
			{
				displayName = "Black";
				author = "RHSUSAF";
				textures[] = 
				{
					"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa"
				};
				materials[] =
				{
					"rhsusf\addons\rhsusf_melb\data\melb_ext.rvmat"
				};
				factions[] = {};
			};
			class Bro_Gold1: Bro_Base
			{
				displayName = "[Bro] Gold Vein";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Gold1\melb_ext_co.paa"
				};
				materials[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Gold1\melb_ext.rvmat"
				};
			};
			class Bro_Gold2: Bro_Base
			{
				displayName = "[Bro] Solid Gold";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Gold2\melb_ext_co.paa"
				};
				materials[] =
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Gold2\melb_ext.rvmat"
				};
			};
			class Bro_Tan: Bro_Base
			{
				displayName = "[Bro] Tan";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Tan\melb_ext_co.paa"
				};
			};
			class Bro_Green: Bro_Base
			{
				displayName = "[Bro] Green";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Green\melb_ext_co.paa"
				};
			};
			class Bro_White: Bro_Base
			{
				displayName = "[Bro] White";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\White\melb_ext_co.paa"
				};
			};
			class Bro_LV: Bro_Base
			{
				displayName = "[Bro] LV Pattern";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\LV\melb_ext_co.paa"
				};
			};
			class Bro_MT: Bro_Base
			{
				displayName = "[Bro] Missing Textures";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\MT\melb_ext_co.paa"
				};
			};
			class Bro_Floppa: Bro_Base
			{
				displayName = "[Bro] Floppa Choppa";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\Floppa\melb_ext_co.paa"
				};
			};
			class Bro_Multicam: Bro_Base
			{
				displayName = "[Bro] Multicam";
				textures[] = 
				{
					"Bro_RHS_Vehicle_Skins\Bro_RHSLB_Skins\MC\melb_ext_co.paa"
				};
			};
		};
	};
};