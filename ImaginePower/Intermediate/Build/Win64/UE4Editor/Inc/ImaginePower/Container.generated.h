// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGINEPOWER_Container_generated_h
#error "Container.generated.h already included, missing '#pragma once' in Container.h"
#endif
#define IMAGINEPOWER_Container_generated_h

#define ImaginePower_Source_ImaginePower_Container_h_14_SPARSE_DATA
#define ImaginePower_Source_ImaginePower_Container_h_14_RPC_WRAPPERS \
	virtual void PickUp_Implementation(); \
 \
	DECLARE_FUNCTION(execSetAsBusy); \
	DECLARE_FUNCTION(execPickUp);


#define ImaginePower_Source_ImaginePower_Container_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAsBusy); \
	DECLARE_FUNCTION(execPickUp);


#define ImaginePower_Source_ImaginePower_Container_h_14_EVENT_PARMS
#define ImaginePower_Source_ImaginePower_Container_h_14_CALLBACK_WRAPPERS
#define ImaginePower_Source_ImaginePower_Container_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAContainer(); \
	friend struct Z_Construct_UClass_AContainer_Statics; \
public: \
	DECLARE_CLASS(AContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AContainer) \
	virtual UObject* _getUObject() const override { return const_cast<AContainer*>(this); }


#define ImaginePower_Source_ImaginePower_Container_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAContainer(); \
	friend struct Z_Construct_UClass_AContainer_Statics; \
public: \
	DECLARE_CLASS(AContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImaginePower"), NO_API) \
	DECLARE_SERIALIZER(AContainer) \
	virtual UObject* _getUObject() const override { return const_cast<AContainer*>(this); }


#define ImaginePower_Source_ImaginePower_Container_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AContainer(AContainer&&); \
	NO_API AContainer(const AContainer&); \
public:


#define ImaginePower_Source_ImaginePower_Container_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AContainer(AContainer&&); \
	NO_API AContainer(const AContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AContainer)


#define ImaginePower_Source_ImaginePower_Container_h_14_PRIVATE_PROPERTY_OFFSET
#define ImaginePower_Source_ImaginePower_Container_h_11_PROLOG \
	ImaginePower_Source_ImaginePower_Container_h_14_EVENT_PARMS


#define ImaginePower_Source_ImaginePower_Container_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_Container_h_14_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_Container_h_14_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_Container_h_14_RPC_WRAPPERS \
	ImaginePower_Source_ImaginePower_Container_h_14_CALLBACK_WRAPPERS \
	ImaginePower_Source_ImaginePower_Container_h_14_INCLASS \
	ImaginePower_Source_ImaginePower_Container_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ImaginePower_Source_ImaginePower_Container_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ImaginePower_Source_ImaginePower_Container_h_14_PRIVATE_PROPERTY_OFFSET \
	ImaginePower_Source_ImaginePower_Container_h_14_SPARSE_DATA \
	ImaginePower_Source_ImaginePower_Container_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_Container_h_14_CALLBACK_WRAPPERS \
	ImaginePower_Source_ImaginePower_Container_h_14_INCLASS_NO_PURE_DECLS \
	ImaginePower_Source_ImaginePower_Container_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGINEPOWER_API UClass* StaticClass<class AContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_Container_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
