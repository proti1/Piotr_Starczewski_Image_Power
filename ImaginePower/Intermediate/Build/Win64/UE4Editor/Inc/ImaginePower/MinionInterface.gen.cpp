// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/MinionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionInterface() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UMinionInterface_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UMinionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	void UMinionInterface::StaticRegisterNativesUMinionInterface()
	{
	}
	UClass* Z_Construct_UClass_UMinionInterface_NoRegister()
	{
		return UMinionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMinionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MinionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMinionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMinionInterface_Statics::ClassParams = {
		&UMinionInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMinionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMinionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMinionInterface, 1828749360);
	template<> IMAGINEPOWER_API UClass* StaticClass<UMinionInterface>()
	{
		return UMinionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMinionInterface(Z_Construct_UClass_UMinionInterface, &UMinionInterface::StaticClass, TEXT("/Script/ImaginePower"), TEXT("UMinionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
