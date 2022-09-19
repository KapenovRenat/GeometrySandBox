// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandBox/GeometrySandBoxGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySandBoxGameModeBase() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometrySandBoxGameModeBase_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometrySandBoxGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GeometrySandBox();
// End Cross Module References
	void AGeometrySandBoxGameModeBase::StaticRegisterNativesAGeometrySandBoxGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometrySandBoxGameModeBase);
	UClass* Z_Construct_UClass_AGeometrySandBoxGameModeBase_NoRegister()
	{
		return AGeometrySandBoxGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GeometrySandBoxGameModeBase.h" },
		{ "ModuleRelativePath", "GeometrySandBoxGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometrySandBoxGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::ClassParams = {
		&AGeometrySandBoxGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometrySandBoxGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGeometrySandBoxGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometrySandBoxGameModeBase.OuterSingleton, Z_Construct_UClass_AGeometrySandBoxGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometrySandBoxGameModeBase.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AGeometrySandBoxGameModeBase>()
	{
		return AGeometrySandBoxGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometrySandBoxGameModeBase);
	struct Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_GeometrySandBoxGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_GeometrySandBoxGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometrySandBoxGameModeBase, AGeometrySandBoxGameModeBase::StaticClass, TEXT("AGeometrySandBoxGameModeBase"), &Z_Registration_Info_UClass_AGeometrySandBoxGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometrySandBoxGameModeBase), 60286507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_GeometrySandBoxGameModeBase_h_880876077(TEXT("/Script/GeometrySandBox"),
		Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_GeometrySandBoxGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_GeometrySandBoxGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
