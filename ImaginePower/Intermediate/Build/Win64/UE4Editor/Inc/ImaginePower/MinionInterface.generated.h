// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGINEPOWER_MinionInterface_generated_h
#error "MinionInterface.generated.h already included, missing '#pragma once' in MinionInterface.h"
#endif
#define IMAGINEPOWER_MinionInterface_generated_h

#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_SPARSE_DATA
#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_RPC_WRAPPERS
#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IMAGINEPOWER_API UMinionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGINEPOWER_API, UMinionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IMAGINEPOWER_API UMinionInterface(UMinionInterface&&); \
	IMAGINEPOWER_API UMinionInterface(const UMinionInterface&); \
public:


#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IMAGINEPOWER_API UMinionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IMAGINEPOWER_API UMinionInterface(UMinionInterface&&); \
	IMAGINEPOWER_API UMinionInterface(const UMinionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IMAGINEPOWER_API, UMinionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMinionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMinionInterface)


#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMinionInterface(); \
	friend struct Z_Construct_UClass_UMinionInterface_Statics; \
public: \
	DECLARE_CLASS(UMinionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ImaginePower"), IMAGINEPOWER_API) \
	DECLARE_SERIALIZER(UMinionInterface)


#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMinionInterface() {} \
public: \
	typedef UMinionInterface UClassType; \
	typedef IMinionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ImaginePower_Source_ImaginePower_MinionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMinionInterface() {} \
public: \
	typedef UMinionInterface UClassType; \
	typedef IMinionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ImaginePower_Source_ImaginePower_MinionInterface_h_10_PROLOG
#define ImaginePower_Source_ImaginePower_MinionInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_RPC_WRAPPERS \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_MinionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_MinionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGINEPOWER_API UClass* StaticClass<class UMinionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_MinionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
