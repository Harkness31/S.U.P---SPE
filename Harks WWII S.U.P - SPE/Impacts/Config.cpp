class CfgPatches {
	class Hark_SPE_SUP_Impacts {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PS44_AMZ_Impacts","SIG_Soundsa3_SH44_config_impacts","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_Weapons_AmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		author = "amzingdogeyyy";
	};
};
class CfgAmmo{
	class BulletBase;
	class RocketBase;
	class GrenadeHand;
	class GrenadeBase;
	class PipeBombBase;
	class BombCore;
	class FuelExplosionBig;
	class HelicopterExploSmall;
	class MineCore;
	class SubmunitionBase;
	class ShellBase;
	class Sh_82mm_AMOS;
	class SPE_FuelExplosionBig: FuelExplosionBig{
		SoundSetExplosion[]=
		{
			"Squad_IED_Explosions_Set",
			"Squad_IED_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	};
	
	class SPE_GrenadeHand_base: GrenadeHand{
		SoundSetExplosion[]=
		{
			"Squad_Grenades_Explosions_Set",
			"Squad_Grenades_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	};		
	class SPE_Rocket_base: RocketBase{	
		
		SoundSetExplosion[]=
		{
			"Squad_Launcher_Explosions_Set",
			"Squad_Launcher_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
			
	};	
	class SmallSecondary: HelicopterExploSmall{
		SoundSetExplosion[] = {"Sig_SmallSecondary_Exp_SoundSet","Sig_Refl_Expl_small_SoundSet"};
	};
	class SPE_Grenade_base: GrenadeBase{
		SoundSetExplosion[]=
		{
			"Squad_Grenades_Explosions_Set",
			"Squad_Grenades_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
	};
	class SPE_MAIN_pipebomb: PipeBombBase{
		SoundSetExplosion[]=
		{
			"Squad_IED_Explosions_Set",
			"Squad_IED_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
	};	
	class SPE_PzFaust_30m: SPE_Rocket_base{
		SoundSetExplosion[]=
		{
			"Squad_Launcher_Explosions_Set",
			"Squad_Launcher_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
			
	};	
	class SPE_60mm_M6: SPE_Rocket_base{
SoundSetExplosion[]=
		{
			"Squad_Launcher_Explosions_Set",
			"Squad_Launcher_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
			
	};	
	class SPE_MAIN_mine: MineCore{	
		SoundSetExplosion[]=
		{
			"Squad_Mines_Explosions_Set",
			"Squad_Mines_Explosions_2_Set",
			"Squad_Mines_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
	};
	class SPE_Shell_base: ShellBase{
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};				
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
	};
	class SPE_Bullet_AA_base: BulletBase{	
		soundSetSonicCrack[] = {"Squad_HeavySonicCrack_Sets"};				
		SoundSetExplosion[]=
		{
			"Squad_AutoCannon_Explosions_Set","Squad_AutoCannon_Explosions_2_Set",
			"Squad_AutoCannon_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	};	
	class SPE_SprGr_FlaK_38: SPE_Bullet_AA_base{	
		soundSetSonicCrack[] = {"Squad_HeavySonicCrack_Sets"};				
		SoundSetExplosion[]=
		{
			"Squad_AutoCannon_Explosions_Set","Squad_AutoCannon_Explosions_2_Set",
			"Squad_AutoCannon_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	};	
	class SPE_Bullet_AP_base: BulletBase{	
		soundSetSonicCrack[] = {"Squad_HeavySonicCrack_Sets"};				
		SoundSetExplosion[]=
		{
			"Squad_AutoCannon_Explosions_Set","Squad_AutoCannon_Explosions_2_Set",
			"Squad_AutoCannon_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	};	
	class SPE_FlakExplosion: ShellBase{
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};			
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
	};
	class SPE_FlakExplosion2: SPE_FlakExplosion{	
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};			
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
	};	
	class SPE_ShellHEAT_base: ShellBase{	
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};			
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
	};		
	class SPE_S_105L28_Gr39HlC: SPE_ShellHEAT_base{	
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};			
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
	};		
	class SPE_HLGr38c_K51_HEAT: SPE_ShellHEAT_base{	
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};			
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
	};		
	class SPE_ShellHE_base: ShellBase{
		SoundSetExplosion[]=
		{
			"Squad_MEDEXP_Explosions_Set",
			"Squad_MEDEXP_Explosions_2_Set",
			"Squad_MEDEXP_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};			
		soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
	};	
	class SPE_M101_M1_HE: SPE_ShellHE_base{
		SoundSetExplosion[]=
		{
			"Squad_Artillery_Explosions_Set",
			"Squad_Artillery_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
		soundFly[] = {"\squad_expSounds\incoming\artillery\sounds\artillery_shell_incoming_far_loop_01.ogg", 0.5, 0.45, 1800};	
	};			
	class SPE_S_105L28_Gr38: SPE_ShellHE_base{	
	SoundSetExplosion[]=
		{
			"Squad_Artillery_Explosions_Set",
			"Squad_Artillery_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
		soundFly[] = {"\squad_expSounds\incoming\artillery\sounds\artillery_shell_incoming_far_loop_01.ogg", 0.5, 0.45, 1800};	
	};		
	class SPE_R_M8: RocketBase{
		soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};				
		SoundSetExplosion[]=
		{
			"Squad_Launcher_Explosions_Set",
			"Squad_Launcher_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	};  
	class SPE_R_M8_A3: SubmunitionBase{	
		soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};				
		SoundSetExplosion[]=
		{
			"Squad_Launcher_Explosions_Set",
			"Squad_Launcher_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	}; 	
	class SPE_R_M8_fly: ShellBase{	
		soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};				
		SoundSetExplosion[]=
		{
			"Squad_Launcher_Explosions_Set",
			"Squad_Launcher_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};
	}; 	
	class SPE_R_280mm_WkSpr: SubmunitionBase{	
		soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
		SoundSetExplosion[]=
		{
			"Squad_Bombs_Explosions_Set",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};		
	class SPE_R_280mm_WkSpr_fly: ShellBase{	
		soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
		SoundSetExplosion[]=
		{
			"Squad_Bombs_Explosions_Set",
			"BombsHeavy_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};		
	class SPE_Sh_82_HE: Sh_82mm_AMOS{	
		SoundSetExplosion[]=
		{
			"Squad_Mortar_Explosions_Set",
			"Squad_Mortar_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
		soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
	};

	class ARTY_SPE_Sh_82_HE: SPE_Sh_82_HE{	
		SoundSetExplosion[]=
		{
			"Squad_Mortar_Explosions_Set",
			"Squad_Mortar_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
		soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
	};
	class SPE_Sh_81_HE: SPE_Sh_82_HE{	
		SoundSetExplosion[]=
		{
			"Squad_Mortar_Explosions_Set",
			"Squad_Mortar_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
		soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
	};	
	class ARTY_SPE_Sh_81_HE: SPE_Sh_81_HE{	
		SoundSetExplosion[]=
		{
			"Squad_Mortar_Explosions_Set",
			"Squad_Mortar_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
		soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
	};	
	class SPE_Sh_M43A1_81_HE: SubmunitionBase{
		SoundSetExplosion[]=
		{
			"Squad_Mortar_Explosions_Set",
			"Squad_Mortar_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
		soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
	};		
	class SPE_Sh_M43A1_81_HE_Submunition: ShellBase{	
		SoundSetExplosion[]=
		{
			"Squad_Mortar_Explosions_Set",
			"Squad_Mortar_Tail_Explosions_Set",
			"Explosion_Debris_SoundSet"
		};		
		soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
	};			
	
			
	class SPE_Bullet_base: BulletBase{
		soundSetBulletFly[] = {};		
		soundSetSonicCrack[] = {"Squad_BulletSonicCrack_Sets"};
		
		bulletFly1[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_13.ogg", 1, 1, 40};
		bulletFly2[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_14.ogg", 1, 1, 40};
		bulletFly3[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_15.ogg", 1, 1, 40};
		bulletFly4[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_16.ogg", 1, 1, 40};
		bulletFly5[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_17.ogg", 1, 1, 40};
		bulletFly6[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_27.ogg", 1, 1, 40};
		bulletFly7[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_28.ogg", 1, 1, 40};
		bulletFly8[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_29.ogg", 1, 1, 40};
		bulletFly9[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_30.ogg", 1, 1, 40};
		bulletFly10[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_19.ogg", 1, 1, 40};
		bulletFly11[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_20.ogg", 1, 1, 40};
		bulletFly12[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_21.ogg", 1, 1, 40};
		bulletFly13[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_22.ogg", 1, 1, 40};
		bulletFly14[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_23.ogg", 1, 1, 40};
		bulletFly15[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_24.ogg", 1, 1, 40};
		bulletFly16[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_25.ogg", 1, 1, 40};
		
		
		soundMetal1[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_01.ogg", 5, 1, 60};
		soundMetal2[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_02.ogg", 5, 1, 60};
		soundMetal3[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_03.ogg", 5, 1, 60};
		soundMetal4[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_04.ogg", 5, 1, 60};
		soundMetal5[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_05.ogg", 5, 1, 60};
		soundMetal6[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_06.ogg", 5, 1, 60};
		soundMetal7[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_07.ogg", 5, 1, 60};
		soundMetal8[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_08.ogg", 5, 1, 60};
		soundMetal9[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_09.ogg", 5, 1, 60};
		soundMetal10[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_010.ogg", 5, 1, 60};
		soundMetal11[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_011.ogg", 5, 1, 60};
		soundMetal12[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_012.ogg", 5, 1, 60};
		soundMetal13[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_013.ogg", 5, 1, 60};
		soundMetal14[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_014.ogg", 5, 1, 60};
		soundMetal15[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_01.ogg", 5, 1, 60};
		soundMetal16[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_02.ogg", 5, 1, 60};
		soundMetal17[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_03.ogg", 5, 1, 60};
		soundMetal18[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_04.ogg", 5, 1, 60};
		soundMetal19[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_05.ogg", 5, 1, 60};
		soundMetal20[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_06.ogg", 5, 1, 60};
		soundMetal21[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_07.ogg", 5, 1, 60};
		soundMetal22[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_08.ogg", 5, 1, 60};
		soundMetal23[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_09.ogg", 5, 1, 60};
		soundMetal24[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_10.ogg", 5, 1, 60};
		soundMetal25[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_11.ogg", 5, 1, 60};
		soundMetal26[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_12.ogg", 5, 1, 60};
		soundMetal27[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_13.ogg", 5, 1, 60};
		soundMetal28[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_14.ogg", 5, 1, 60};
		soundMetal29[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_rifle_close_15.ogg", 5, 1, 60};
		soundMetal30[] = {"\squad_expSounds\bullets\impacts\metal\Bhit_Thin_Metal_Small_030.ogg", 5, 1, 60};
		
		
		
		soundHitBody1[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_01.ogg", 4, 1, 20};
		soundHitBody2[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_02.ogg", 4, 1, 20};
		soundHitBody3[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_03.ogg", 4, 1, 20};
		soundHitBody4[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_04.ogg", 4, 1, 20};
		soundHitBody5[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_05.ogg", 4, 1, 20};
		soundHitBody6[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_06.ogg", 4, 1, 20};
		soundHitBody7[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_07.ogg", 4, 1, 20};
		soundHitBody8[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_08.ogg", 4, 1, 20};
		soundHitBody9[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_09.ogg", 4, 1, 20};
		soundHitBody10[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_10.ogg", 4, 1, 20};
		soundHitBody11[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_11.ogg", 4, 1, 20};
		
		
		soundGroundSoft1[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_01.ogg", 10, 1, 60};
		soundGroundSoft2[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_02.ogg", 10, 1, 60};
		soundGroundSoft3[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_03.ogg", 10, 1, 60};
		soundGroundSoft4[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_04.ogg", 10, 1, 60};
		soundGroundSoft5[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_05.ogg", 10, 1, 60};
		soundGroundSoft6[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_06.ogg", 10, 1, 60};
		soundGroundSoft7[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_07.ogg", 10, 1, 60};
		soundGroundSoft8[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_08.ogg", 10, 1, 60};
		soundGroundSoft9[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_09.ogg", 10, 1, 60};
		soundGroundSoft10[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_10.ogg", 10, 1, 60};
		soundGroundSoft11[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_11.ogg", 10, 1, 60};
		soundGroundSoft12[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_12.ogg", 10, 1, 60};
		soundGroundSoft13[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_13.ogg", 10, 1, 60};
		soundGroundSoft14[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_14.ogg", 10, 1, 60};
		soundGroundSoft15[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_15.ogg", 10, 1, 60};
		soundGroundSoft16[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_16.ogg", 10, 1, 60};
		soundGroundSoft17[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_17.ogg", 10, 1, 60};
		soundGroundSoft18[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_18.ogg", 10, 1, 60};
		soundGroundSoft19[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_19.ogg", 10, 1, 60};
		soundGroundSoft20[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_20.ogg", 10, 1, 60};
		soundGroundSoft21[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_21.ogg", 10, 1, 60};
		soundGroundSoft22[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_22.ogg", 10, 1, 60};
		soundGroundSoft23[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_23.ogg", 10, 1, 60};
		soundGroundSoft24[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_24.ogg", 10, 1, 60};
		soundGroundSoft25[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_25.ogg", 10, 1, 60};
		soundGroundSoft26[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_26.ogg", 10, 1, 60};
		soundGroundSoft27[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_27.ogg", 10, 1, 60};
		soundGroundSoft28[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_28.ogg", 10, 1, 60};
		soundGroundSoft29[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_29.ogg", 10, 1, 60};
		soundGroundSoft30[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_stereo_30.ogg", 10, 1, 60};
		
		
		soundConcrete1[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_06.ogg", 10, 1, 60};
		soundConcrete2[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_07.ogg", 10, 1, 60};
		soundConcrete3[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_08.ogg", 10, 1, 60};
		soundConcrete4[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_09.ogg", 10, 1, 60};
		soundConcrete5[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_10.ogg", 10, 1, 60};
		soundConcrete6[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_11.ogg", 10, 1, 60};
		soundConcrete7[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_12.ogg", 10, 1, 60};
		soundConcrete8[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_13.ogg", 10, 1, 60};
		soundConcrete9[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_14.ogg", 10, 1, 60};
		soundConcrete10[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_15.ogg", 10, 1, 60};
		soundConcrete11[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_16.ogg", 10, 1, 60};
		soundConcrete12[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_17.ogg", 10, 1, 60};
		soundConcrete13[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_18.ogg", 10, 1, 60};
		soundConcrete14[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_19.ogg", 10, 1, 60};
		soundConcrete15[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_20.ogg", 10, 1, 60};
		soundConcrete16[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_21.ogg", 10, 1, 60};
		soundConcrete17[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_22.ogg", 10, 1, 60};
		soundConcrete18[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_23.ogg", 10, 1, 60};
		soundConcrete19[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_24.ogg", 10, 1, 60};
		soundConcrete20[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_25.ogg", 10, 1, 60};
		soundConcrete21[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_26.ogg", 10, 1, 60};
		soundConcrete22[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_27.ogg", 10, 1, 60};
		soundConcrete23[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_28.ogg", 10, 1, 60};
		soundConcrete24[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_29.ogg", 10, 1, 60};
		soundConcrete25[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_30.ogg", 10, 1, 60};
		soundConcrete26[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_31.ogg", 10, 1, 60};
		soundConcrete27[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_32.ogg", 10, 1, 60};
		soundConcrete28[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_33.ogg", 10, 1, 60};
		soundConcrete29[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_34.ogg", 10, 1, 60};
		soundConcrete30[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_35.ogg", 10, 1, 60};
		soundConcrete31[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_36.ogg", 10, 1, 60};
		soundConcrete32[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_37.ogg", 10, 1, 60};
		soundConcrete33[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_38.ogg", 10, 1, 60};
		soundConcrete34[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_39.ogg", 10, 1, 60};
		soundConcrete35[] = {"\squad_expSounds\bullets\impacts\concrete\concrete_small_40.ogg", 10, 1, 60};
		
		soundHitFoliage1[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_01.ogg", 10, 1, 60};
		soundHitFoliage2[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_02.ogg", 10, 1, 60};
		soundHitFoliage3[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_03.ogg", 10, 1, 60};
		soundHitFoliage4[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_04.ogg", 10, 1, 60};
		soundHitFoliage5[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_05.ogg", 10, 1, 60};
		soundHitFoliage6[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_06.ogg", 10, 1, 60};
		soundHitFoliage7[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_07.ogg", 10, 1, 60};
		soundHitFoliage8[] = {"\squad_expSounds\bullets\impacts\bush\foliage_bush_08.ogg", 10, 1, 60};
		
		soundWood1[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_01.ogg", 10, 1, 60};
		soundWood2[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_02.ogg", 10, 1, 60};
		soundWood3[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_03.ogg", 10, 1, 60};
		soundWood4[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_04.ogg", 10, 1, 60};
		soundWood5[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_05.ogg", 10, 1, 60};
		soundWood6[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_06.ogg", 10, 1, 60};
		soundWood7[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_07.ogg", 10, 1, 60};
		soundWood8[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_08.ogg", 10, 1, 60};
		soundWood9[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_09.ogg", 10, 1, 60};
		soundWood10[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_10.ogg", 10, 1, 60};
		soundWood11[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_11.ogg", 10, 1, 60};
		soundWood12[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_12.ogg", 10, 1, 60};
		soundWood13[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_13.ogg", 10, 1, 60};
		soundWood14[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_14.ogg", 10, 1, 60};
		soundWood15[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_15.ogg", 10, 1, 60};
		soundWood16[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_16.ogg", 10, 1, 60};
		
		
		soundGlass1[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_01.ogg", 10, 1, 60};
		soundGlass2[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_02.ogg", 10, 1, 60};
		soundGlass3[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_03.ogg", 10, 1, 60};
		soundGlass4[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_04.ogg", 10, 1, 60};
		soundGlass5[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_05.ogg", 10, 1, 60};
		soundGlass6[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_06.ogg", 10, 1, 60};
		soundGlass7[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_07.ogg", 10, 1, 60};
		soundGlass8[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_08.ogg", 10, 1, 60};
		soundGlass9[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_09.ogg", 10, 1, 60};
		soundGlass10[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_10.ogg", 10, 1, 60};
		soundGlass11[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_11.ogg", 10, 1, 60};
		soundGlass12[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_12.ogg", 10, 1, 60};
		soundGlass13[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_13.ogg", 10, 1, 60};
		soundGlass14[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_14.ogg", 10, 1, 60};
		soundGlass15[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_15.ogg", 10, 1, 60};
		soundGlass16[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_16.ogg", 10, 1, 60};
		
		
		soundGlassArmored1[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_01.ogg", 10, 1, 60};
		soundGlassArmored2[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_02.ogg", 10, 1, 60};
		soundGlassArmored3[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_03.ogg", 10, 1, 60};
		soundGlassArmored4[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_04.ogg", 10, 1, 60};
		soundGlassArmored5[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_05.ogg", 10, 1, 60};
		soundGlassArmored6[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_06.ogg", 10, 1, 60};
		soundGlassArmored7[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_07.ogg", 10, 1, 60};
		soundGlassArmored8[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_08.ogg", 10, 1, 60};
		soundGlassArmored9[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_09.ogg", 10, 1, 60};
		soundGlassArmored10[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_10.ogg", 10, 1, 60};
		soundGlassArmored11[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_11.ogg", 10, 1, 60};
		soundGlassArmored12[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_12.ogg", 10, 1, 60};
		soundGlassArmored13[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_13.ogg", 10, 1, 60};
		
		
		soundrubber1[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_01.ogg", 10, 1, 60};
		soundrubber2[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_02.ogg", 10, 1, 60};
		soundrubber3[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_03.ogg", 10, 1, 60};
		soundrubber4[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_04.ogg", 10, 1, 60};
		soundrubber5[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_05.ogg", 10, 1, 60};
		soundrubber6[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_06.ogg", 10, 1, 60};
		soundrubber7[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_07.ogg", 10, 1, 60};
		soundrubber8[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_08.ogg", 10, 1, 60};
		soundrubber9[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_09.ogg", 10, 1, 60};
		soundrubber10[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_10.ogg", 10, 1, 60};
		soundrubber11[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_11.ogg", 10, 1, 60};
		soundrubber12[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_12.ogg", 10, 1, 60};
		
		
		soundplastic1[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_01.ogg", 10, 1, 60};
		soundplastic2[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_02.ogg", 10, 1, 60};
		soundplastic3[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_03.ogg", 10, 1, 60};
		soundplastic4[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_04.ogg", 10, 1, 60};
		soundplastic5[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_05.ogg", 10, 1, 60};
		soundplastic6[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_06.ogg", 10, 1, 60};
		soundplastic7[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_07.ogg", 10, 1, 60};
		soundplastic8[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_08.ogg", 10, 1, 60};
		soundplastic9[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_09.ogg", 10, 1, 60};
		soundplastic10[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_10.ogg", 10, 1, 60};
		soundplastic11[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_11.ogg", 10, 1, 60};
		soundplastic12[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_12.ogg", 10, 1, 60};
		soundplastic13[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_13.ogg", 10, 1, 60};
		
		
		soundfabric1[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_01.ogg", 10, 1, 60};
		soundfabric2[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_02.ogg", 10, 1, 60};
		soundfabric3[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_03ogg", 10, 1, 60};
		soundfabric4[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_04.ogg", 10, 1, 60};
		soundfabric5[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_05.ogg", 10, 1, 60};
		soundfabric6[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_06.ogg", 10, 1, 60};
		soundfabric7[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_07.ogg", 10, 1, 60};
		soundfabric8[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_08.ogg", 10, 1, 60};
		soundfabric9[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_09.ogg", 10, 1, 60};
		soundfabric10[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_10.ogg", 10, 1, 60};
		soundfabric11[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_11.ogg", 10, 1, 60};
		soundfabric12[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_12.ogg", 10 1, 60};
		
		
		
		soundWater1[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_01.ogg", 10, 1, 60};
		soundWater2[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_02.ogg", 10, 1, 60};
		soundWater3[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_03.ogg", 10, 1, 60};
		soundWater4[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_04.ogg", 10, 1, 60};
		soundWater5[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_05.ogg", 10, 1, 60};
		soundWater6[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_06.ogg", 10, 1, 60};
		soundWater7[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_07.ogg", 10, 1, 60};
		soundWater8[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_08.ogg", 10, 1, 60};
		soundWater9[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_09.ogg", 10, 1, 60};
		soundWater10[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_10.ogg", 10, 1, 60};
		soundWater11[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_11.ogg", 10, 1, 60};
		soundWater12[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_new_12.ogg", 10, 1, 60};
		
		
		bulletFly[] = {"bulletFly1",0.6, "bulletFly2",0.6, 
		               "bulletFly3",0.6, "bulletFly4",0.6, 
					   "bulletFly5",0.6, "bulletFly6",0.6, 
					   "bulletFly7",0.6, "bulletFly8",0.6, 
					   "bulletFly9",0.6, "bulletFly10",0.6, 
					   "bulletFly11",0.6,"bulletFly12",0.6, 
					   "bulletFly13",0.6, "bulletFly14",0.6, 
					   "bulletFly15",0.6, "bulletFly16",0.6};
					   
class SuperSonicCrack {};
	};
	class SPE_B_762x63_Ball;
	class SPE_B_762x63_Ball_NoCartridge: SPE_B_762x63_Ball{
		soundSetBulletFly[] = {};		
		soundSetSonicCrack[] = {"Squad_Bullet50CalSonicCrack_Sets"};		

		bulletFly1[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_01.ogg", 1, 1, 30};
		bulletFly2[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_02.ogg", 1, 1, 30};
		bulletFly3[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_03.ogg", 1, 1, 30};
		bulletFly4[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_04.ogg", 1, 1, 30};
		bulletFly5[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_05.ogg", 1, 1, 30};
		bulletFly6[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_06.ogg", 1, 1, 30};
		bulletFly7[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_07.ogg", 1, 1, 30};
		bulletFly8[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_08.ogg", 1, 1, 30};
		bulletFly9[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_09.ogg", 1, 1, 30};
		bulletFly10[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_10.ogg", 1, 1, 30};
		bulletFly11[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_11.ogg", 1, 1, 30};
		bulletFly12[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_12.ogg", 1, 1, 30};
		bulletFly13[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_13.ogg", 1, 1, 30};
		bulletFly14[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_14.ogg", 1, 1, 30};
		bulletFly15[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_15.ogg", 1, 1, 30};
		bulletFly16[] = {"\squad_expSounds\bullets\sounds\crack_50cal_mid_new_16.ogg", 1, 1, 30};
		
		
		soundMetal1[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_01.ogg", 4, 1, 60};
		soundMetal2[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_02.ogg", 4, 1, 60};
		soundMetal3[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_03.ogg", 4, 1, 60};
		soundMetal4[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_04.ogg", 4, 1, 60};
		soundMetal5[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_05.ogg", 4, 1, 60};
		soundMetal6[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_06.ogg", 4, 1, 60};
		soundMetal7[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_07.ogg", 4, 1, 60};
		soundMetal8[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_08.ogg", 4, 1, 60};
		soundMetal9[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_09.ogg", 4, 1, 60};
		soundMetal10[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_10.ogg", 4, 1, 60};
		soundMetal11[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_11.ogg", 4, 1, 60};
		soundMetal12[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_12.ogg", 4, 1, 60};
		soundMetal13[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_13.ogg", 4, 1, 60};
		soundMetal14[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_14.ogg", 4, 1, 60};
		soundMetal15[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_15.ogg", 4, 1, 60};
		soundMetal16[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_16.ogg", 4, 1, 60};
		soundMetal17[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_17.ogg", 4, 1, 60};
		soundMetal18[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_18.ogg", 4, 1, 60};
		soundMetal19[] = {"\squad_expSounds\bullets\impacts\metal\bhit_car_50cal_close_19.ogg", 4, 1, 60};
		
		
		
		soundHitBody1[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_01.ogg", 4, 1, 20};
		soundHitBody2[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_02.ogg", 4, 1, 20};
		soundHitBody3[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_03.ogg", 4, 1, 20};
		soundHitBody4[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_04.ogg", 4, 1, 20};
		soundHitBody5[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_05.ogg", 4, 1, 20};
		soundHitBody6[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_06.ogg", 4, 1, 20};
		soundHitBody7[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_07.ogg", 4, 1, 20};
		soundHitBody8[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_08.ogg", 4, 1, 20};
		soundHitBody9[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_09.ogg", 4, 1, 20};
		soundHitBody10[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_10.ogg", 4, 1, 20};
		soundHitBody11[] = {"\squad_expSounds\bullets\impacts\flesh\1P_hit1_11.ogg", 4, 1, 20};
		
		
		soundGroundSoft1[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_01.ogg", 10, 1, 60};
		soundGroundSoft2[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_02.ogg", 10, 1, 60};
		soundGroundSoft3[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_03.ogg", 10, 1, 60};
		soundGroundSoft4[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_04.ogg", 10, 1, 60};
		soundGroundSoft5[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_05.ogg", 10, 1, 60};
		soundGroundSoft6[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_06.ogg", 10, 1, 60};
		soundGroundSoft7[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_07.ogg", 10, 1, 60};
		soundGroundSoft8[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_08.ogg", 10, 1, 60};
		soundGroundSoft9[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_09.ogg", 10, 1, 60};
		soundGroundSoft10[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_10.ogg", 10, 1, 60};
		soundGroundSoft11[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_11.ogg", 10, 1, 60};
		soundGroundSoft12[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_12.ogg", 10, 1, 60};
		soundGroundSoft13[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_13.ogg", 10, 1, 60};
		soundGroundSoft14[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_14.ogg", 10, 1, 60};
		soundGroundSoft15[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_15.ogg", 10, 1, 60};
		soundGroundSoft16[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_16.ogg", 10, 1, 60};
		soundGroundSoft17[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_17.ogg", 10, 1, 60};
		soundGroundSoft18[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_18.ogg", 10, 1, 60};
		soundGroundSoft19[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_19.ogg", 10, 1, 60};
		soundGroundSoft20[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_20.ogg", 10, 1, 60};
		soundGroundSoft21[] = {"\squad_expSounds\bullets\impacts\ground\Bhit_dirt_50cal_21.ogg", 10, 1, 60};
		
		
		soundConcrete1[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_01.ogg", 10, 1, 60};
		soundConcrete2[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_02.ogg", 10, 1, 60};
		soundConcrete3[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_03.ogg", 10, 1, 60};
		soundConcrete4[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_04.ogg", 10, 1, 60};
		soundConcrete5[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_05.ogg", 10, 1, 60};
		soundConcrete6[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_06.ogg", 10, 1, 60};
		soundConcrete7[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_07.ogg", 10, 1, 60};
		soundConcrete8[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_08.ogg", 10, 1, 60};
		soundConcrete9[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_09.ogg", 10, 1, 60};
		soundConcrete10[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_10.ogg", 10, 1, 60};
		soundConcrete11[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_11.ogg", 10, 1, 60};
		soundConcrete12[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_12.ogg", 10, 1, 60};
		soundConcrete13[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_13.ogg", 10, 1, 60};
		soundConcrete14[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_14.ogg", 10, 1, 60};
		soundConcrete15[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_15.ogg", 10, 1, 60};
		soundConcrete16[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_16.ogg", 10, 1, 60};
		soundConcrete17[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_17.ogg", 10, 1, 60};
		soundConcrete18[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_18.ogg", 10, 1, 60};
		soundConcrete19[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_19.ogg", 10, 1, 60};
		soundConcrete20[] = {"\squad_expSounds\bullets\impacts\concrete\bhit_50cal_concrete_20.ogg", 10, 1, 60};
		
		
		soundWood1[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_01.ogg", 10, 1, 60};
		soundWood2[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_02.ogg", 10, 1, 60};
		soundWood3[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_03.ogg", 10, 1, 60};
		soundWood4[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_04.ogg", 10, 1, 60};
		soundWood5[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_05.ogg", 10, 1, 60};
		soundWood6[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_06.ogg", 10, 1, 60};
		soundWood7[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_07.ogg", 10, 1, 60};
		soundWood8[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_08.ogg", 10, 1, 60};
		soundWood9[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_09.ogg", 10, 1, 60};
		soundWood10[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_10.ogg", 10, 1, 60};
		soundWood11[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_11.ogg", 10, 1, 60};
		soundWood12[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_12.ogg", 10, 1, 60};
		soundWood13[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_13.ogg", 10, 1, 60};
		soundWood14[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_14.ogg", 10, 1, 60};
		soundWood15[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_15.ogg", 10, 1, 60};
		soundWood16[] = {"\squad_expSounds\bullets\impacts\wood\bhit_small_wood_16.ogg", 10, 1, 60};
		
		
		soundGlass1[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_01.ogg", 10, 1, 60};
		soundGlass2[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_02.ogg", 10, 1, 60};
		soundGlass3[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_03.ogg", 10, 1, 60};
		soundGlass4[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_04.ogg", 10, 1, 60};
		soundGlass5[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_05.ogg", 10, 1, 60};
		soundGlass6[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_06.ogg", 10, 1, 60};
		soundGlass7[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_07.ogg", 10, 1, 60};
		soundGlass8[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_08.ogg", 10, 1, 60};
		soundGlass9[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_09.ogg", 10, 1, 60};
		soundGlass10[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_10.ogg", 10, 1, 60};
		soundGlass11[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_11.ogg", 10, 1, 60};
		soundGlass12[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_12.ogg", 10, 1, 60};
		soundGlass13[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_13.ogg", 10, 1, 60};
		soundGlass14[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_14.ogg", 10, 1, 60};
		soundGlass15[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_15.ogg", 10, 1, 60};
		soundGlass16[] = {"\squad_expSounds\bullets\impacts\glass\glass_window_impact_small_16.ogg", 10, 1, 60};
		
		
		soundGlassArmored1[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_01.ogg", 10, 1, 60};
		soundGlassArmored2[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_02.ogg", 10, 1, 60};
		soundGlassArmored3[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_03.ogg", 10, 1, 60};
		soundGlassArmored4[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_04.ogg", 10, 1, 60};
		soundGlassArmored5[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_05.ogg", 10, 1, 60};
		soundGlassArmored6[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_06.ogg", 10, 1, 60};
		soundGlassArmored7[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_07.ogg", 10, 1, 60};
		soundGlassArmored8[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_08.ogg", 10, 1, 60};
		soundGlassArmored9[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_09.ogg", 10, 1, 60};
		soundGlassArmored10[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_10.ogg", 10, 1, 60};
		soundGlassArmored11[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_11.ogg", 10, 1, 60};
		soundGlassArmored12[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_12.ogg", 10, 1, 60};
		soundGlassArmored13[] = {"\squad_expSounds\bullets\impacts\glass\glass_windshield_impact_small_13.ogg", 10, 1, 60};
		
		
		soundrubber1[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_01.ogg", 10, 1, 60};
		soundrubber2[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_02.ogg", 10, 1, 60};
		soundrubber3[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_03.ogg", 10, 1, 60};
		soundrubber4[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_04.ogg", 10, 1, 60};
		soundrubber5[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_05.ogg", 10, 1, 60};
		soundrubber6[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_06.ogg", 10, 1, 60};
		soundrubber7[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_07.ogg", 10, 1, 60};
		soundrubber8[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_08.ogg", 10, 1, 60};
		soundrubber9[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_09.ogg", 10, 1, 60};
		soundrubber10[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_10.ogg", 10, 1, 60};
		soundrubber11[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_11.ogg", 10, 1, 60};
		soundrubber12[] = {"\squad_expSounds\bullets\impacts\rubber\Bhit_rubber_tire_12.ogg", 10, 1, 60};
		
		
		soundplastic1[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_01.ogg", 10, 1, 60};
		soundplastic2[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_02.ogg", 10, 1, 60};
		soundplastic3[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_03.ogg", 10, 1, 60};
		soundplastic4[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_04.ogg", 10, 1, 60};
		soundplastic5[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_05.ogg", 10, 1, 60};
		soundplastic6[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_06.ogg", 10, 1, 60};
		soundplastic7[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_07.ogg", 10, 1, 60};
		soundplastic8[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_08.ogg", 10, 1, 60};
		soundplastic9[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_09.ogg", 10, 1, 60};
		soundplastic10[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_10.ogg", 10, 1, 60};
		soundplastic11[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_11.ogg", 10, 1, 60};
		soundplastic12[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_12.ogg", 10, 1, 60};
		soundplastic13[] = {"\squad_expSounds\bullets\impacts\plastic\bhit_plastic_hollow_13.ogg", 10, 1, 60};
		
		
		soundfabric1[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_01.ogg", 10, 1, 60};
		soundfabric2[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_02.ogg", 10, 1, 60};
		soundfabric3[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_03ogg", 10, 1, 60};
		soundfabric4[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_04.ogg", 10, 1, 60};
		soundfabric5[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_05.ogg", 10, 1, 60};
		soundfabric6[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_06.ogg", 10, 1, 60};
		soundfabric7[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_07.ogg", 10, 1, 60};
		soundfabric8[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_08.ogg", 10, 1, 60};
		soundfabric9[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_09.ogg", 10, 1, 60};
		soundfabric10[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_10.ogg", 10, 1, 60};
		soundfabric11[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_11.ogg", 10, 1, 60};
		soundfabric12[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_12.ogg", 10 1, 60};
		
		
		
		soundWater1[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_01.ogg", 10, 1, 60};
		soundWater2[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_02.ogg", 10, 1, 60};
		soundWater3[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_03.ogg", 10, 1, 60};
		soundWater4[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_04.ogg", 10, 1, 60};
		soundWater5[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_05.ogg", 10, 1, 60};
		soundWater6[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_06.ogg", 10, 1, 60};
		soundWater7[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_07.ogg", 10, 1, 60};
		soundWater8[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_08.ogg", 10, 1, 60};
		soundWater9[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_09.ogg", 10, 1, 60};
		soundWater10[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_10.ogg", 10, 1, 60};
		soundWater11[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_11.ogg", 10, 1, 60};
		soundWater12[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_12.ogg", 10, 1, 60};
		soundWater13[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_13.ogg", 10, 1, 60};
		soundWater14[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_14.ogg", 10, 1, 60};
		soundWater15[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_15.ogg", 10, 1, 60};
		soundWater16[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_16.ogg", 10, 1, 60};
		soundWater17[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_17.ogg", 10, 1, 60};
		soundWater18[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_18.ogg", 10, 1, 60};
		soundWater19[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_19.ogg", 10, 1, 60};
		soundWater20[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_20.ogg", 10, 1, 60};
		soundWater21[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_21.ogg", 10, 1, 60};
		soundWater22[] = {"\squad_expSounds\bullets\impacts\water\bhit_water_50cal_22.ogg", 10, 1, 60};
		
		
		
		bulletFly[] = {"bulletFly1",0.6, "bulletFly2",0.6, 
		               "bulletFly3",0.6, "bulletFly4",0.6, 
					   "bulletFly5",0.6, "bulletFly6",0.6, 
					   "bulletFly7",0.6, "bulletFly8",0.6, 
					   "bulletFly9",0.6, "bulletFly10",0.6, 
					   "bulletFly11",0.6,"bulletFly12",0.6, 
					   "bulletFly13",0.6, "bulletFly14",0.6, 
					   "bulletFly15",0.6, "bulletFly16",0.6};

        hitArmorInt[] = {"soundmetal1", 0.02, "soundmetal2", 0.02, "soundmetal3", 0.02, "soundmetal4", 0.02, "soundmetal5", 0.02, "soundmetal6", 0.02, "soundmetal7", 0.02, "soundmetal8", 0.02, "soundmetal9", 0.02, "soundmetal10", 0.02, "soundmetal11", 0.02, "soundmetal12", 0.02, "soundmetal13", 0.02, "soundmetal14", 0.02, "soundmetal15", 0.02, "soundmetal16", 0.02, "soundmetal17", 0.02, "soundmetal18", 0.02, "soundmetal19", 0.02};
		hitMetalInt[] = {"soundmetal1", 0.02, "soundmetal2", 0.02, "soundmetal3", 0.02, "soundmetal4", 0.02, "soundmetal5", 0.02, "soundmetal6", 0.02, "soundmetal7", 0.02, "soundmetal8", 0.02, "soundmetal9", 0.02, "soundmetal10", 0.02, "soundmetal11", 0.02, "soundmetal12", 0.02, "soundmetal13", 0.02, "soundmetal14", 0.02, "soundmetal15", 0.02, "soundmetal16", 0.02, "soundmetal17", 0.02, "soundmetal18", 0.02, "soundmetal19", 0.02};
		hitMan[] = {"soundHitBody1", 0.05, "soundHitBody2", 0.05, "soundHitBody3", 0.05, "soundHitBody4", 0.05, "soundHitBody5", 0.05, "soundHitBody6", 0.05, "soundHitBody7", 0.05, "soundHitBody8", 0.05, "soundHitBody9", 0.05, "soundHitBody10", 0.05, "soundHitBody11", 0.05};		 		hitGroundSoft[] = {"soundGroundSoft1", 0.02, "soundGroundSoft2", 0.02, "soundGroundSoft3", 0.02, "soundGroundSoft4", 0.02, "soundGroundSoft5", 0.02, "soundGroundSoft6", 0.02, "soundGroundSoft7", 0.02, "soundGroundSoft8", 0.02, "soundGroundSoft9", 0.02, "soundGroundSoft10", 0.02, "soundGroundSoft11", 0.02, "soundGroundSoft12", 0.02, "soundGroundSoft13", 0.02, "soundGroundSoft14", 0.02, "soundGroundSoft15", 0.02, "soundGroundSoft16", 0.02, "soundGroundSoft17", 0.02, "soundGroundSoft18", 0.02, "soundGroundSoft19", 0.02, "soundGroundSoft20", 0.02, "soundGroundSoft21", 0.02}; 		
		hitGroundHard[] = {"soundGroundSoft1", 0.2, "soundGroundSoft2", 0.2, "soundGroundSoft3", 0.2, "soundGroundSoft4", 0.2, "soundGroundSoft5", 0.2, "soundGroundSoft6", 0.2, "soundGroundSoft7", 0.2, "soundGroundSoft8", 0.2, "soundGroundSoft9", 0.2, "soundGroundSoft10", 0.2, "soundGroundSoft11", 0.2, "soundGroundSoft12", 0.2, "soundGroundSoft13", 0.2, "soundGroundSoft14", 0.2, "soundGroundSoft15", 0.2, "soundGroundSoft16", 0.2, "soundGroundSoft17", 0.2, "soundGroundSoft18", 0.2, "soundGroundSoft19", 0.2, "soundGroundSoft20", 0.2, "soundGroundSoft21", 0.2}; 		
		hitArmor[] = {"soundmetal1", 0.02, "soundmetal2", 0.02, "soundmetal3", 0.02, "soundmetal4", 0.02, "soundmetal5", 0.02, "soundmetal6", 0.02, "soundmetal7", 0.02, "soundmetal8", 0.02, "soundmetal9", 0.02, "soundmetal10", 0.02, "soundmetal11", 0.02, "soundmetal12", 0.02, "soundmetal13", 0.02, "soundmetal14", 0.02, "soundmetal15", 0.02, "soundmetal16", 0.02, "soundmetal17", 0.02, "soundmetal18", 0.02, "soundmetal19", 0.02};
		hitIron[] = {"soundmetal1", 0.02, "soundmetal2", 0.02, "soundmetal3", 0.02, "soundmetal4", 0.02, "soundmetal5", 0.02, "soundmetal6", 0.02, "soundmetal7", 0.02, "soundmetal8", 0.02, "soundmetal9", 0.02, "soundmetal10", 0.02, "soundmetal11", 0.02, "soundmetal12", 0.02, "soundmetal13", 0.02, "soundmetal14", 0.02, "soundmetal15", 0.02, "soundmetal16", 0.02, "soundmetal17", 0.02, "soundmetal18", 0.02, "soundmetal19", 0.02};
		hitBuilding[] = {"soundConcrete1", 0.02, "soundConcrete2", 0.02, "soundConcrete3", 0.02, "soundConcrete4", 0.02, "soundConcrete5", 0.02, "soundConcrete6", 0.02, "soundConcrete7", 0.02, "soundConcrete8", 0.02, "soundConcrete9", 0.02, "soundConcrete10", 0.02, "soundConcrete11", 0.02, "soundConcrete12", 0.02, "soundConcrete13", 0.02, "soundConcrete14", 0.02, "soundConcrete15", 0.02, "soundConcrete16", 0.02, "soundConcrete17", 0.02, "soundConcrete18", 0.02, "soundConcrete19", 0.02, "soundConcrete20", 0.02}; 		
		hitFoliage[] = {"soundHitFoliage1", 0.125, "soundHitFoliage2", 0.125, "soundHitFoliage3", 0.125, "soundHitFoliage4", 0.125, "soundHitFoliage5", 0.125, "soundHitFoliage6", 0.125, "soundHitFoliage7", 0.125, "soundHitFoliage8", 0.125};
		hitWood[] = { "soundWood1", 0.2, "soundWood2", 0.2, "soundWood3", 0.2, "soundWood4", 0.2, "soundWood5", 0.2, "soundWood6", 0.2, "soundWood7", 0.2, "soundWood8", 0.2, "soundWood9", 0.2, "soundWood10", 0.2, "soundWood11", 0.2, "soundWood12", 0.2, "soundWood13", 0.2, "soundWood14", 0.2, "soundWood15", 0.2, "soundWood16", 0.2};
		hitGlass[] = {"soundGlass1",0.0625, "soundGlass2",0.0625, "soundGlass3",0.0625, "soundGlass4",0.0625, "soundGlass5",0.0625, "soundGlass6",0.0625, "soundGlass7",0.0625, "soundGlass8",0.0625, "soundGlass9",0.0625, "soundGlass10",0.0625, "soundGlass11",0.0625, "soundGlass12",0.0625, "soundGlass13",0.0625, "soundGlass14",0.0625, "soundGlass15",0.0625, "soundGlass16",0.0625};			 		
		hitGlassArmored[] = {"soundGlassArmored1",0.025, "soundGlassArmored2",0.025, "soundGlassArmored3",0.025, "soundGlassArmored4",0.025, "soundGlassArmored5",0.025, "soundGlassArmored6",0.025, "soundGlassArmored7",0.025, "soundGlassArmored8",0.025, "soundGlassArmored9",0.025, "soundGlassArmored10",0.025, "soundGlassArmored11",0.025, "soundGlassArmored12",0.025, "soundGlassArmored13",0.025};			 		
		hitConcrete[] = {"soundConcrete1", 0.02, "soundConcrete2", 0.02, "soundConcrete3", 0.02, "soundConcrete4", 0.02, "soundConcrete5", 0.02, "soundConcrete6", 0.02, "soundConcrete7", 0.02, "soundConcrete8", 0.02, "soundConcrete9", 0.02, "soundConcrete10", 0.02, "soundConcrete11", 0.02, "soundConcrete12", 0.02, "soundConcrete13", 0.02, "soundConcrete14", 0.02, "soundConcrete15", 0.02, "soundConcrete16", 0.02, "soundConcrete17", 0.02, "soundConcrete18", 0.02, "soundConcrete19", 0.02, "soundConcrete20", 0.02}; 		
		hitRubber[] = {"soundRubber1", 0.0833333333333333, "soundRubber2", 0.0833333333333333, "soundRubber3", 0.0833333333333333, "soundRubber4", 0.0833333333333333, "soundRubber5", 0.0833333333333333, "soundRubber6", 0.0833333333333333, "soundRubber7", 0.0833333333333333, "soundRubber8", 0.0833333333333333, "soundRubber9", 0.0833333333333333, "soundRubber10", 0.0833333333333333, "soundRubber11", 0.0833333333333333, "soundRubber12", 0.0833333333333333};
		hitplastic[] = {"soundplastic1", 0.125, "soundplastic2", 0.125, "soundplastic3", 0.125, "soundplastic4", 0.125, "soundplastic5", 0.125, "soundplastic6", 0.125, "soundplastic7", 0.125, "soundplastic8", 0.125};
		hitDefault[] = {"soundfabric1", 0.08333333333333333333333333333333, "soundfabric2", 0.08333333333333333333333333333333, "soundfabric3", 0.08333333333333333333333333333333, "soundfabric4", 0.08333333333333333333333333333333, "soundfabric5", 0.08333333333333333333333333333333, "soundfabric6", 0.08333333333333333333333333333333, "soundfabric7", 0.08333333333333333333333333333333, "soundfabric8", 0.08333333333333333333333333333333, "soundfabric9", 0.08333333333333333333333333333333, "soundfabric10", 0.08333333333333333333333333333333, "soundfabric11", 0.08333333333333333333333333333333, "soundfabric12", 0.08333333333333333333333333333333};
		hitMetal[] = {"soundmetal1", 0.02, "soundmetal2", 0.02, "soundmetal3", 0.02, "soundmetal4", 0.02, "soundmetal5", 0.02, "soundmetal6", 0.02, "soundmetal7", 0.02, "soundmetal8", 0.02, "soundmetal9", 0.02, "soundmetal10", 0.02, "soundmetal11", 0.02, "soundmetal12", 0.02, "soundmetal13", 0.02, "soundmetal14", 0.02, "soundmetal15", 0.02, "soundmetal16", 0.02, "soundmetal17", 0.02, "soundmetal18", 0.02, "soundmetal19", 0.02};
		hitMetalplate[] = {"soundmetal1", 0.02, "soundmetal2", 0.02, "soundmetal3", 0.02, "soundmetal4", 0.02, "soundmetal5", 0.02, "soundmetal6", 0.02, "soundmetal7", 0.02, "soundmetal8", 0.02, "soundmetal9", 0.02, "soundmetal10", 0.02, "soundmetal11", 0.02, "soundmetal12", 0.02, "soundmetal13", 0.02, "soundmetal14", 0.02, "soundmetal15", 0.02, "soundmetal16", 0.02, "soundmetal17", 0.02, "soundmetal18", 0.02, "soundmetal19", 0.02};
		hitWater[] = {"soundWater1", 0.125, "soundWater2", 0.125, "soundWater3", 0.125, "soundWater4", 0.125, "soundWater5", 0.125, "soundWater6", 0.125, "soundWater7", 0.125, "soundWater8", 0.125, "soundWater9", 0.125, "soundWater10", 0.125, "soundWater11", 0.125, "soundWater12", 0.125, "soundWater13", 0.125, "soundWater14", 0.125, "soundWater15", 0.125, "soundWater16", 0.125, "soundWater17", 0.125, "soundWater18", 0.125, "soundWater19", 0.125, "soundWater20", 0.125, "soundWater21", 0.125, "soundWater22", 0.125};
		class SuperSonicCrack {};
	};	
};
