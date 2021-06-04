// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGINEPOWER_ObjectList_generated_h
#error "ObjectList.generated.h already included, missing '#pragma once' in ObjectList.h"
#endif
#define IMAGINEPOWER_ObjectList_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ImaginePower_Source_ImaginePower_ObjectList_h


#define FOREACH_ENUM_EOBJECTLIST(op) \
	op(EObjectList::OL_Nothing) \
	op(EObjectList::OL_Wood) \
	op(EObjectList::OL_Stone) \
	op(EObjectList::OL_Gold) \
	op(EObjectList::OL_Max) 

enum class EObjectList : uint8;
template<> IMAGINEPOWER_API UEnum* StaticEnum<EObjectList>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
