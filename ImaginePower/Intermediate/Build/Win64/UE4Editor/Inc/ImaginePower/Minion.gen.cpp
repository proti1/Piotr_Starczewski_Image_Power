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
	IMAGINEPOWER_API UEnum* Z_Construct_UEnum_ImaginePower_EObjectList();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UMinionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMinion::execStartSearchingItems_Implementation)
	{
		P_GET_ENUM(EObjectList,Z_Param_ObjectsToSearch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSearchingItems_Implementation(EObjectList(Z_Param_ObjectsToSearch));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMinion::execOnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMinion_OnInteract = FName(TEXT("OnInteract"));
	void AMinion::OnInteract()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMinion_OnInteract),NULL);
	}
	void AMinion::StaticRegisterNativesAMinion()
	{
		UClass* Class = AMinion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &AMinion::execOnInteract },
			{ "StartSearchingItems_Implementation", &AMinion::execStartSearchingItems_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMinion_OnInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinion_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Interaction" },
		{ "Comment", "//Zdefiniuj funkcj\xc4\x99 interfejsu IPlayerInteractionInterface\n" },
		{ "ModuleRelativePath", "Minion.h" },
		{ "ToolTip", "Zdefiniuj funkcj\xc4\x99 interfejsu IPlayerInteractionInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinion_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinion_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinion_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics
	{
		struct Minion_eventStartSearchingItems_Implementation_Parms
		{
			EObjectList ObjectsToSearch;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectsToSearch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectsToSearch_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::NewProp_ObjectsToSearch = { "ObjectsToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Minion_eventStartSearchingItems_Implementation_Parms, ObjectsToSearch), Z_Construct_UEnum_ImaginePower_EObjectList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::NewProp_ObjectsToSearch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::NewProp_ObjectsToSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::NewProp_ObjectsToSearch_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "//Funkcja do szukania, niezaimplementowana\n" },
		{ "ModuleRelativePath", "Minion.h" },
		{ "ToolTip", "Funkcja do szukania, niezaimplementowana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMinion, nullptr, "StartSearchingItems_Implementation", nullptr, nullptr, sizeof(Minion_eventStartSearchingItems_Implementation_Parms), Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMinion_NoRegister()
	{
		return AMinion::StaticClass();
	}
	struct Z_Construct_UClass_AMinion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetToDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBusy_MetaData[];
#endif
		static void NewProp_bIsBusy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBusy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchedObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchedObject_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMinion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMinion_OnInteract, "OnInteract" }, // 1814432996
		{ &Z_Construct_UFunction_AMinion_StartSearchingItems_Implementation, "StartSearchingItems_Implementation" }, // 905604078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Minion.h" },
		{ "ModuleRelativePath", "Minion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinion_Statics::NewProp_WidgetRef_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//Referencja do widgeta\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Minion.h" },
		{ "ToolTip", "Referencja do widgeta" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_WidgetRef = { "WidgetRef", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinion, WidgetRef), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMinion_Statics::NewProp_WidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::NewProp_WidgetRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinion_Statics::NewProp_WidgetToDisplay_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//Widget do wy\xc5\x9bwietlenia po interakcji\n" },
		{ "ModuleRelativePath", "Minion.h" },
		{ "ToolTip", "Widget do wy\xc5\x9bwietlenia po interakcji" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_WidgetToDisplay = { "WidgetToDisplay", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinion, WidgetToDisplay), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMinion_Statics::NewProp_WidgetToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::NewProp_WidgetToDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//Je\xc5\x9bli wykonuje czynno\xc5\x9b\xc4\x87 ustaw aktora jako zaj\xc4\x99ty\n" },
		{ "ModuleRelativePath", "Minion.h" },
		{ "ToolTip", "Je\xc5\x9bli wykonuje czynno\xc5\x9b\xc4\x87 ustaw aktora jako zaj\xc4\x99ty" },
	};
#endif
	void Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy_SetBit(void* Obj)
	{
		((AMinion*)Obj)->bIsBusy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy = { "bIsBusy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMinion), &Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//Zadeklarowany Enum z ObjectList.h\n" },
		{ "ModuleRelativePath", "Minion.h" },
		{ "ToolTip", "Zadeklarowany Enum z ObjectList.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject = { "SearchedObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMinion, SearchedObject), Z_Construct_UEnum_ImaginePower_EObjectList, METADATA_PARAMS(Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_WidgetRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_WidgetToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_bIsBusy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_SearchedObject_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMinion_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AMinion, IPlayerInteractionInterface), false },
			{ Z_Construct_UClass_UMinionInterface_NoRegister, (int32)VTABLE_OFFSET(AMinion, IMinionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Statics::ClassParams = {
		&AMinion::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMinion_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AMinion, 1867947043);
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
