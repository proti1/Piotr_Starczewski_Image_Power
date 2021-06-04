// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/InteractionMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionMenu() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UInteractionMenu_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UInteractionMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
	IMAGINEPOWER_API UEnum* Z_Construct_UEnum_ImaginePower_EObjectList();
// End Cross Module References
	void UInteractionMenu::StaticRegisterNativesUInteractionMenu()
	{
	}
	UClass* Z_Construct_UClass_UInteractionMenu_NoRegister()
	{
		return UInteractionMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToPick_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectToPick;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectToPick_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractionMenu.h" },
		{ "ModuleRelativePath", "InteractionMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick_MetaData[] = {
		{ "Category", "InteractionMenu" },
		{ "Comment", "//Zadeklarowany Enum z ObjectList.h\n" },
		{ "ModuleRelativePath", "InteractionMenu.h" },
		{ "ToolTip", "Zadeklarowany Enum z ObjectList.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick = { "ObjectToPick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionMenu, ObjectToPick), Z_Construct_UEnum_ImaginePower_EObjectList, METADATA_PARAMS(Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionMenu_Statics::NewProp_ObjectToPick_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionMenu_Statics::ClassParams = {
		&UInteractionMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractionMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionMenu, 3378850799);
	template<> IMAGINEPOWER_API UClass* StaticClass<UInteractionMenu>()
	{
		return UInteractionMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionMenu(Z_Construct_UClass_UInteractionMenu, &UInteractionMenu::StaticClass, TEXT("/Script/ImaginePower"), TEXT("UInteractionMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
