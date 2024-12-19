class CfgPatches {
    class Hark_SPE_SUP_Impacts {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "Sig_soundsa3_COMPAT_CDLC_SPE"
            "PS44_AMZ_Impacts",
            "SIG_Soundsa3_SH44_config_impacts",
            "WW2_SPE_Assets_s_Weapons_Ammo_s",
            "WW2_SPE_Assets_s_Weapons_Explosions_s",
            "WW2_SPE_Assets_s_Weapons_Launchers_s",
            "WW2_SPE_Assets_s_Weapons_MachineGun_Heavy_s",
            "WW2_SPE_Assets_s_Weapons_MachineGun_Light_s",
            "WW2_SPE_Assets_s_Weapons_MachineGun_Sub_s",
            "WW2_SPE_Assets_s_Weapons_Misc_s",
            "WW2_SPE_Assets_s_Weapons_Pistols_s",
            "WW2_SPE_Assets_s_Weapons_Rifles_s",
            "WW2_SPE_Assets_s_Weapons_SniperRifles_s",
            "WW2_SPE_Assets_s_Weapons_Sounds_s",
            "WW2_SPE_Assets_c_Weapons_Ammoboxes_c",
            "WW2_SPE_Assets_c_Weapons_Backpacks_c",
            "WW2_SPE_Assets_c_Weapons_Effects_c",
            "WW2_SPE_Assets_c_Weapons_Misc_c",
            "WW2_SPE_Assets_c_Weapons_Recoil_c",
            "WW2_SPE_Assets_c_Weapons_SoundsFeedback_c",
            "WW2_SPE_Assets_c_Weapons_WeaponHandling_c",
            "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
            "WW2_SPE_Assets_c_Weapons_Mines_c",
            "WW2_SPE_Assets_c_Weapons_Misc_c_Arsenal",
            "WW2_SPE_Assets_c_Weapons_Misc_c_TaskForceRadioItems_Compatibility",
            "WW2_SPE_Assets_c_Weapons_SimpleObjects_c",
            "WW2_SPE_Assets_c_Weapons_AmmoParameters_c",
            "WW2_SPE_Assets_c_Weapons_Misc_c_AdvancedCombatRadioEnvironment2RadioItems_Compatibility",
            "WW2_SPE_Assets_c_Weapons_ZZZ_LastLoaded_c",
            "WW2_SPE_Assets_c_Weapons_Sounds_c"
        };
        author = "amzingdogeyyy";
    };
};

class CfgAmmo {
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

    class SPE_FuelExplosionBig: FuelExplosionBig {
        SoundSetExplosion[] = {
            "Squad_IED_Explosions_Set",
            "Squad_IED_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_GrenadeHand_base: GrenadeHand {
        SoundSetExplosion[] = {
            "Squad_Grenades_Explosions_Set",
            "Squad_Grenades_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_Rocket_base: RocketBase {
        SoundSetExplosion[] = {
            "Squad_Launcher_Explosions_Set",
            "Squad_Launcher_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SmallSecondary: HelicopterExploSmall {
        SoundSetExplosion[] = {"Sig_SmallSecondary_Exp_SoundSet","Sig_Refl_Expl_small_SoundSet"};
    };

    class SPE_Grenade_base: GrenadeBase {
        SoundSetExplosion[] = {
            "Squad_Grenades_Explosions_Set",
            "Squad_Grenades_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_MAIN_pipebomb: PipeBombBase {
        SoundSetExplosion[] = {
            "Squad_IED_Explosions_Set",
            "Squad_IED_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_PzFaust_30m: SPE_Rocket_base {
        SoundSetExplosion[] = {
            "Squad_Launcher_Explosions_Set",
            "Squad_Launcher_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_60mm_M6: SPE_Rocket_base {
        SoundSetExplosion[] = {
            "Squad_Launcher_Explosions_Set",
            "Squad_Launcher_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_MAIN_mine: MineCore {
        SoundSetExplosion[] = {
            "Squad_Mines_Explosions_Set",
            "Squad_Mines_Explosions_2_Set",
            "Squad_Mines_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_Shell_base: ShellBase {
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_Bullet_AA_base: BulletBase {
        soundSetSonicCrack[] = {"Squad_HeavySonicCrack_Sets"};
        SoundSetExplosion[] = {
            "Squad_AutoCannon_Explosions_Set","Squad_AutoCannon_Explosions_2_Set",
            "Squad_AutoCannon_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_SprGr_FlaK_38: SPE_Bullet_AA_base {
        soundSetSonicCrack[] = {"Squad_HeavySonicCrack_Sets"};
        SoundSetExplosion[] = {
            "Squad_AutoCannon_Explosions_Set","Squad_AutoCannon_Explosions_2_Set",
            "Squad_AutoCannon_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_Bullet_AP_base: BulletBase {
        soundSetSonicCrack[] = {"Squad_HeavySonicCrack_Sets"};
        SoundSetExplosion[] = {
            "Squad_AutoCannon_Explosions_Set","Squad_AutoCannon_Explosions_2_Set",
            "Squad_AutoCannon_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_FlakExplosion: ShellBase {
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
    };

    class SPE_FlakExplosion2: SPE_FlakExplosion {
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
    };

    class SPE_ShellHEAT_base: ShellBase {
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
    };

    class SPE_S_105L28_Gr39HlC: SPE_ShellHEAT_base {
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
    };

    class SPE_HLGr38c_K51_HEAT: SPE_ShellHEAT_base {
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
    };

    class SPE_ShellHE_base: ShellBase {
        SoundSetExplosion[] = {
            "Squad_MEDEXP_Explosions_Set",
            "Squad_MEDEXP_Explosions_2_Set",
            "Squad_MEDEXP_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundSetSonicCrack[] = {"TankShellSonicCrack_SoundSet"};
    };

    class SPE_M101_M1_HE: SPE_ShellHE_base {
        SoundSetExplosion[] = {
            "Squad_Artillery_Explosions_Set",
            "Squad_Artillery_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\artillery\sounds\artillery_shell_incoming_far_loop_01.ogg", 0.5, 0.45, 1800};
    };

    class SPE_S_105L28_Gr38: SPE_ShellHE_base {
        SoundSetExplosion[] = {
            "Squad_Artillery_Explosions_Set",
            "Squad_Artillery_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\artillery\sounds\artillery_shell_incoming_far_loop_01.ogg", 0.5, 0.45, 1800};
    };

    class SPE_R_M8: RocketBase {
        soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
        SoundSetExplosion[] = {
            "Squad_Launcher_Explosions_Set",
            "Squad_Launcher_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_R_M8_A3: SubmunitionBase {
        soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
        SoundSetExplosion[] = {
            "Squad_Launcher_Explosions_Set",
            "Squad_Launcher_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_R_M8_fly: ShellBase {
        soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
        SoundSetExplosion[] = {
            "Squad_Launcher_Explosions_Set",
            "Squad_Launcher_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_R_280mm_WkSpr: SubmunitionBase {
        soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
        SoundSetExplosion[] = {
            "Squad_Bombs_Explosions_Set",
            "BombsHeavy_Tail_SoundSet",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_R_280mm_WkSpr_fly: ShellBase {
        soundFly[] = {"\squad_expSounds\incoming\tow\sounds\tow_projectile_start_01.ogg", 2.5, 0.73, 250};
        SoundSetExplosion[] = {
            "Squad_Bombs_Explosions_Set",
            "BombsHeavy_Tail_SoundSet",
            "Explosion_Debris_SoundSet"
        };
    };

    class SPE_Sh_82_HE: Sh_82mm_AMOS {
        SoundSetExplosion[] = {
            "Squad_Mortar_Explosions_Set",
            "Squad_Mortar_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
    };

    class ARTY_SPE_Sh_82_HE: SPE_Sh_82_HE {
        SoundSetExplosion[] = {
            "Squad_Mortar_Explosions_Set",
            "Squad_Mortar_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
    };

    class SPE_Sh_81_HE: SPE_Sh_82_HE {
        SoundSetExplosion[] = {
            "Squad_Mortar_Explosions_Set",
            "Squad_Mortar_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
    };

    class ARTY_SPE_Sh_81_HE: SPE_Sh_81_HE {
        SoundSetExplosion[] = {
            "Squad_Mortar_Explosions_Set",
            "Squad_Mortar_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
    };

    class SPE_Sh_M43A1_81_HE: SubmunitionBase {
        SoundSetExplosion[] = {
            "Squad_Mortar_Explosions_Set",
            "Squad_Mortar_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
    };

    class SPE_Sh_M43A1_81_HE_Submunition: ShellBase {
        SoundSetExplosion[] = {
            "Squad_Mortar_Explosions_Set",
            "Squad_Mortar_Tail_Explosions_Set",
            "Explosion_Debris_SoundSet"
        };
        soundFly[] = {"\squad_expSounds\incoming\mortar\sounds\mortar_shell_incoming_far_loop_01.ogg", 0.68, 0.73, 800};
    };
    class SPE_Bullet_base: BulletBase {
        soundSetBulletFly[] = {};
        soundSetSonicCrack[] = {"Squad_BulletSonicCrack_Sets"};
        bulletFly1[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_13.ogg", 1, 1, 40};
        bulletFly2[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_14.ogg", 1, 1, 40};
        bulletFly16[] = {"\squad_expSounds\bullets\sounds\crack_rifle_762_close_25.ogg", 1, 1, 40};
        soundfabric3[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_03.ogg", 10, 1, 60};
        soundfabric12[] = {"\squad_expSounds\bullets\impacts\fabric\bhit_fabric_12.ogg", 10, 1, 60};

        bulletFly[] = {
            "bulletFly1",0.6, "bulletFly2",0.6,
            "bulletFly3",0.6, "bulletFly4",0.6,
            "bulletFly5",0.6, "bulletFly6",0.6,
            "bulletFly7",0.6, "bulletFly8",0.6,
            "bulletFly9",0.6, "bulletFly10",0.6,
            "bulletFly11",0.6,"bulletFly12",0.6,
            "bulletFly13",0.6, "bulletFly14",0.6,
            "bulletFly15",0.6, "bulletFly16",0.6
        };

        class SuperSonicCrack {};
    };

    class SPE_B_762x63_Ball: BulletBase {
    };

    class SPE_B_762x63_Ball_NoCartridge: SPE_B_762x63_Ball {
        soundSetBulletFly[] = {};
        soundSetSonicCrack[] = {"Squad_Bullet50CalSonicCrack_Sets"};
        class SuperSonicCrack {};
    };
};

class CfgSoundSets {
    class TankShellSonicCrack_SoundSet {
        soundShaders[] = {"TankShellSonicCrack_SoundShader"};
        volumeFactor = 1;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponLightShot3DProcessingType";
    };
};

class CfgSoundShaders {
    class TankShellSonicCrack_SoundShader {
        samples[] = {
            {"\SIG_Sounds\Impact\incoming\inc_shell-11.ogg", 1},
            {"\SIG_Sounds\Impact\incoming\inc_shell-12.ogg", 1},
            {"\SIG_Sounds\Impact\incoming\inc_shell-13.ogg", 1},
            {"\SIG_Sounds\Impact\incoming\inc_shell-14.ogg", 1},
            {"\SIG_Sounds\Impact\incoming\inc_shell-15.ogg", 1},
            {"\SIG_Sounds\Impact\incoming\inc_shell-16.ogg", 1},
            {"\SIG_Sounds\Impact\incoming\inc_shell-17.ogg", 1},
            {"\squad_expSounds\shells\sounds\120mm_flyby_close_01.ogg", 1}
            {"\squad_expSounds\shells\sounds\120mm_flyby_close_03.ogg", 1}
            {"\squad_expSounds\shells\sounds\120mm_flyby_close_05.ogg", 1}
        };
        volume = 1.2;
        range = 125;
    };
};
