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
	DEFINE_FUNCTION(IMinionInterface::execPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMinionInterface::execLockState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockState_Implementation();
		P_NATIVE_END;
	}
	void IMinionInterface::LockState()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LockState instead.");
	}
	void IMinionInterface::PickUp()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PickUp instead.");
	}
	void UMinionInterface::StaticRegisterNativesUMinionInterface()
	{
		UClass* Class = UMinionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LockState", &IMinionInterface::execLockState },
			{ "PickUp", &IMinionInterface::execPickUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMinionInterface_LockState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionInterface_LockState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Zablokuj objekt przed interakcj\xc4\x85 podczas korzystania\n" },
		{ "ModuleRelativePath", "MinionInterface.h" },
		{ "ToolTip", "Zablokuj objekt przed interakcj\xc4\x85 podczas korzystania" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionInterface_LockState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionInterface, nullptr, "LockState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionInterface_LockState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionInterface_LockState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionInterface_LockState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMinionInterface_LockState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMinionInterface_PickUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMinionInterface_PickUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Podnie\xc5\x9b objekt\n" },
		{ "ModuleRelativePath", "MinionInterface.h" },
		{ "ToolTip", "Podnie\xc5\x9b objekt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionInterface_PickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionInterface, nullptr, "PickUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMinionInterface_PickUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionInterface_PickUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMinionInterface_PickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMinionInterface_PickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMinionInterface_NoRegister()
	{
		return UMinionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMinionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UMinionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinionInterface_LockState, "LockState" }, // 4230315781
		{ &Z_Construct_UFunction_UMinionInterface_PickUp, "PickUp" }, // 1775335687
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UMinionInterface, 3485700577);
	template<> IMAGINEPOWER_API UClass* StaticClass<UMinionInterface>()
	{
		return UMinionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMinionInterface(Z_Construct_UClass_UMinionInterface, &UMinionInterface::StaticClass, TEXT("/Script/ImaginePower"), TEXT("UMinionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionInterface);
	static FName NAME_UMinionInterface_LockState = FName(TEXT("LockState"));
	void IMinionInterface::Execute_LockState(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMinionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMinionInterface_LockState);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMinionInterface*)(O->GetNativeInterfaceAddress(UMinionInterface::StaticClass())))
		{
			I->LockState_Implementation();
		}
	}
	static FName NAME_UMinionInterface_PickUp = FName(TEXT("PickUp"));
	void IMinionInterface::Execute_PickUp(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMinionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMinionInterface_PickUp);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMinionInterface*)(O->GetNativeInterfaceAddress(UMinionInterface::StaticClass())))
		{
			I->PickUp_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
