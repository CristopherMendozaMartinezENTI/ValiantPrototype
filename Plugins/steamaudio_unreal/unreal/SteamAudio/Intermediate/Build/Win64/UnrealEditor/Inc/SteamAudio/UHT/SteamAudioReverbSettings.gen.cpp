// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioReverbSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioReverbSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioReverbSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioReverbSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void USteamAudioReverbSettings::StaticRegisterNativesUSteamAudioReverbSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioReverbSettings);
	UClass* Z_Construct_UClass_USteamAudioReverbSettings_NoRegister()
	{
		return USteamAudioReverbSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioReverbSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyReflections_MetaData[];
#endif
		static void NewProp_bApplyReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyHRTFToReflections_MetaData[];
#endif
		static void NewProp_bApplyHRTFToReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyHRTFToReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsMixLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsMixLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioReverbSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReverbPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioReverbSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings that can be serialized to an asset and re-used with multiple Audio Components to configure how the\n// reverb plugin renders them.\n" },
#endif
		{ "IncludePath", "SteamAudioReverbSettings.h" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings that can be serialized to an asset and re-used with multiple Audio Components to configure how the\nreverb plugin renders them." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_SetBit(void* Obj)
	{
		((USteamAudioReverbSettings*)Obj)->bApplyReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections = { "bApplyReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioReverbSettings), &Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_MetaData), Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "DisplayName", "Apply HRTF To Reflections" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_SetBit(void* Obj)
	{
		((USteamAudioReverbSettings*)Obj)->bApplyHRTFToReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections = { "bApplyHRTFToReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioReverbSettings), &Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_MetaData), Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel = { "ReflectionsMixLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioReverbSettings, ReflectionsMixLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel_MetaData), Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioReverbSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioReverbSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::ClassParams = {
		&USteamAudioReverbSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioReverbSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USteamAudioReverbSettings()
	{
		if (!Z_Registration_Info_UClass_USteamAudioReverbSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioReverbSettings.OuterSingleton, Z_Construct_UClass_USteamAudioReverbSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioReverbSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioReverbSettings>()
	{
		return USteamAudioReverbSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioReverbSettings);
	USteamAudioReverbSettings::~USteamAudioReverbSettings() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioReverbSettings, USteamAudioReverbSettings::StaticClass, TEXT("USteamAudioReverbSettings"), &Z_Registration_Info_UClass_USteamAudioReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioReverbSettings), 1384994175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_885733801(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
