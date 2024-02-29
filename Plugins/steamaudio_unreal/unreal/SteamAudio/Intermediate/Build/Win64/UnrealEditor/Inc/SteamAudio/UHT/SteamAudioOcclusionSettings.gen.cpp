// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioOcclusionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioOcclusionSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioOcclusionSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioOcclusionSettings_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_ETransmissionType();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransmissionType;
	static UEnum* ETransmissionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransmissionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransmissionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_ETransmissionType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("ETransmissionType"));
		}
		return Z_Registration_Info_UEnum_ETransmissionType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<ETransmissionType>()
	{
		return ETransmissionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::Enumerators[] = {
		{ "ETransmissionType::FREQUENCY_INDEPENDENT", (int64)ETransmissionType::FREQUENCY_INDEPENDENT },
		{ "ETransmissionType::FREQUENCY_DEPENDENT", (int64)ETransmissionType::FREQUENCY_DEPENDENT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLTransmissionType.\n */" },
#endif
		{ "FREQUENCY_DEPENDENT.DisplayName", "Frequency-Dependent" },
		{ "FREQUENCY_DEPENDENT.Name", "ETransmissionType::FREQUENCY_DEPENDENT" },
		{ "FREQUENCY_INDEPENDENT.DisplayName", "Frequency-Independent" },
		{ "FREQUENCY_INDEPENDENT.Name", "ETransmissionType::FREQUENCY_INDEPENDENT" },
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLTransmissionType." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"ETransmissionType",
		"ETransmissionType",
		Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_ETransmissionType()
	{
		if (!Z_Registration_Info_UEnum_ETransmissionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransmissionType.InnerSingleton, Z_Construct_UEnum_SteamAudio_ETransmissionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransmissionType.InnerSingleton;
	}
	void USteamAudioOcclusionSettings::StaticRegisterNativesUSteamAudioOcclusionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioOcclusionSettings);
	UClass* Z_Construct_UClass_USteamAudioOcclusionSettings_NoRegister()
	{
		return USteamAudioOcclusionSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioOcclusionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDistanceAttenuation_MetaData[];
#endif
		static void NewProp_bApplyDistanceAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDistanceAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAirAbsorption_MetaData[];
#endif
		static void NewProp_bApplyAirAbsorption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAirAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDirectivity_MetaData[];
#endif
		static void NewProp_bApplyDirectivity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDirectivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DipoleWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DipoleWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DipolePower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DipolePower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOcclusion_MetaData[];
#endif
		static void NewProp_bApplyOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyTransmission_MetaData[];
#endif
		static void NewProp_bApplyTransmission_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyTransmission;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransmissionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransmissionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOcclusionPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings that can be serialized to an asset and re-used with multiple Audio Components to configure how the\n// occlusion plugin renders them.\n" },
#endif
		{ "IncludePath", "SteamAudioOcclusionSettings.h" },
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings that can be serialized to an asset and re-used with multiple Audio Components to configure how the\nocclusion plugin renders them." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation_MetaData[] = {
		{ "Category", "DistanceAttenuationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, physics-based distance attenuation will be calculated and applied. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, physics-based distance attenuation will be calculated and applied." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation_SetBit(void* Obj)
	{
		((USteamAudioOcclusionSettings*)Obj)->bApplyDistanceAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation = { "bApplyDistanceAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioOcclusionSettings), &Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption_MetaData[] = {
		{ "Category", "AirAbsorptionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, frequency-dependent air absorption will be calculated and applied. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, frequency-dependent air absorption will be calculated and applied." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption_SetBit(void* Obj)
	{
		((USteamAudioOcclusionSettings*)Obj)->bApplyAirAbsorption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption = { "bApplyAirAbsorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioOcclusionSettings), &Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity_MetaData[] = {
		{ "Category", "DirectivitySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, a dipole directivity pattern will be modeled and applied. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, a dipole directivity pattern will be modeled and applied." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity_SetBit(void* Obj)
	{
		((USteamAudioOcclusionSettings*)Obj)->bApplyDirectivity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity = { "bApplyDirectivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioOcclusionSettings), &Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipoleWeight_MetaData[] = {
		{ "Category", "DirectivitySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blends between monopole (omnidirectional) and dipole directivity patterns. Only if directivity is applied. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blends between monopole (omnidirectional) and dipole directivity patterns. Only if directivity is applied." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipoleWeight = { "DipoleWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioOcclusionSettings, DipoleWeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipoleWeight_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipoleWeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipolePower_MetaData[] = {
		{ "Category", "DirectivitySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls how focused the dipole directivity is. Only if directivity is applied. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls how focused the dipole directivity is. Only if directivity is applied." },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipolePower = { "DipolePower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioOcclusionSettings, DipolePower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipolePower_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipolePower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, attenuation due to occlusion will be applied. The occlusion attenuation value is provided by the\n        Steam Audio Source component. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, attenuation due to occlusion will be applied. The occlusion attenuation value is provided by the\n       Steam Audio Source component." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion_SetBit(void* Obj)
	{
		((USteamAudioOcclusionSettings*)Obj)->bApplyOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion = { "bApplyOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioOcclusionSettings), &Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, attenuation due to transmission will be applied. The transmission attenuation value is provided by the\n        Steam Audio Source component. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, attenuation due to transmission will be applied. The transmission attenuation value is provided by the\n       Steam Audio Source component." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission_SetBit(void* Obj)
	{
		((USteamAudioOcclusionSettings*)Obj)->bApplyTransmission = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission = { "bApplyTransmission", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioOcclusionSettings), &Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether the transmission attenuation is frequency-dependent or not. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioOcclusionSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the transmission attenuation is frequency-dependent or not." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType = { "TransmissionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioOcclusionSettings, TransmissionType), Z_Construct_UEnum_SteamAudio_ETransmissionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType_MetaData), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType_MetaData) }; // 2521232773
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDistanceAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyAirAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyDirectivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipoleWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_DipolePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_bApplyTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::NewProp_TransmissionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioOcclusionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::ClassParams = {
		&USteamAudioOcclusionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USteamAudioOcclusionSettings()
	{
		if (!Z_Registration_Info_UClass_USteamAudioOcclusionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioOcclusionSettings.OuterSingleton, Z_Construct_UClass_USteamAudioOcclusionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioOcclusionSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioOcclusionSettings>()
	{
		return USteamAudioOcclusionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioOcclusionSettings);
	USteamAudioOcclusionSettings::~USteamAudioOcclusionSettings() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics::EnumInfo[] = {
		{ ETransmissionType_StaticEnum, TEXT("ETransmissionType"), &Z_Registration_Info_UEnum_ETransmissionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2521232773U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioOcclusionSettings, USteamAudioOcclusionSettings::StaticClass, TEXT("USteamAudioOcclusionSettings"), &Z_Registration_Info_UClass_USteamAudioOcclusionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioOcclusionSettings), 3783744707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_2027440986(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
