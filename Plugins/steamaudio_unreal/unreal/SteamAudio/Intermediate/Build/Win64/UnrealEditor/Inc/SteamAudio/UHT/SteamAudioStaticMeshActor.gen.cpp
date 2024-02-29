// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioStaticMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioStaticMeshActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor();
	STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void ASteamAudioStaticMeshActor::StaticRegisterNativesASteamAudioStaticMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamAudioStaticMeshActor);
	UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor_NoRegister()
	{
		return ASteamAudioStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An actor that references static geometry for a level.\n */" },
#endif
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "SteamAudioStaticMeshActor.h" },
		{ "ModuleRelativePath", "Public/SteamAudioStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An actor that references static geometry for a level." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioSerializedObject" },
		{ "Category", "ExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Serialized Object asset containing static geometry data. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Serialized Object asset containing static geometry data." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioStaticMeshActor, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset_MetaData), Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamAudioStaticMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::ClassParams = {
		&ASteamAudioStaticMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor()
	{
		if (!Z_Registration_Info_UClass_ASteamAudioStaticMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamAudioStaticMeshActor.OuterSingleton, Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASteamAudioStaticMeshActor.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<ASteamAudioStaticMeshActor>()
	{
		return ASteamAudioStaticMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamAudioStaticMeshActor);
	ASteamAudioStaticMeshActor::~ASteamAudioStaticMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASteamAudioStaticMeshActor, ASteamAudioStaticMeshActor::StaticClass, TEXT("ASteamAudioStaticMeshActor"), &Z_Registration_Info_UClass_ASteamAudioStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamAudioStaticMeshActor), 2773020660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_800773436(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
