class CfgPatches {
	class Hark_SPE_Cannons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PS44_AMZ_Cannons","A3_Sounds_F","A3_Sounds_F_exp","A3_Weapons_F","A3_Weapons_f_exp","A3_Weapons_F_Enoch","WW2_Assets_c_Weapons_Sounds_c","WW2_Assets_c_Weapons_InfantryWeapons_c"};
		author = "amzingdogeyyy";
	};
};
//Springfield! Springfield! It's a helluva town!
class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class BaseSoundModeType
{
	weaponSoundEffect="DefaultRifle";
	begin1[]=
	{
		"",
		0,
		1
	};
	soundBegin[]=
	{
		"begin1",
		1
	};
	closure1[]=
	{
		"",
		1,
		1,
		10
	};
	closure2[]=
	{
		"",
		1,
		1,
		10
	};
	soundClosure[]=
	{
		"closure1",
		0.5,
		"closure2",
		0.5
	};
};

class CfgWeapons{
	class CannonCore;
	class SPE_CannonCore: CannonCore
	{
		class player: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Squad_V_75mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class close: player
		{
		};
		class short: close
		{
		};
		class medium: short
		{
		};
		class far: medium
		{
		};
	};
	
class SPE_TankCannon_base: SPE_CannonCore
{};
class SPE_StaticGunCannon_base: SPE_CannonCore
{};
class SPE_StuK40_L48_base: SPE_TankCannon_base
    {
        class player: player
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class close: close
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class short: short
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class medium: medium
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class far: far
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
    };
class SPE_KwK42_L70_base: SPE_TankCannon_base
    {
        class player: player
        {
            class StandardSound
            {
                soundSetShot[]=
                {
					"Squad_V_75mm_Sets",
					"Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class close: close
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class short: short
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class medium: medium
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
        class far: far
        {
            class StandardSound
            {
                soundSetShot[]=
                {
                    "Squad_V_75mm_Sets",
                    "Cannon120mm_Tail_SoundSet"
                };
            };
        };
    };
		class SPE_Pak43_L71_base: SPE_TankCannon_base
	{
		class player: player
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
	};
	class SPE_Pak43_L71_3_base: SPE_Pak43_L71_base
{
		class player: player
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class close: close
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class short: short
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class medium: medium
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		class far: far
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Squad_V_88mm_Sets",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
	};
};