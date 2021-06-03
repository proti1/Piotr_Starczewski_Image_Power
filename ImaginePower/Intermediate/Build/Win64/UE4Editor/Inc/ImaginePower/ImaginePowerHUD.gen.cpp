// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/ImaginePowerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImaginePowerHUD() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerHUD_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	void AImaginePowerHUD::StaticRegisterNativesAImaginePowerHUD()
	{
	}
	UClass* Z_Construct_UClass_AImaginePowerHUD_NoRegister()
	{
		return AImaginePowerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AImaginePowerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImaginePowerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ImaginePowerHUD.h" },
		{ "ModuleRelativePath", "ImaginePowerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImaginePowerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImaginePowerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AImaginePowerHUD_Statics::ClassParams = {
		&AImaginePowerHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AImaginePowerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AImaginePowerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AImaginePowerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AImaginePowerHUD, 3122372891);
	template<> IMAGINEPOWER_API UClass* StaticClass<AImaginePowerHUD>()
	{
		return AImaginePowerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AImaginePowerHUD(Z_Construct_UClass_AImaginePowerHUD, &AImaginePowerHUD::StaticClass, TEXT("/Script/ImaginePower"), TEXT("AImaginePowerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImaginePowerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
