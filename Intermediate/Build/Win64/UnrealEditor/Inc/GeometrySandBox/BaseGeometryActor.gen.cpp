// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandBox/Public/BaseGeometryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGeometryActor() {}
// Cross Module References
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_ABaseGeometryActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometrySandBox();
// End Cross Module References
	void ABaseGeometryActor::StaticRegisterNativesABaseGeometryActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGeometryActor);
	UClass* Z_Construct_UClass_ABaseGeometryActor_NoRegister()
	{
		return ABaseGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGeometryActor.h" },
		{ "ModuleRelativePath", "Public/BaseGeometryActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGeometryActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams = {
		&ABaseGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGeometryActor()
	{
		if (!Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton, Z_Construct_UClass_ABaseGeometryActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGeometryActor.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<ABaseGeometryActor>()
	{
		return ABaseGeometryActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGeometryActor);
	struct Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_Public_BaseGeometryActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_Public_BaseGeometryActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGeometryActor, ABaseGeometryActor::StaticClass, TEXT("ABaseGeometryActor"), &Z_Registration_Info_UClass_ABaseGeometryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGeometryActor), 3919232284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_Public_BaseGeometryActor_h_3959270255(TEXT("/Script/GeometrySandBox"),
		Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_Public_BaseGeometryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeometrySandBox_Source_GeometrySandBox_Public_BaseGeometryActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
