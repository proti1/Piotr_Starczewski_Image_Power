// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/ImaginePowerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImaginePowerCharacter() {}
// Cross Module References
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerCharacter_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_AImaginePowerProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	IMAGINEPOWER_API UClass* Z_Construct_UClass_UPlayerInteractionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AImaginePowerCharacter::execSpawnMinion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMinion();
		P_NATIVE_END;
	}
	void AImaginePowerCharacter::StaticRegisterNativesAImaginePowerCharacter()
	{
		UClass* Class = AImaginePowerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnMinion", &AImaginePowerCharacter::execSpawnMinion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Funkcja do kalkulowania promienia\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Funkcja do kalkulowania promienia" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AImaginePowerCharacter, nullptr, "SpawnMinion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AImaginePowerCharacter_NoRegister()
	{
		return AImaginePowerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AImaginePowerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfMinions_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumberOfMinions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinionSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinionSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInteractLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInteractLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusInteractionWidgetRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusInteractionWidgetRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusInteractionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StatusInteractionWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImaginePowerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ImaginePower,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AImaginePowerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AImaginePowerCharacter_SpawnMinion, "SpawnMinion" }, // 78414793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ImaginePowerCharacter.h" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionClass_MetaData[] = {
		{ "Category", "References" },
		{ "Comment", "//Z tej klasy b\xc4\x99""d\xc4\x85 spawnowane miniony\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Z tej klasy b\xc4\x99""d\xc4\x85 spawnowane miniony" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionClass = { "MinionClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, MinionClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_InteractingActor_MetaData[] = {
		{ "Category", "References" },
		{ "Comment", "//Obecny aktor w interakcji z graczem\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Obecny aktor w interakcji z graczem" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_InteractingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_InteractingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxNumberOfMinions_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//Z tej klasy b\xc4\x99""d\xc4\x85 spawnowane miniony\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Z tej klasy b\xc4\x99""d\xc4\x85 spawnowane miniony" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxNumberOfMinions = { "MaxNumberOfMinions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, MaxNumberOfMinions), METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxNumberOfMinions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxNumberOfMinions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionSpawnDistance_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//Z tej klasy b\xc4\x99""d\xc4\x85 spawnowane miniony\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Z tej klasy b\xc4\x99""d\xc4\x85 spawnowane miniony" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionSpawnDistance = { "MinionSpawnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, MinionSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxInteractLength_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//Maksymalna d\xc5\x82ugo\xc5\x9b\xc4\x87 interakcji w Unreal Units\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Maksymalna d\xc5\x82ugo\xc5\x9b\xc4\x87 interakcji w Unreal Units" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxInteractLength = { "MaxInteractLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, MaxInteractLength), METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxInteractLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxInteractLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidgetRef_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//Referencja do widgeta\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Referencja do widgeta" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidgetRef = { "StatusInteractionWidgetRef", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, StatusInteractionWidgetRef), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidgetRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidgetRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//Widget informuj\xc4\x85""cy o mo\xc5\xbcliwo\xc5\x9b""ci interakcji\n" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Widget informuj\xc4\x85""cy o mo\xc5\xbcliwo\xc5\x9b""ci interakcji" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidget = { "StatusInteractionWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, StatusInteractionWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Whether to use motion controller location for aiming. */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AImaginePowerCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers = { "bUsingMotionControllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AImaginePowerCharacter), &Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, ProjectileClass), Z_Construct_UClass_AImaginePowerProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_GunOffset = { "GunOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_GunOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ImaginePowerCharacter" },
		{ "Comment", "/** Motion controller (left hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_L_MotionController = { "L_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_L_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ImaginePowerCharacter" },
		{ "Comment", "/** Motion controller (right hand) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_R_MotionController = { "R_MotionController", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_R_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on VR gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_MuzzleLocation = { "VR_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_Gun = { "VR_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Location on gun mesh where projectiles should spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_MuzzleLocation = { "FP_MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Gun mesh: 1st person view (seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_Gun = { "FP_Gun", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ImaginePowerCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AImaginePowerCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AImaginePowerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_InteractingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxNumberOfMinions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MinionSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_MaxInteractLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidgetRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_StatusInteractionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImaginePowerCharacter_Statics::NewProp_Mesh1P,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AImaginePowerCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AImaginePowerCharacter, IPlayerInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImaginePowerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImaginePowerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AImaginePowerCharacter_Statics::ClassParams = {
		&AImaginePowerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AImaginePowerCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AImaginePowerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AImaginePowerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AImaginePowerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AImaginePowerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AImaginePowerCharacter, 1999227316);
	template<> IMAGINEPOWER_API UClass* StaticClass<AImaginePowerCharacter>()
	{
		return AImaginePowerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AImaginePowerCharacter(Z_Construct_UClass_AImaginePowerCharacter, &AImaginePowerCharacter::StaticClass, TEXT("/Script/ImaginePower"), TEXT("AImaginePowerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImaginePowerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
