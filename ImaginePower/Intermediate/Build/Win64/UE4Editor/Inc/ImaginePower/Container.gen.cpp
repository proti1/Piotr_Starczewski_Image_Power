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
	IMAGINEPOWER_API UEnum* Z_Construct_UEnum_ImaginePower_EObjectList();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UMinionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AContainer::execSetAsBusy)
	{
		P_GET_UBOOL(Z_Param_bShouldBeBusy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsBusy(Z_Param_bShouldBeBusy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AContainer::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AContainer_PickUp = FName(TEXT("PickUp"));
	void AContainer::PickUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AContainer_PickUp),NULL);
	}
	void AContainer::StaticRegisterNativesAContainer()
	{
		UClass* Class = AContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickUp", &AContainer::execPickUp },
			{ "SetAsBusy", &AContainer::execSetAsBusy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AContainer_PickUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainer_PickUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interface" },
		{ "Comment", "//Zdefiniuj funkcj\xc4\x99 interfejsu IMInionInterface\n" },
		{ "ModuleRelativePath", "Container.h" },
		{ "ToolTip", "Zdefiniuj funkcj\xc4\x99 interfejsu IMInionInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainer_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainer, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AContainer_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainer_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AContainer_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AContainer_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AContainer_SetAsBusy_Statics
	{
		struct Container_eventSetAsBusy_Parms
		{
			bool bShouldBeBusy;
		};
		static void NewProp_bShouldBeBusy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeBusy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AContainer_SetAsBusy_Statics::NewProp_bShouldBeBusy_SetBit(void* Obj)
	{
		((Container_eventSetAsBusy_Parms*)Obj)->bShouldBeBusy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AContainer_SetAsBusy_Statics::NewProp_bShouldBeBusy = { "bShouldBeBusy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Container_eventSetAsBusy_Parms), &Z_Construct_UFunction_AContainer_SetAsBusy_Statics::NewProp_bShouldBeBusy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContainer_SetAsBusy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContainer_SetAsBusy_Statics::NewProp_bShouldBeBusy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContainer_SetAsBusy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic" },
		{ "Comment", "//Funkcja do zablokowania itemu\n" },
		{ "ModuleRelativePath", "Container.h" },
		{ "ToolTip", "Funkcja do zablokowania itemu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AContainer_SetAsBusy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContainer, nullptr, "SetAsBusy", nullptr, nullptr, sizeof(Container_eventSetAsBusy_Parms), Z_Construct_UFunction_AContainer_SetAsBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainer_SetAsBusy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AContainer_SetAsBusy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AContainer_SetAsBusy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AContainer_SetAsBusy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AContainer_SetAsBusy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AContainer_NoRegister()
	{
		return AContainer::StaticClass();
	}
	struct Z_Construct_UClass_AContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBusy_MetaData[];
#endif
		static void NewProp_bIsBusy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBusy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeededObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NeededObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NeededObject_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AContainer_PickUp, "PickUp" }, // 3362063421
		{ &Z_Construct_UFunction_AContainer_SetAsBusy, "SetAsBusy" }, // 4051780088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Container.h" },
		{ "ModuleRelativePath", "Container.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy_MetaData[] = {
		{ "Category", "Logic" },
		{ "Comment", "//Nie mo\xc5\xbcna interaktowa\xc4\x87 z obiektieem kiedy jest \"zaklepany\" przez innego aktora\n" },
		{ "ModuleRelativePath", "Container.h" },
		{ "ToolTip", "Nie mo\xc5\xbcna interaktowa\xc4\x87 z obiektieem kiedy jest \"zaklepany\" przez innego aktora" },
	};
#endif
	void Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy_SetBit(void* Obj)
	{
		((AContainer*)Obj)->bIsBusy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy = { "bIsBusy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AContainer), &Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject_MetaData[] = {
		{ "Category", "Container" },
		{ "Comment", "//Zadeklarowany Enum z ObjectList.h\n" },
		{ "ModuleRelativePath", "Container.h" },
		{ "ToolTip", "Zadeklarowany Enum z ObjectList.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject = { "NeededObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AContainer, NeededObject), Z_Construct_UEnum_ImaginePower_EObjectList, METADATA_PARAMS(Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainer_Statics::NewProp_bIsBusy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContainer_Statics::NewProp_NeededObject_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AContainer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMinionInterface_NoRegister, (int32)VTABLE_OFFSET(AContainer, IMinionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AContainer_Statics::ClassParams = {
		&AContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AContainer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AContainer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AContainer, 3922558256);
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
