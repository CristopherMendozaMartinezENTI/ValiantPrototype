// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioProbeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioProbeComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioProbeComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioProbeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void USteamAudioProbeComponent::StaticRegisterNativesUSteamAudioProbeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioProbeComponent);
	UClass* Z_Construct_UClass_USteamAudioProbeComponent_NoRegister()
	{
		return USteamAudioProbeComponent::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioProbeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProbePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProbePositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioProbeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioProbeComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component of ASteamAudioProbeVolume that stores the probe positions for in-editor visualization.\n */" },
#endif
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "SteamAudioProbeComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component of ASteamAudioProbeVolume that stores the probe positions for in-editor visualization." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_Inner = { "ProbePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The probe positions. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The probe positions." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions = { "ProbePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioProbeComponent, ProbePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_MetaData), Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioProbeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioProbeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioProbeComponent_Statics::ClassParams = {
		&USteamAudioProbeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioProbeComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USteamAudioProbeComponent()
	{
		if (!Z_Registration_Info_UClass_USteamAudioProbeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioProbeComponent.OuterSingleton, Z_Construct_UClass_USteamAudioProbeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioProbeComponent.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioProbeComponent>()
	{
		return USteamAudioProbeComponent::StaticClass();
	}
	USteamAudioProbeComponent::USteamAudioProbeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioProbeComponent);
	USteamAudioProbeComponent::~USteamAudioProbeComponent() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioProbeComponent, USteamAudioProbeComponent::StaticClass, TEXT("USteamAudioProbeComponent"), &Z_Registration_Info_UClass_USteamAudioProbeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioProbeComponent), 1163746303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_3454405852(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
