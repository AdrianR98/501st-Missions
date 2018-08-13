class Params
{
	class MissionOptions{
		title = $STR_PARAMS_MISSIONOPTIONS;
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class Preset{
		// paramsArray[0]
		title = "Players Faction (Blufor Vs Opfor)";
		values[]= {6,7,8,9};
		texts[]= {"Rebels Vs Empire", "Empire Vs Rebels", "Clones Vs C.I.S", "C.I.S Vs Clones"};
		default = 6;
	};
	class Zeus{
		title = "Allow Zeus";
		values[]= {1,2};
		texts[]= {"NO", "YES"};
		default = 1;
	};
	class Unitcap{
		title = $STR_PARAMS_UNITCAP;
		values[] = {0,1,2,3,4,5};
		texts[] = {$STR_PARAMS_UNITCAP1,$STR_PARAMS_UNITCAP2,$STR_PARAMS_UNITCAP3,$STR_PARAMS_UNITCAP4,$STR_PARAMS_UNITCAP5,$STR_PARAMS_UNITCAP6};
		default = 2;
	};
	class Difficulty {
		title = $STR_PARAMS_DIFFICULTY;
		values[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
		texts[] = { $STR_PARAMS_DIFFICULTY1, $STR_PARAMS_DIFFICULTY2, $STR_PARAMS_DIFFICULTY3, $STR_PARAMS_DIFFICULTY4, $STR_PARAMS_DIFFICULTY5, $STR_PARAMS_DIFFICULTY6, $STR_PARAMS_DIFFICULTY7, $STR_PARAMS_DIFFICULTY8 };
		default = 2;
	};
	class Aggressivity{
		title = $STR_AGGRESSIVITY_PARAM;
		values[] = {0,1,2,3,4};
		texts[] = {$STR_AGGRESSIVITY_PARAM0, $STR_AGGRESSIVITY_PARAM1,$STR_AGGRESSIVITY_PARAM2,$STR_AGGRESSIVITY_PARAM3,$STR_AGGRESSIVITY_PARAM4};
		default = 2;
	};
	class AdaptToPlayercount{
		title = $STR_PARAM_ADAPT_TO_PLAYERCOUNT;
		values[] = {1,0};
		texts[] = {$STR_PARAMS_ENABLED,$STR_PARAMS_DISABLED};
		default = 1;
	};
	class Civilians{
		title = $STR_PARAMS_CIVILIANS;
		values[] = {0,1,2,3};
		texts[] = {$STR_PARAMS_CIVILIANS1,$STR_PARAMS_CIVILIANS2,$STR_PARAMS_CIVILIANS3,$STR_PARAMS_CIVILIANS4};
		default = 2;
	};
	class FirstFob {
		title = $STR_PARAMS_FIRSTFOB;
		values[] = { 1, 0 };
		texts[] = { $STR_YES, $STR_NO };
		default = 0;
	};
	class MaximumFobs{
		title = $STR_PARAM_FOBS_COUNT;
		values[] = {3,5,7,10,15,20,26};
		texts[] = {3,5,7,10,15,20,26};
		default = 10;
	};
	class MaxSquadSize{
		title = $STR_PARAM_SQUAD_SIZE;
		values[] = {0,1,2,4,6,8,10,12,16,20,24,30,36};
		texts[] = {0,1,2,4,6,8,10,12,16,20,24,30,36};
		default = 12;
	};
	class BluforDefenders{
		title = $STR_PARAM_BLUFOR_DEFENDERS;
		values[] = {1,0};
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 1;
	};
	class Autodanger{
		title = $STR_PARAM_AUTODANGER;
		values[] = {1,0};
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 0;
	};
	class DayDuration {
		title = $STR_PARAMS_DAYDURATION;
		values[] = {48, 24, 16, 12, 8, 6, 4, 3, 2, 1};
		texts[] = {"0.5","1","1.5","2","3","4","6","8","12","24"};
		default = 6;
	};
	class ShorterNights {
		title = $STR_SHORTER_NIGHTS_PARAM;
		values[] = {1,0};
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 0;
	};
	class Weather {
		title = $STR_WEATHER_PARAM;
		values[] = { 1,2,3 };
		texts[] = { $STR_WEATHER_PARAM1, $STR_WEATHER_PARAM2, $STR_WEATHER_PARAM3 };
		default = 3;
	};
	class ResourcesMultiplier {
		title = $STR_PARAMS_RESOURCESMULTIPLIER;
		values[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
		texts[] = { "x0.25", "x0.5", "x0.75", "x1", "x1.25","x1.5","x2","x3" };
		default = 3;
	};
	class Spacer1 {
		title = "";
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class ReviveOptions{
		title = $STR_PARAMS_REVIVEOPTIONS;
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class ace_medical_level { //This needs to match an ace_setting, this one is a "SCALAR"(number)
        title = "ACE Medical Level"; // Name that is shown
        ACE_setting = 1; //Marks param to be read as an ace setting, without this nothing will happen!
        values[] = {1, 2}; //Values that ace_medical_level can be set to
        texts[] =  {"Basic", "Advanced"}; //Text names to show for values (Basic will set level to 1, Advanced will set level to 2)
        default = 2; //Default value used - Value should be in the values[] list
    };
    class ace_repair_addSpareParts { //This ia a "BOOL"
        title = "$STR_ACE_Repair_addSpareParts_name"; //You can use ACE's stringtables
        ACE_setting = 1;
        values[] = {0, 1}; //setting is a BOOL, but values still need to be numbers, so 0 is false, 1 is true
        texts[] =  {"False", "True"};
        default = 1;
    };
	class ReviveMode
	{
		title = $STR_A3_ReviveMode;
		isGlobal = 1;
		values[] = {-100,0,1};
		texts[] = {$STR_A3_MissionDefault, $STR_A3_Disabled, $STR_A3_EnabledForAllPlayers};
		default = 0;
		function = "bis_fnc_paramReviveMode";
	};
	class ReviveDuration
	{
		title = $STR_A3_ReviveDuration;
		isGlobal = 1;
		values[] = {-100,6,8,10,12,15,20,25,30};
		texts[] = {$STR_A3_MissionDefault,6,8,10,12,15,20,25,30};
		default = 6;
		function = "bis_fnc_paramReviveDuration";
	};
	class ReviveRequiredTrait
	{
		title = $STR_A3_RequiredTrait;
		isGlobal = 1;
		values[] = {-100,0,1};
		texts[] = {$STR_A3_MissionDefault,$STR_A3_None,$STR_A3_Medic};
		default = 1;
		function = "bis_fnc_paramReviveRequiredTrait";
	};
	class ReviveMedicSpeedMultiplier
	{
		title = $STR_A3_RequiredTrait_MedicSpeedMultiplier;
		isGlobal = 1;
		values[] = {-100,1,1.5,2,2.5,3};
		texts[] = {$STR_A3_MissionDefault,"1x","1.5x","2x","2.5x","3x"};
		default = 1;
		function = "bis_fnc_paramReviveMedicSpeedMultiplier";
	};
	class ReviveRequiredItems
	{
		title = $STR_A3_RequiredItems;
		isGlobal = 1;
		values[] = {-100,0,1,2};
		texts[] = {$STR_A3_MissionDefault,$STR_A3_None,$STR_A3_Medikit,$STR_A3_FirstAidKitOrMedikit};
		default = 1;
		function = "bis_fnc_paramReviveRequiredItems";
	};
	class UnconsciousStateMode
	{
		title = $STR_A3_IncapacitationMode;
		isGlobal = 1;
		values[] = {-100,0,1,2};
		texts[] = {$STR_A3_MissionDefault,$STR_A3_Basic,$STR_A3_Advanced,$STR_A3_Realistic};
		default = 0;
		function = "bis_fnc_paramReviveUnconsciousStateMode";
	};
	class ReviveBleedOutDuration
	{
		title = $STR_A3_BleedOutDuration;
		isGlobal = 1;
		values[] = {-100,10,15,20,30,45,60,90,180};
		texts[] = {$STR_A3_MissionDefault,10,15,20,30,45,60,90,180};
		default = 180;
		function = "bis_fnc_paramReviveBleedOutDuration";
	};
	class ReviveForceRespawnDuration
	{
		title = $STR_A3_ForceRespawnDuration;
		isGlobal = 1;
		values[] = {-100,3,4,5,6,7,8,9,10};
		texts[] = {$STR_A3_MissionDefault,3,4,5,6,7,8,9,10};
		default = 10;
		function = "bis_fnc_paramReviveForceRespawnDuration";
	};
	class Spacer2 {
		title = "";
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class GameplayOptions{
		title = $STR_PARAMS_GAMEPLAYOPTIONS;
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class Fatigue {
		title = $STR_PARAMS_FATIGUE;
		values[] = { 0, 1 };
		texts[] = { $STR_PARAMS_DISABLED, $STR_PARAMS_ENABLED };
		default = 1;
	};
	class ArsenalUsePreset {
		title = $STR_PARAMS_ARSENALUSEPRESET;
		values[] = { 0, 1 };
		texts[] = { $STR_PARAMS_NOTRESTRICTIONS, $STR_PARAMS_USEPRESET };
		default = 1;
	};
	class MapMarkers {
		title = $STR_PARAMS_MAPMARKERS;
		values[] = { 0, 1 };
		texts[] = { $STR_PARAMS_DISABLED, $STR_PARAMS_ENABLED };
		default = 1;
	};
	class MobileRespawn {
		title = $STR_PARAMS_MOBILERESPAWN;
		values[] = { 0, 1 };
		texts[] = { $STR_PARAMS_DISABLED, $STR_PARAMS_ENABLED };
		default = 1;
	};
	class MobileArsenal {
		title = $STR_PARAMS_MOBILEARSENAL;
		values[] = { 0, 1 };
		texts[] = { $STR_PARAMS_DISABLED, $STR_PARAMS_ENABLED };
		default = 1;
	};
	class AiLogistics {
		title = $STR_PARAMS_AILOGISTICS;
		values[] = {0, 1};
		texts[] = {$STR_PARAMS_DISABLED, $STR_PARAMS_ENABLED};
		default = 1;
	};
	class TeamkillPenalty{
		title = $STR_PARAM_TEAMKILL_PENALTY;
		values[] = {1,0};
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 0;
	};
	class HaloJump{
		title = $STR_HALO_PARAM;
		values[] = {1,5,10,15,20,30,0};
		texts[] = { $STR_HALO_PARAM1, $STR_HALO_PARAM2, $STR_HALO_PARAM3, $STR_HALO_PARAM4, $STR_HALO_PARAM5, $STR_HALO_PARAM6, $STR_PARAMS_DISABLED };
		default = 0;
	};
	class Spacer3 {
		title = "";
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class TechnicalOptions{
		title = $STR_PARAMS_TECHNICALOPTIONS;
		values[] = { "" };
		texts[] = { "" };
		default = "";
	};
	class Permissions{
		title = $STR_PERMISSIONS_PARAM;
		values[] = {1,0};
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 1;
	};
	class CleanupVehicles {
		title = $STR_CLEANUP_PARAM;
		values[] = { 0,1,2,4 };
		texts[] = { $STR_PARAMS_DISABLED, $STR_CLEANUP_PARAM1, $STR_CLEANUP_PARAM2, $STR_CLEANUP_PARAM3 };
		default = 2;
	};
	class Introduction {
		title = $STR_PARAMS_INTRO;
		values[] = { 1, 0 };
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 1;
	};
	class DeploymentCinematic {
		title = $STR_PARAMS_DEPLOYMENTCAMERA;
		values[] = { 1, 0 };
		texts[] = { $STR_PARAMS_ENABLED, $STR_PARAMS_DISABLED };
		default = 1;
	};
	class Whitelist {
		title = $STR_WHITELIST_PARAM;
		values[] = { 1, 0 };
		texts[] = { $STR_WHITELIST_ENABLED, $STR_PARAMS_DISABLED };
		default = 0;
	};
	class WipeSave1{
		title = $STR_WIPE_TITLE;
		values[] = {0,1};
		texts[] =  {$STR_WIPE_NO,$STR_WIPE_YES};
		default = 0;
	};
	class WipeSave2{
		title = $STR_WIPE_TITLE_2;
		values[] = {0,1};
		texts[] = {$STR_WIPE_NO,$STR_WIPE_YES};
		default = 0;
	};
};