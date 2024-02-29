// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudioEditor/Private/SteamAudioMaterialFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioMaterialFactory() {}
// Cross Module References
	STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioMaterialFactory();
	STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioMaterialFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References
	void USteamAudioMaterialFactory::StaticRegisterNativesUSteamAudioMaterialFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioMaterialFactory);
	UClass* Z_Construct_UClass_USteamAudioMaterialFactory_NoRegister()
	{
		return USteamAudioMaterialFactory::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioMaterialFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioMaterialFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioMaterialFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioMaterialFactory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instantiates a Material asset.\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SteamAudioMaterialFactory.h" },
		{ "ModuleRelativePath", "Private/SteamAudioMaterialFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates a Material asset." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioMaterialFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioMaterialFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioMaterialFactory_Statics::ClassParams = {
		&USteamAudioMaterialFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioMaterialFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioMaterialFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USteamAudioMaterialFactory()
	{
		if (!Z_Registration_Info_UClass_USteamAudioMaterialFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioMaterialFactory.OuterSingleton, Z_Construct_UClass_USteamAudioMaterialFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioMaterialFactory.OuterSingleton;
	}
	template<> STEAMAUDIOEDITOR_API UClass* StaticClass<USteamAudioMaterialFactory>()
	{
		return USteamAudioMaterialFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioMaterialFactory);
	USteamAudioMaterialFactory::~USteamAudioMaterialFactory() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioMaterialFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioMaterialFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioMaterialFactory, USteamAudioMaterialFactory::StaticClass, TEXT("USteamAudioMaterialFactory"), &Z_Registration_Info_UClass_USteamAudioMaterialFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioMaterialFactory), 2059879753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioMaterialFactory_h_659787466(TEXT("/Script/SteamAudioEditor"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioMaterialFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioMaterialFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
