// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioListenerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioListenerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioListenerComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioListenerComponent_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EReverbSimulationType();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReverbSimulationType;
	static UEnum* EReverbSimulationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReverbSimulationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReverbSimulationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EReverbSimulationType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EReverbSimulationType"));
		}
		return Z_Registration_Info_UEnum_EReverbSimulationType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EReverbSimulationType>()
	{
		return EReverbSimulationType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::Enumerators[] = {
		{ "EReverbSimulationType::REALTIME", (int64)EReverbSimulationType::REALTIME },
		{ "EReverbSimulationType::BAKED", (int64)EReverbSimulationType::BAKED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::Enum_MetaDataParams[] = {
		{ "BAKED.DisplayName", "Baked" },
		{ "BAKED.Name", "EReverbSimulationType::BAKED" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Ways in which reverb can be simulated for a listener.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioListenerComponent.h" },
		{ "REALTIME.DisplayName", "Real-time" },
		{ "REALTIME.Name", "EReverbSimulationType::REALTIME" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ways in which reverb can be simulated for a listener." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EReverbSimulationType",
		"EReverbSimulationType",
		Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EReverbSimulationType()
	{
		if (!Z_Registration_Info_UEnum_EReverbSimulationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReverbSimulationType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EReverbSimulationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReverbSimulationType.InnerSingleton;
	}
	void USteamAudioListenerComponent::StaticRegisterNativesUSteamAudioListenerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioListenerComponent);
	UClass* Z_Construct_UClass_USteamAudioListenerComponent_NoRegister()
	{
		return USteamAudioListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBakedListener_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurrentBakedListener;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateReverb_MetaData[];
#endif
		static void NewProp_bSimulateReverb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateReverb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReverbType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReverbType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Specifies Steam Audio simulation settings to use for listener-centric effects.\n */" },
#endif
		{ "HideCategories", "Activation Collision Tags Rendering Physics LOD Mobility Cooking AssetUserData" },
		{ "IncludePath", "SteamAudioListenerComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies Steam Audio simulation settings to use for listener-centric effects." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_CurrentBakedListener_MetaData[] = {
		{ "Category", "BakedListenerSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the current baked listener to use for sources that are configured to use baked static listener reflections. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the current baked listener to use for sources that are configured to use baked static listener reflections." },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_CurrentBakedListener = { "CurrentBakedListener", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioListenerComponent, CurrentBakedListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_CurrentBakedListener_MetaData), Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_CurrentBakedListener_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb_MetaData[] = {
		{ "Category", "ReverbSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, listener-centric reverb will be simulated. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, listener-centric reverb will be simulated." },
#endif
	};
#endif
	void Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb_SetBit(void* Obj)
	{
		((USteamAudioListenerComponent*)Obj)->bSimulateReverb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb = { "bSimulateReverb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioListenerComponent), &Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb_MetaData), Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType_MetaData[] = {
		{ "Category", "ReverbSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to simulate listener-centric reverb. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to simulate listener-centric reverb." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType = { "ReverbType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioListenerComponent, ReverbType), Z_Construct_UEnum_SteamAudio_EReverbSimulationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType_MetaData), Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType_MetaData) }; // 1016494625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioListenerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_CurrentBakedListener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_bSimulateReverb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioListenerComponent_Statics::NewProp_ReverbType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioListenerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioListenerComponent_Statics::ClassParams = {
		&USteamAudioListenerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamAudioListenerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioListenerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioListenerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USteamAudioListenerComponent()
	{
		if (!Z_Registration_Info_UClass_USteamAudioListenerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioListenerComponent.OuterSingleton, Z_Construct_UClass_USteamAudioListenerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioListenerComponent.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioListenerComponent>()
	{
		return USteamAudioListenerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioListenerComponent);
	USteamAudioListenerComponent::~USteamAudioListenerComponent() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics::EnumInfo[] = {
		{ EReverbSimulationType_StaticEnum, TEXT("EReverbSimulationType"), &Z_Registration_Info_UEnum_EReverbSimulationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1016494625U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioListenerComponent, USteamAudioListenerComponent::StaticClass, TEXT("USteamAudioListenerComponent"), &Z_Registration_Info_UClass_USteamAudioListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioListenerComponent), 794230652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_1259577800(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
