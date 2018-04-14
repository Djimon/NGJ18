// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SupplySystemGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSupplySystemGameMode() {}
// Cross Module References
	SUPPLYSYSTEM_API UClass* Z_Construct_UClass_ASupplySystemGameMode_NoRegister();
	SUPPLYSYSTEM_API UClass* Z_Construct_UClass_ASupplySystemGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SupplySystem();
// End Cross Module References
	void ASupplySystemGameMode::StaticRegisterNativesASupplySystemGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASupplySystemGameMode_NoRegister()
	{
		return ASupplySystemGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASupplySystemGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_SupplySystem,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "SupplySystemGameMode.h" },
				{ "ModuleRelativePath", "SupplySystemGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASupplySystemGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASupplySystemGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASupplySystemGameMode, 984762547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASupplySystemGameMode(Z_Construct_UClass_ASupplySystemGameMode, &ASupplySystemGameMode::StaticClass, TEXT("/Script/SupplySystem"), TEXT("ASupplySystemGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASupplySystemGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
