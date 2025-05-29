#include "Fixes/CacheEditorIDs.h"

//Cache skipped formEditorIDs
namespace Fixes::CacheEditorIDs
{
	void Install()
	{
		HookEditorID<RE::BGSFormFolderKeywordList>(1);
		HookEditorID<RE::BGSTransform>(1);
		HookEditorID<RE::BGSTextureSet>(0);
		HookEditorID<RE::BGSDamageType>(1);
		HookEditorID<RE::TESClass>(5);
		HookEditorID<RE::TESFaction>(3);
		HookEditorID<RE::BGSAffinityEvent>(1);

		// empty
	    //HookEditorID<RE::TESEyes>(3);

		HookEditorID<RE::TESSound>(3);
		HookEditorID<RE::BGSSoundEcho>(1);
		HookEditorID<RE::BGSAcousticSpace>(0);
		HookEditorID<RE::BGSAudioOcclusionPrimitive>(0);
		HookEditorID<RE::EffectSetting>(3);
		HookEditorID<RE::BGSProjectedDecal>(0);
		HookEditorID<RE::EnchantmentItem>(0);
		HookEditorID<RE::SpellItem>(4);
		HookEditorID<RE::TESObjectACTI>(5);

		// nothing uses it?
		// HookEditorID<RE::BGSTalkingActivator>(11);

		HookEditorID<RE::BGSCurveForm>(0);
		HookEditorID<RE::BGSCurve3DForm>(1);
		HookEditorID<RE::TESObjectBOOK>(11);
		HookEditorID<RE::TESObjectCONT>(12);

		// loading skipped
	    // HookEditorID<RE::TESObjectDOOR>(6);

	    HookEditorID<RE::TESObjectLIGH>(10);
		HookEditorID<RE::TESObjectMISC>(11);
		HookEditorID<RE::TESObjectSTAT>(3);
		HookEditorID<RE::BGSStaticCollection>(2);
		HookEditorID<RE::BGSPackIn>(1);
		HookEditorID<RE::BGSMovableStatic>(4);
		HookEditorID<RE::TESGrass>(0);
		HookEditorID<RE::TESFlora>(7);
		HookEditorID<RE::TESFurniture>(9);
		HookEditorID<RE::TESAmmo>(0);
		HookEditorID<RE::TESNPC>(4);
		HookEditorID<RE::TESLevCharacter>(2);
		HookEditorID<RE::BGSLevPackIn>(0);
		HookEditorID<RE::TESKey>(0);
		HookEditorID<RE::AlchemyItem>(0);
		HookEditorID<RE::BGSIdleMarker>(4);
		HookEditorID<RE::BGSBiomeMarkerObject>(4);
		HookEditorID<RE::BGSProjectile>(0);
		HookEditorID<RE::BGSHazard>(1);
		HookEditorID<RE::BGSBendableSpline>(1);
		HookEditorID<RE::BGSTerminal>(7);
		HookEditorID<RE::TESLevItem>(0);
		HookEditorID<RE::BGSLevGenericBaseForm>(2);
		HookEditorID<RE::TESWeather>(2);
		HookEditorID<RE::BGSWeatherSettingsForm>(1);
		HookEditorID<RE::TESClimate>(1);
		HookEditorID<RE::BGSShaderParticleGeometryData>(1);
		HookEditorID<RE::TESRegion>(1);
		HookEditorID<RE::TESTopicInfo>(1);
		HookEditorID<RE::TESPackage>(0);
		HookEditorID<RE::TESCombatStyle>(0);
		HookEditorID<RE::TESLoadScreen>(1);
		HookEditorID<RE::TESWaterForm>(2);
		HookEditorID<RE::TESEffectShader>(1);
		HookEditorID<RE::BGSExplosion>(2);
		HookEditorID<RE::BGSDebris>(0);
		HookEditorID<RE::TESImageSpace>(2);
		HookEditorID<RE::BGSListForm>(1);
		HookEditorID<RE::BGSPerk>(2);
		HookEditorID<RE::BGSBodyPartData>(3);

		// loading skipped
		// HookEditorID<RE::BGSAddonNode>(1);

		// hangs credit menu
		// HookEditorID<RE::BGSCameraShot>(0);
		// HookEditorID<RE::BGSCameraPath>(1);

		HookEditorID<RE::BGSMaterialType>(0);
		HookEditorID<RE::BGSImpactData>(1);
		HookEditorID<RE::BGSImpactDataSet>(0);
		HookEditorID<RE::BGSMessage>(0);
		HookEditorID<RE::BGSLightingTemplate>(0);

		// loading skipped ?
		//HookEditorID<RE::BGSFootstep>(0);

		HookEditorID<RE::BGSFootstepSet>(0);

		// didn't RE 
		// HookEditorID<RE::BGSStoryManagerBranchNode>(0);
		// HookEditorID<RE::BGSStoryManagerQuestNode>(0);
		// HookEditorID<RE::BGSDialogueBranch>(0);
		// HookEditorID<RE::BGSMusicTrackFormWrapper>(0);

		HookEditorID<RE::BGSOutfit>(0);
		HookEditorID<RE::BGSArtObject>(1);
		HookEditorID<RE::BGSMovementType>(1);
		HookEditorID<RE::BGSCollisionLayer>(0);
		HookEditorID<RE::BGSColorForm>(0);
		HookEditorID<RE::BGSReverbParameters>(0);
		HookEditorID<RE::BGSAimModel>(0);
		HookEditorID<RE::BGSAimAssistModel>(0);
		HookEditorID<RE::BGSMeleeAimAssistModel>(0);
		HookEditorID<RE::BGSConstructibleObject>(6);
		HookEditorID<RE::BGSMod::Attachment::Mod>(0);
		HookEditorID<RE::BGSAimDownSightModel>(0);
		HookEditorID<RE::BGSInstanceNamingRules>(0);
		HookEditorID<RE::BGSSoundKeywordMapping>(0);
		HookEditorID<RE::BGSSoundTagSet>(1);
		HookEditorID<RE::BGSLensFlare>(0);
		HookEditorID<RE::BGSSnapTemplateNode>(1);
		HookEditorID<RE::BGSSnapTemplate>(0);
		HookEditorID<RE::BGSGroundCover>(1);
		HookEditorID<RE::BGSTraversal>(1);
		HookEditorID<RE::BGSResourceGenerationData>(1);
		HookEditorID<RE::BGSObjectSwap>(1);
		HookEditorID<RE::BGSAtmosphere>(0);

		// loading skipped
		// HookEditorID<RE::BGSLevSpaceCell>(2);

		HookEditorID<RE::BGSSpeechChallengeObject>(1);

		// loading skipped
		// HookEditorID<RE::BGSAimAssistPoseData>(0);

		HookEditorID<RE::BGSVolumetricLighting>(0);
		HookEditorID<RE::BGSSurface::Block>(0);
		HookEditorID<RE::BGSSurface::Pattern>(0);
		HookEditorID<RE::BGSSurface::Tree>(1);

		// didn't RE 
	    // HookEditorID<RE::BGSPlanetContentManagerTree>(0);

		// loading skipped
	    // HookEditorID<RE::BGSBoneModifier>(1);

		HookEditorID<RE::BGSSnapBehavior>(0);
		HookEditorID<RE::BGSPlanet::PlanetData>(1);
		HookEditorID<RE::BGSConditionForm>(0);

		// didn't RE 
		// HookEditorID<RE::BGSPlanetContentManagerBranchNode>(0);
		// HookEditorID<RE::BGSPlanetContentManagerContentNode>(0);

		HookEditorID<RE::BSGalaxy::BGSStar>(0);
		HookEditorID<RE::BGSResearchProjectForm>(3);
		HookEditorID<RE::BGSAimOpticalSightModel>(0);
		HookEditorID<RE::BGSAmbienceSet>(0);
		HookEditorID<RE::BGSWeaponBarrelModel>(1);
		HookEditorID<RE::BGSSurface::PatternStyle>(0);
		HookEditorID<RE::BGSLayeredMaterialSwap>(0);
		HookEditorID<RE::BGSForceData>(0);
		HookEditorID<RE::BGSTerminalMenu>(2);
		HookEditorID<RE::BGSEffectSequenceForm>(1);
		HookEditorID<RE::BGSSecondaryDamageList>(0);
		HookEditorID<RE::BGSMaterialPathForm>(0);
		HookEditorID<RE::BGSCloudForm>(0);
		HookEditorID<RE::BGSFogVolumeForm>(0);
		HookEditorID<RE::BGSWwiseKeywordMapping>(0);

		// loading skipped
		// HookEditorID<RE::BGSLegendaryItem>(1);

		HookEditorID<RE::BGSParticleSystemDefineCollection>(0);
		HookEditorID<RE::BSGalaxy::BGSSunPresetForm>(1);
		HookEditorID<RE::BGSPhotoModeFeature>(2);
	    HookEditorID<RE::BGSTimeOfDayData>(1);

	    // loading skipped
	    // HookEditorID<RE::TESDataHandlerPersistentCreatedUtil::BGSPersistentIDsForm>(0);

	    HookEditorID<RE::BGSChallengeForm>(1); 

		REX::INFO("\tInstalled editorID cache"sv);
	}
}
