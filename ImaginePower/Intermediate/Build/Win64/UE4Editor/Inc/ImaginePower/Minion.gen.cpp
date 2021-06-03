// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/Minion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinion() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AMinion_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AMinion();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	void AMinion::StaticRegisterNativesAMinion()
	{
	}
	UClass* Z_Construct_UClass_AMinion_NoRegister()
	{
		return AMinion::StaticClass();
	}
	struct Z_Construct_UClass_AMinion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minion.h" },
		{ "ModuleRelativePath", "Minion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Statics::ClassParams = {
		&AMinion::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinion, 771198559);
	template<> IMAGINEPOWER_API UClass* StaticClass<AMinion>()
	{
		return AMinion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinion(Z_Construct_UClass_AMinion, &AMinion::StaticClass, TEXT("/Script/ImaginePower"), TEXT("AMinion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
