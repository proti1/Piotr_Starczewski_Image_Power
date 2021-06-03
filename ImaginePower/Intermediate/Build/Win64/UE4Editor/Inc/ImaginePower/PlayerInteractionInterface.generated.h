// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGINEPOWER_PlayerInteractionInterface_generated_h
#error "PlayerInteractionInterface.generated.h already included, missing '#pragma once' in PlayerInteractionInterface.h"
#endif
#define IMAGINEPOWER_PlayerInteractionInterface_generated_h

#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_SPARSE_DATA
#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_RPC_WRAPPERS
#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IMAGINEPOWER_API UPlayerInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGINEPOWER_API, UPlayerInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IMAGINEPOWER_API UPlayerInteractionInterface(UPlayerInteractionInterface&&); \
	IMAGINEPOWER_API UPlayerInteractionInterface(const UPlayerInteractionInterface&); \
public:


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IMAGINEPOWER_API UPlayerInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IMAGINEPOWER_API UPlayerInteractionInterface(UPlayerInteractionInterface&&); \
	IMAGINEPOWER_API UPlayerInteractionInterface(const UPlayerInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGINEPOWER_API, UPlayerInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInteractionInterface)


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerInteractionInterface(); \
	friend struct Z_Construct_UClass_UPlayerInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ImaginePower"), IMAGINEPOWER_API) \
	DECLARE_SERIALIZER(UPlayerInteractionInterface)


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerInteractionInterface() {} \
public: \
	typedef UPlayerInteractionInterface UClassType; \
	typedef IPlayerInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerInteractionInterface() {} \
public: \
	typedef UPlayerInteractionInterface UClassType; \
	typedef IPlayerInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_10_PROLOG
#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_RPC_WRAPPERS \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGINEPOWER_API UClass* StaticClass<class UPlayerInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_PlayerInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
