// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerCourse/MultiplayerCourseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCourseGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MULTIPLAYERCOURSE_API UClass* Z_Construct_UClass_AMultiplayerCourseGameMode();
	MULTIPLAYERCOURSE_API UClass* Z_Construct_UClass_AMultiplayerCourseGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MultiplayerCourse();
// End Cross Module References
	void AMultiplayerCourseGameMode::StaticRegisterNativesAMultiplayerCourseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerCourseGameMode);
	UClass* Z_Construct_UClass_AMultiplayerCourseGameMode_NoRegister()
	{
		return AMultiplayerCourseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerCourseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerCourseGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerCourseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerCourseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::ClassParams = {
		&AMultiplayerCourseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMultiplayerCourseGameMode()
	{
		if (!Z_Registration_Info_UClass_AMultiplayerCourseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerCourseGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerCourseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMultiplayerCourseGameMode.OuterSingleton;
	}
	template<> MULTIPLAYERCOURSE_API UClass* StaticClass<AMultiplayerCourseGameMode>()
	{
		return AMultiplayerCourseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerCourseGameMode);
	AMultiplayerCourseGameMode::~AMultiplayerCourseGameMode() {}
	struct Z_CompiledInDeferFile_FID_MultiplayerCourse_Source_MultiplayerCourse_MultiplayerCourseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerCourse_Source_MultiplayerCourse_MultiplayerCourseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerCourseGameMode, AMultiplayerCourseGameMode::StaticClass, TEXT("AMultiplayerCourseGameMode"), &Z_Registration_Info_UClass_AMultiplayerCourseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerCourseGameMode), 2195887570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerCourse_Source_MultiplayerCourse_MultiplayerCourseGameMode_h_2169578453(TEXT("/Script/MultiplayerCourse"),
		Z_CompiledInDeferFile_FID_MultiplayerCourse_Source_MultiplayerCourse_MultiplayerCourseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerCourse_Source_MultiplayerCourse_MultiplayerCourseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
