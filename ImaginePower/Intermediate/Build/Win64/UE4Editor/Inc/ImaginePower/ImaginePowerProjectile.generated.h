// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef IMAGINEPOWER_ImaginePowerProjectile_generated_h
#error "ImaginePowerProjectile.generated.h already included, missing '#pragma once' in ImaginePowerProjectile.h"
#endif
#define IMAGINEPOWER_ImaginePowerProjectile_generated_h

#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_SPARSE_DATA
#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAImaginePowerProjectile(); \
	friend struct Z_Construct_UClass_AImaginePowerProjectile_Statics; \
public: \
	DECLARE_CLASS(AImaginePowerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AImaginePowerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAImaginePowerProjectile(); \
	friend struct Z_Construct_UClass_AImaginePowerProjectile_Statics; \
public: \
	DECLARE_CLASS(AImaginePowerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AImaginePowerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AImaginePowerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AImaginePowerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImaginePowerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImaginePowerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImaginePowerProjectile(AImaginePowerProjectile&&); \
	NO_API AImaginePowerProjectile(const AImaginePowerProjectile&); \
public:


#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AImaginePowerProjectile(AImaginePowerProjectile&&); \
	NO_API AImaginePowerProjectile(const AImaginePowerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AImaginePowerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AImaginePowerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AImaginePowerProjectile)


#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AImaginePowerProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AImaginePowerProjectile, ProjectileMovement); }


#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_9_PROLOG
#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_RPC_WRAPPERS \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_INCLASS \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGINEPOWER_API UClass* StaticClass<class AImaginePowerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_ImaginePowerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
