// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/PlayerInteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInteractionInterface() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UPlayerInteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerInteractionInterface::execOnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation();
		P_NATIVE_END;
	}
	void IPlayerInteractionInterface::OnInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void UPlayerInteractionInterface::StaticRegisterNativesUPlayerInteractionInterface()
	{
		UClass* Class = UPlayerInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &IPlayerInteractionInterface::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Interaction" },
		{ "ModuleRelativePath", "PlayerInteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInteractionInterface, nullptr, "OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister()
	{
		return UPlayerInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInteractionInterface_OnInteract, "OnInteract" }, // 2520826561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerInteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerInteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInteractionInterface_Statics::ClassParams = {
		&UPlayerInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInteractionInterface, 1207463887);
	template<> IMAGINEPOWER_API UClass* StaticClass<UPlayerInteractionInterface>()
	{
		return UPlayerInteractionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInteractionInterface(Z_Construct_UClass_UPlayerInteractionInterface, &UPlayerInteractionInterface::StaticClass, TEXT("/Script/ImaginePower"), TEXT("UPlayerInteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInteractionInterface);
	static FName NAME_UPlayerInteractionInterface_OnInteract = FName(TEXT("OnInteract"));
	void IPlayerInteractionInterface::Execute_OnInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerInteractionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerInteractionInterface_OnInteract);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerInteractionInterface*)(O->GetNativeInterfaceAddress(UPlayerInteractionInterface::StaticClass())))
		{
			I->OnInteract_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
