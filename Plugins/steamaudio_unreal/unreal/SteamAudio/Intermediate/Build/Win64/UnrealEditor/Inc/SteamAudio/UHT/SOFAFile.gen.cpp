// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SOFAFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOFAFile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USOFAFile();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USOFAFile_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EHRTFNormType();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void USOFAFile::StaticRegisterNativesUSOFAFile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USOFAFile);
	UClass* Z_Construct_UClass_USOFAFile_NoRegister()
	{
		return USOFAFile::StaticClass();
	}
	struct Z_Construct_UClass_USOFAFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalizationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalizationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USOFAFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USOFAFile_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Serializable object that is created when a .sofa file is imported as an asset into the project.\n */" },
#endif
		{ "IncludePath", "SOFAFile.h" },
		{ "ModuleRelativePath", "Public/SOFAFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializable object that is created when a .sofa file is imported as an asset into the project." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USOFAFile_Statics::NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the .sofa file from which this asset was imported. */" },
#endif
		{ "ModuleRelativePath", "Public/SOFAFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the .sofa file from which this asset was imported." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USOFAFile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOFAFile, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::NewProp_Name_MetaData), Z_Construct_UClass_USOFAFile_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOFAFile_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USOFAFile_Statics::NewProp_Data_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Imported data. */" },
#endif
		{ "ModuleRelativePath", "Public/SOFAFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Imported data." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOFAFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOFAFile, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::NewProp_Data_MetaData), Z_Construct_UClass_USOFAFile_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USOFAFile_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "HRTFSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Volume correction factor. */" },
#endif
		{ "DisplayName", "Volume Gain (dB)" },
		{ "ModuleRelativePath", "Public/SOFAFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volume correction factor." },
#endif
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOFAFile_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOFAFile, Volume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::NewProp_Volume_MetaData), Z_Construct_UClass_USOFAFile_Statics::NewProp_Volume_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType_MetaData[] = {
		{ "Category", "HRTFSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HRTF normalization algorithm. */" },
#endif
		{ "ModuleRelativePath", "Public/SOFAFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HRTF normalization algorithm." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType = { "NormalizationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOFAFile, NormalizationType), Z_Construct_UEnum_SteamAudio_EHRTFNormType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType_MetaData), Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType_MetaData) }; // 169615657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOFAFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOFAFile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOFAFile_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOFAFile_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOFAFile_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOFAFile_Statics::NewProp_NormalizationType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USOFAFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOFAFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USOFAFile_Statics::ClassParams = {
		&USOFAFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USOFAFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::Class_MetaDataParams), Z_Construct_UClass_USOFAFile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USOFAFile()
	{
		if (!Z_Registration_Info_UClass_USOFAFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOFAFile.OuterSingleton, Z_Construct_UClass_USOFAFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USOFAFile.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USOFAFile>()
	{
		return USOFAFile::StaticClass();
	}
	USOFAFile::USOFAFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USOFAFile);
	USOFAFile::~USOFAFile() {}
	struct Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SOFAFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SOFAFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USOFAFile, USOFAFile::StaticClass, TEXT("USOFAFile"), &Z_Registration_Info_UClass_USOFAFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOFAFile), 2614759796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SOFAFile_h_1656032412(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SOFAFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_UnrealEngineProjects_ValiantPrototype_Plugins_steamaudio_unreal_unreal_SteamAudio_Source_SteamAudio_Public_SOFAFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
