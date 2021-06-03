// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/Container.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainer() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AContainer_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	void AContainer::StaticRegisterNativesAContainer()
	{
	}
	UClass* Z_Construct_UClass_AContainer_NoRegister()
	{
		return AContainer::StaticClass();
	}
	struct Z_Construct_UClass_AContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Container.h" },
		{ "ModuleRelativePath", "Container.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AContainer_Statics::ClassParams = {
		&AContainer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AContainer, 3849723766);
	template<> IMAGINEPOWER_API UClass* StaticClass<AContainer>()
	{
		return AContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AContainer(Z_Construct_UClass_AContainer, &AContainer::StaticClass, TEXT("/Script/ImaginePower"), TEXT("AContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
