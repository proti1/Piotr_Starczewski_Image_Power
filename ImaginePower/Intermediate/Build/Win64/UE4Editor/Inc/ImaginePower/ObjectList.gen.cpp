// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImaginePower/ObjectList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectList() {}
// Cross Module References
	IMAGINEPOWER_API UEnum* Z_Construct_UEnum_ImaginePower_EObjectList();
	UPackage* Z_Construct_UPackage__Script_ImaginePower();
// End Cross Module References
	static UEnum* EObjectList_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImaginePower_EObjectList, Z_Construct_UPackage__Script_ImaginePower(), TEXT("EObjectList"));
		}
		return Singleton;
	}
	template<> IMAGINEPOWER_API UEnum* StaticEnum<EObjectList>()
	{
		return EObjectList_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectList(EObjectList_StaticEnum, TEXT("/Script/ImaginePower"), TEXT("EObjectList"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImaginePower_EObjectList_Hash() { return 2503377164U; }
	UEnum* Z_Construct_UEnum_ImaginePower_EObjectList()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImaginePower();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectList"), 0, Get_Z_Construct_UEnum_ImaginePower_EObjectList_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectList::OL_Nothing", (int64)EObjectList::OL_Nothing },
				{ "EObjectList::OL_Wood", (int64)EObjectList::OL_Wood },
				{ "EObjectList::OL_Stone", (int64)EObjectList::OL_Stone },
				{ "EObjectList::OL_Gold", (int64)EObjectList::OL_Gold },
				{ "EObjectList::OL_Max", (int64)EObjectList::OL_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Zadeklaruj klas\xc4\x99 enum EObjectList i wype\xc5\x82nij j\xc4\x85 elementami\n" },
				{ "ModuleRelativePath", "ObjectList.h" },
				{ "OL_Gold.DisplayName", "Gold" },
				{ "OL_Gold.Name", "EObjectList::OL_Gold" },
				{ "OL_Max.Hidden", "" },
				{ "OL_Max.Name", "EObjectList::OL_Max" },
				{ "OL_Nothing.DisplayName", "Nothing" },
				{ "OL_Nothing.Name", "EObjectList::OL_Nothing" },
				{ "OL_Stone.DisplayName", "Rain" },
				{ "OL_Stone.Name", "EObjectList::OL_Stone" },
				{ "OL_Wood.DisplayName", "Wood" },
				{ "OL_Wood.Name", "EObjectList::OL_Wood" },
				{ "ToolTip", "Zadeklaruj klas\xc4\x99 enum EObjectList i wype\xc5\x82nij j\xc4\x85 elementami" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImaginePower,
				nullptr,
				"EObjectList",
				"EObjectList",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
