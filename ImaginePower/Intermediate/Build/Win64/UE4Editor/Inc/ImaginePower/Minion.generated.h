// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EObjectList : uint8;
#ifdef IMAGINEPOWER_Minion_generated_h
#error "Minion.generated.h already included, missing '#pragma once' in Minion.h"
#endif
#define IMAGINEPOWER_Minion_generated_h

#define ImaginePower_Source_ImaginePower_Minion_h_17_SPARSE_DATA
#define ImaginePower_Source_ImaginePower_Minion_h_17_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execStartSearchingItems_Implementation); \
	DECLARE_FUNCTION(execOnInteract);


#define ImaginePower_Source_ImaginePower_Minion_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartSearchingItems_Implementation); \
	DECLARE_FUNCTION(execOnInteract);


#define ImaginePower_Source_ImaginePower_Minion_h_17_EVENT_PARMS
#define ImaginePower_Source_ImaginePower_Minion_h_17_CALLBACK_WRAPPERS
#define ImaginePower_Source_ImaginePower_Minion_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinion(); \
	friend struct Z_Construct_UClass_AMinion_Statics; \
public: \
	DECLARE_CLASS(AMinion, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AMinion) \
	virtual UObject* _getUObject() const override { return const_cast<AMinion*>(this); }


#define ImaginePower_Source_ImaginePower_Minion_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMinion(); \
	friend struct Z_Construct_UClass_AMinion_Statics; \
public: \
	DECLARE_CLASS(AMinion, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AMinion) \
	virtual UObject* _getUObject() const override { return const_cast<AMinion*>(this); }


#define ImaginePower_Source_ImaginePower_Minion_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinion(AMinion&&); \
	NO_API AMinion(const AMinion&); \
public:


#define ImaginePower_Source_ImaginePower_Minion_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinion(AMinion&&); \
	NO_API AMinion(const AMinion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinion)


#define ImaginePower_Source_ImaginePower_Minion_h_17_PRIVATE_PROPERTY_OFFSET
#define ImaginePower_Source_ImaginePower_Minion_h_13_PROLOG \
	ImaginePower_Source_ImaginePower_Minion_h_17_EVENT_PARMS


#define ImaginePower_Source_ImaginePower_Minion_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_Minion_h_17_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_Minion_h_17_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_Minion_h_17_RPC_WRAPPERS \
	ImaginePower_Source_ImaginePower_Minion_h_17_CALLBACK_WRAPPERS \
	ImaginePower_Source_ImaginePower_Minion_h_17_INCLASS \
	ImaginePower_Source_ImaginePower_Minion_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_Minion_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_Minion_h_17_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_Minion_h_17_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_Minion_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_Minion_h_17_CALLBACK_WRAPPERS \
	ImaginePower_Source_ImaginePower_Minion_h_17_INCLASS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_Minion_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGINEPOWER_API UClass* StaticClass<class AMinion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_Minion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
