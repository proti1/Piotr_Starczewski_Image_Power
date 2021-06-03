// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/ImaginePowerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImaginePowerGameMode() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerGameMode_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	void AImaginePowerGameMode::StaticRegisterNativesAImaginePowerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AImaginePowerGameMode_NoRegister()
	{
		return AImaginePowerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AImaginePowerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImaginePowerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ImaginePowerGameMode.h" },
		{ "ModuleRelativePath", "ImaginePowerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImaginePowerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImaginePowerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AImaginePowerGameMode_Statics::ClassParams = {
		&AImaginePowerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AImaginePowerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AImaginePowerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AImaginePowerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AImaginePowerGameMode, 2866942776);
	template<> IMAGINEPOWER_API UClass* StaticClass<AImaginePowerGameMode>()
	{
		return AImaginePowerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AImaginePowerGameMode(Z_Construct_UClass_AImaginePowerGameMode, &AImaginePowerGameMode::StaticClass, TEXT("/Script/ImaginePower"), TEXT("AImaginePowerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImaginePowerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
