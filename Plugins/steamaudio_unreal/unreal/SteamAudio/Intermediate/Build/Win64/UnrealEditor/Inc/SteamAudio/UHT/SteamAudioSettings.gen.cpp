// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSettings_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EAudioEngineType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EHRTFNormType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EReflectionEffectType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_ESceneType();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioEngineType;
	static UEnum* EAudioEngineType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioEngineType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EAudioEngineType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EAudioEngineType"));
		}
		return Z_Registration_Info_UEnum_EAudioEngineType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EAudioEngineType>()
	{
		return EAudioEngineType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enumerators[] = {
		{ "EAudioEngineType::UNREAL", (int64)EAudioEngineType::UNREAL },
		{ "EAudioEngineType::FMODSTUDIO", (int64)EAudioEngineType::FMODSTUDIO },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The audio engine with which we want to integrate.\n */" },
#endif
		{ "FMODSTUDIO.DisplayName", "FMOD Studio" },
		{ "FMODSTUDIO.Name", "EAudioEngineType::FMODSTUDIO" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio engine with which we want to integrate." },
#endif
		{ "UNREAL.DisplayName", "Unreal" },
		{ "UNREAL.Name", "EAudioEngineType::UNREAL" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EAudioEngineType",
		"EAudioEngineType",
		Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EAudioEngineType()
	{
		if (!Z_Registration_Info_UEnum_EAudioEngineType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioEngineType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioEngineType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneType;
	static UEnum* ESceneType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESceneType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESceneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_ESceneType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("ESceneType"));
		}
		return Z_Registration_Info_UEnum_ESceneType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<ESceneType>()
	{
		return ESceneType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_ESceneType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enumerators[] = {
		{ "ESceneType::DEFAULT", (int64)ESceneType::DEFAULT },
		{ "ESceneType::EMBREE", (int64)ESceneType::EMBREE },
		{ "ESceneType::RADEONRAYS", (int64)ESceneType::RADEONRAYS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLSceneType.\n */" },
#endif
		{ "DEFAULT.DisplayName", "Default" },
		{ "DEFAULT.Name", "ESceneType::DEFAULT" },
		{ "EMBREE.DisplayName", "Embree" },
		{ "EMBREE.Name", "ESceneType::EMBREE" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "RADEONRAYS.DisplayName", "Radeon Rays" },
		{ "RADEONRAYS.Name", "ESceneType::RADEONRAYS" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLSceneType." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_ESceneType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"ESceneType",
		"ESceneType",
		Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_ESceneType()
	{
		if (!Z_Registration_Info_UEnum_ESceneType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneType.InnerSingleton, Z_Construct_UEnum_SteamAudio_ESceneType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESceneType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionEffectType;
	static UEnum* EReflectionEffectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReflectionEffectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReflectionEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EReflectionEffectType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EReflectionEffectType"));
		}
		return Z_Registration_Info_UEnum_EReflectionEffectType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EReflectionEffectType>()
	{
		return EReflectionEffectType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enumerators[] = {
		{ "EReflectionEffectType::CONVOLUTION", (int64)EReflectionEffectType::CONVOLUTION },
		{ "EReflectionEffectType::PARAMETRIC", (int64)EReflectionEffectType::PARAMETRIC },
		{ "EReflectionEffectType::HYBRID", (int64)EReflectionEffectType::HYBRID },
		{ "EReflectionEffectType::TRUEAUDIONEXT", (int64)EReflectionEffectType::TRUEAUDIONEXT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLReflectionEffectType.\n */" },
#endif
		{ "CONVOLUTION.DisplayName", "Convolution" },
		{ "CONVOLUTION.Name", "EReflectionEffectType::CONVOLUTION" },
		{ "HYBRID.DisplayName", "Hybrid" },
		{ "HYBRID.Name", "EReflectionEffectType::HYBRID" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "PARAMETRIC.DisplayName", "Parametric" },
		{ "PARAMETRIC.Name", "EReflectionEffectType::PARAMETRIC" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLReflectionEffectType." },
#endif
		{ "TRUEAUDIONEXT.DisplayName", "TrueAudio Next" },
		{ "TRUEAUDIONEXT.Name", "EReflectionEffectType::TRUEAUDIONEXT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EReflectionEffectType",
		"EReflectionEffectType",
		Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EReflectionEffectType()
	{
		if (!Z_Registration_Info_UEnum_EReflectionEffectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionEffectType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReflectionEffectType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenCLDeviceType;
	static UEnum* EOpenCLDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpenCLDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpenCLDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EOpenCLDeviceType"));
		}
		return Z_Registration_Info_UEnum_EOpenCLDeviceType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EOpenCLDeviceType>()
	{
		return EOpenCLDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enumerators[] = {
		{ "EOpenCLDeviceType::ANY", (int64)EOpenCLDeviceType::ANY },
		{ "EOpenCLDeviceType::CPU", (int64)EOpenCLDeviceType::CPU },
		{ "EOpenCLDeviceType::GPU", (int64)EOpenCLDeviceType::GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "ANY.DisplayName", "Any" },
		{ "ANY.Name", "EOpenCLDeviceType::ANY" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLOpenCLDeviceType.\n */" },
#endif
		{ "CPU.DisplayName", "CPU" },
		{ "CPU.Name", "EOpenCLDeviceType::CPU" },
		{ "GPU.DisplayName", "GPU" },
		{ "GPU.Name", "EOpenCLDeviceType::GPU" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLOpenCLDeviceType." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EOpenCLDeviceType",
		"EOpenCLDeviceType",
		Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EOpenCLDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenCLDeviceType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpenCLDeviceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHRTFNormType;
	static UEnum* EHRTFNormType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHRTFNormType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHRTFNormType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EHRTFNormType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EHRTFNormType"));
		}
		return Z_Registration_Info_UEnum_EHRTFNormType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EHRTFNormType>()
	{
		return EHRTFNormType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enumerators[] = {
		{ "EHRTFNormType::NONE", (int64)EHRTFNormType::NONE },
		{ "EHRTFNormType::RMS", (int64)EHRTFNormType::RMS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLHRTFNormType.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "NONE.DisplayName", "None" },
		{ "NONE.Name", "EHRTFNormType::NONE" },
		{ "RMS.DisplayName", "RMS" },
		{ "RMS.Name", "EHRTFNormType::RMS" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLHRTFNormType." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EHRTFNormType",
		"EHRTFNormType",
		Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EHRTFNormType()
	{
		if (!Z_Registration_Info_UEnum_EHRTFNormType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHRTFNormType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHRTFNormType.InnerSingleton;
	}
	void USteamAudioSettings::StaticRegisterNativesUSteamAudioSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSettings);
	UClass* Z_Construct_UClass_USteamAudioSettings_NoRegister()
	{
		return USteamAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioEngine_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEngine_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioEngine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLandscapeGeometry_MetaData[];
#endif
		static void NewProp_bExportLandscapeGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLandscapeGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportBSPGeometry_MetaData[];
#endif
		static void NewProp_bExportBSPGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportBSPGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLandscapeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBSPMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBSPMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SceneType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOcclusionSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RealTimeDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeAmbisonicOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeAmbisonicOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeMaxSources_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeMaxSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeCPUCoresPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeCPUCoresPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeIrradianceMinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RealTimeIrradianceMinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeConvolution_MetaData[];
#endif
		static void NewProp_bBakeConvolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeConvolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeParametric_MetaData[];
#endif
		static void NewProp_bBakeParametric_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeParametric;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingAmbisonicOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingAmbisonicOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingCPUCoresPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingCPUCoresPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingIrradianceMinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingIrradianceMinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilitySamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingVisibilitySamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilityRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingVisibilityRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingVisibilityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilityRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingVisibilityRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingPathRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingPathRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedPathingCPUCoresPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakedPathingCPUCoresPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationUpdateInterval;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionEffectType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionEffectType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReflectionEffectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HybridReverbTransitionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HybridReverbTransitionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HybridReverbOverlapPercent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HybridReverbOverlapPercent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxReservedComputeUnits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReservedComputeUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractionComputeUnitsForIRUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionComputeUnitsForIRUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingBatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingBatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TANDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TANDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TANAmbisonicOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TANAmbisonicOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TANMaxSources_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TANMaxSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HRTFVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HRTFVolume;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HRTFNormalizationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HRTFNormalizationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HRTFNormalizationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SOFAFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SOFAFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableValidation_MetaData[];
#endif
		static void NewProp_EnableValidation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableValidation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global settings for the Steam Audio plugin.\n */" },
#endif
		{ "IncludePath", "SteamAudioSettings.h" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global settings for the Steam Audio plugin." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_MetaData[] = {
		{ "Category", "AudioEngineSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The audio engine with which we want to integrate. If this is set to use third-party middleware, the\n        corresponding Steam Audio support plugin must also be enabled in your project settings. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio engine with which we want to integrate. If this is set to use third-party middleware, the\n       corresponding Steam Audio support plugin must also be enabled in your project settings." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine = { "AudioEngine", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, AudioEngine), Z_Construct_UEnum_SteamAudio_EAudioEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_MetaData) }; // 123279354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_MetaData[] = {
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, Landscape actors (terrain) will be exported as part of a level's static geometry. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Landscape actors (terrain) will be exported as part of a level's static geometry." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->bExportLandscapeGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry = { "bExportLandscapeGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_MetaData[] = {
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, BSP geometry will be exported as part of a level's static geometry. */" },
#endif
		{ "DisplayName", "Export BSP Geometry" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, BSP geometry will be exported as part of a level's static geometry." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->bExportBSPGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry = { "bExportBSPGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Material asset to use as the default material for Static Mesh actors. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Material asset to use as the default material for Static Mesh actors." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DefaultMeshMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Material asset to use as the default material for Landscape actors. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Material asset to use as the default material for Landscape actors." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial = { "DefaultLandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DefaultLandscapeMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Material asset to use as the default material for BSP geometry. */" },
#endif
		{ "DisplayName", "Default BSP Material" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Material asset to use as the default material for BSP geometry." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial = { "DefaultBSPMaterial", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DefaultBSPMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_MetaData[] = {
		{ "Category", "RayTracerSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType = { "SceneType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, SceneType), Z_Construct_UEnum_SteamAudio_ESceneType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_MetaData) }; // 3073878613
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum possible value of Occlusion Samples that can be specified on any Steam Audio Source component. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum possible value of Occlusion Samples that can be specified on any Steam Audio Source component." },
#endif
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples = { "MaxOcclusionSamples", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, MaxOcclusionSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "65536" },
		{ "UIMin", "1024" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays = { "RealTimeRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeRays), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces = { "RealTimeBounces", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeBounces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration = { "RealTimeDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder = { "RealTimeAmbisonicOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeAmbisonicOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources = { "RealTimeMaxSources", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeMaxSources), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "DisplayName", "Real Time CPU Cores Percentage" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage = { "RealTimeCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeCPUCoresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance = { "RealTimeIrradianceMinDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeIrradianceMinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->bBakeConvolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution = { "bBakeConvolution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->bBakeParametric = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric = { "bBakeParametric", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "65536" },
		{ "UIMin", "1024" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays = { "BakingRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingRays), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces = { "BakingBounces", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingBounces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration = { "BakingDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder = { "BakingAmbisonicOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingAmbisonicOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "DisplayName", "Baking CPU Cores Percentage" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage = { "BakingCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingCPUCoresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance = { "BakingIrradianceMinDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingIrradianceMinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix = { "ReverbSubmix", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, ReverbSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples = { "BakingVisibilitySamples", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilitySamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius = { "BakingVisibilityRadius", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilityRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold = { "BakingVisibilityThreshold", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange = { "BakingVisibilityRange", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilityRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange = { "BakingPathRange", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingPathRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "DisplayName", "Baked Pathing CPU Cores Percentage" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage = { "BakedPathingCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakedPathingCPUCoresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval_MetaData[] = {
		{ "Category", "SimulationUpdateSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval = { "SimulationUpdateInterval", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, SimulationUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_MetaData[] = {
		{ "Category", "ReflectionEffectSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType = { "ReflectionEffectType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, ReflectionEffectType), Z_Construct_UEnum_SteamAudio_EReflectionEffectType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_MetaData) }; // 1011641305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime_MetaData[] = {
		{ "Category", "HybridReverbSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime = { "HybridReverbTransitionTime", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HybridReverbTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent_MetaData[] = {
		{ "Category", "HybridReverbSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent = { "HybridReverbOverlapPercent", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HybridReverbOverlapPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "OpenCL Settings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DeviceType), Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_MetaData) }; // 288994318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits_MetaData[] = {
		{ "Category", "OpenCL Settings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits = { "MaxReservedComputeUnits", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, MaxReservedComputeUnits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate_MetaData[] = {
		{ "Category", "OpenCL Settings" },
		{ "DisplayName", "Fraction Compute Units For IR Update" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate = { "FractionComputeUnitsForIRUpdate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, FractionComputeUnitsForIRUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize_MetaData[] = {
		{ "Category", "RadeonRaysSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize = { "BakingBatchSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingBatchSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration_MetaData[] = {
		{ "Category", "TrueAudio Next Settings" },
		{ "DisplayName", "TAN Duration" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration = { "TANDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, TANDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder_MetaData[] = {
		{ "Category", "TrueAudio Next Settings" },
		{ "DisplayName", "TAN Ambisonic Order" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder = { "TANAmbisonicOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, TANAmbisonicOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources_MetaData[] = {
		{ "Category", "TrueAudio Next Settings" },
		{ "DisplayName", "TAN Max Sources" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources = { "TANMaxSources", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, TANMaxSources), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume_MetaData[] = {
		{ "Category", "Default HRTF Settings" },
		{ "DisplayName", "HRTF Volume Gain (dB)" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume = { "HRTFVolume", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HRTFVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_MetaData[] = {
		{ "Category", "Default HRTF Settings" },
		{ "DisplayName", "HRTF Normalization Type" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType = { "HRTFNormalizationType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HRTFNormalizationType), Z_Construct_UEnum_SteamAudio_EHRTFNormType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_MetaData) }; // 169615657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SOFAFile" },
		{ "Category", "Custom HRTF Settings" },
		{ "DisplayName", "SOFA File" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile = { "SOFAFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, SOFAFile), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->EnableValidation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation = { "EnableValidation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_MetaData), Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSettings_Statics::ClassParams = {
		&USteamAudioSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USteamAudioSettings()
	{
		if (!Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton, Z_Construct_UClass_USteamAudioSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioSettings>()
	{
		return USteamAudioSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSettings);
	USteamAudioSettings::~USteamAudioSettings() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::EnumInfo[] = {
		{ EAudioEngineType_StaticEnum, TEXT("EAudioEngineType"), &Z_Registration_Info_UEnum_EAudioEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 123279354U) },
		{ ESceneType_StaticEnum, TEXT("ESceneType"), &Z_Registration_Info_UEnum_ESceneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3073878613U) },
		{ EReflectionEffectType_StaticEnum, TEXT("EReflectionEffectType"), &Z_Registration_Info_UEnum_EReflectionEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1011641305U) },
		{ EOpenCLDeviceType_StaticEnum, TEXT("EOpenCLDeviceType"), &Z_Registration_Info_UEnum_EOpenCLDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 288994318U) },
		{ EHRTFNormType_StaticEnum, TEXT("EHRTFNormType"), &Z_Registration_Info_UEnum_EHRTFNormType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 169615657U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSettings, USteamAudioSettings::StaticClass, TEXT("USteamAudioSettings"), &Z_Registration_Info_UClass_USteamAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSettings), 3770793618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_190046259(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
