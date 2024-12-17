class CfgPatches {
	class Harks_SPE_Compat_SUP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"PS44_AMZ_Impacts","A3_Sounds_F","A3_Sounds_F_exp","A3_Weapons_F","A3_Weapons_f_exp","A3_Weapons_F_Enoch","Sig_soundsa3_COMPAT_CDLC_SPE","Sig_soundsa3_COMPAT_CDLC_SPE","squad_weapon_soundmod","Sig_Sounds","WW2_SPE_Assets_s_Weapons_Ammo_s", "WW2_SPE_Assets_s_Weapons_Explosions_s", "WW2_SPE_Assets_s_Weapons_Launchers_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s", "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s", "WW2_SPE_Assets_s_Weapons_Misc_s", "WW2_SPE_Assets_s_Weapons_Pistols_s", "WW2_SPE_Assets_s_Weapons_Rifles_s", "WW2_SPE_Assets_s_Weapons_SniperRifles_s", "WW2_SPE_Assets_s_Weapons_Sounds_s","WW2_SPE_Assets_c_Weapons_Ammoboxes_c", "WW2_SPE_Assets_c_Weapons_Backpacks_c", "WW2_SPE_Assets_c_Weapons_Effects_c", "WW2_SPE_Assets_c_Weapons_Misc_c", "WW2_SPE_Assets_c_Weapons_Recoil_c", "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c", "WW2_SPE_Assets_c_Weapons_WeaponHandling_c", "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c", "WW2_SPE_Assets_c_Weapons_Mines_c", "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal", "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_SimpleObjects_c", "WW2_SPE_Assets_c_Weapons_AmmoParameters_c", "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility", "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c", "WW2_SPE_Assets_c_Weapons_Sounds_c"};
		authors[] = {"Sigliskovich","Harkness31"};
	};
};
class CfgAmmo{
	class GrenadeBase;	
	class LIB_Grenade_base: GrenadeBase{
		SoundSetExplosion[] = {"Sig_expl_grenade_SoundSet", "Sig_Refl_Expl_small_SoundSet", "Explosion_Debris_SoundSet"};
	};
};