// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGINEPOWER_ImaginePowerCharacter_generated_h
#error "ImaginePowerCharacter.generated.h already included, missing '#pragma once' in ImaginePowerCharacter.h"
#endif
#define IMAGINEPOWER_ImaginePowerCharacter_generated_h

#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_SPARSE_DATA
#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnMinion);


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnMinion);


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAImaginePowerCharacter(); \
	friend struct Z_Construct_UClass_AImaginePowerCharacter_Statics; \
public: \
	DECLARE_CLASS(AImaginePowerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AImaginePowerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AImaginePowerCharacter*>(this); }


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAImaginePowerCharacter(); \
	friend struct Z_Construct_UClass_AImaginePowerCharacter_Statics; \
public: \
	DECLARE_CLASS(AImaginePowerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AImaginePowerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AImaginePowerCharacter*>(this); }


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AImaginePowerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AImaginePowerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImaginePowerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImaginePowerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImaginePowerCharacter(AImaginePowerCharacter&&); \
	NO_API AImaginePowerCharacter(const AImaginePowerCharacter&); \
public:


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImaginePowerCharacter(AImaginePowerCharacter&&); \
	NO_API AImaginePowerCharacter(const AImaginePowerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImaginePowerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImaginePowerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AImaginePowerCharacter)


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AImaginePowerCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AImaginePowerCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AImaginePowerCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AImaginePowerCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AImaginePowerCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AImaginePowerCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AImaginePowerCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AImaginePowerCharacter, L_MotionController); }


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_12_PROLOG
#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_RPC_WRAPPERS \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_INCLASS \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGINEPOWER_API UClass* StaticClass<class AImaginePowerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_ImaginePowerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
