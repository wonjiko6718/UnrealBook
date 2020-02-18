// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BookPractice/public/ABGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameInstance() {}
// Cross Module References
	BOOKPRACTICE_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData();
	UPackage* Z_Construct_UPackage__Script_BookPractice();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	BOOKPRACTICE_API UClass* Z_Construct_UClass_UABGameInstance_NoRegister();
	BOOKPRACTICE_API UClass* Z_Construct_UClass_UABGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FABCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BOOKPRACTICE_API uint32 Get_Z_Construct_UScriptStruct_FABCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FABCharacterData, Z_Construct_UPackage__Script_BookPractice(), TEXT("ABCharacterData"), sizeof(FABCharacterData), Get_Z_Construct_UScriptStruct_FABCharacterData_Hash());
	}
	return Singleton;
}
template<> BOOKPRACTICE_API UScriptStruct* StaticStruct<FABCharacterData>()
{
	return FABCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FABCharacterData(FABCharacterData::StaticStruct, TEXT("/Script/BookPractice"), TEXT("ABCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_BookPractice_StaticRegisterNativesFABCharacterData
{
	FScriptStruct_BookPractice_StaticRegisterNativesFABCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ABCharacterData")),new UScriptStruct::TCppStructOps<FABCharacterData>);
	}
} ScriptStruct_BookPractice_StaticRegisterNativesFABCharacterData;
	struct Z_Construct_UScriptStruct_FABCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DropExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FABCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FABCharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp = { "NextExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FABCharacterData, NextExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp = { "DropExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FABCharacterData, DropExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FABCharacterData, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FABCharacterData, MaxHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FABCharacterData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_NextExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_DropExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FABCharacterData_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FABCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BookPractice,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ABCharacterData",
		sizeof(FABCharacterData),
		alignof(FABCharacterData),
		Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FABCharacterData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FABCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FABCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FABCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BookPractice();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ABCharacterData"), sizeof(FABCharacterData), Get_Z_Construct_UScriptStruct_FABCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FABCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FABCharacterData_Hash() { return 2068299855U; }
	void UABGameInstance::StaticRegisterNativesUABGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UABGameInstance_NoRegister()
	{
		return UABGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UABGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ABCharacterTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ABCharacterTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_BookPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABGameInstance.h" },
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable_MetaData[] = {
		{ "ModuleRelativePath", "public/ABGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable = { "ABCharacterTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABGameInstance, ABCharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABGameInstance_Statics::NewProp_ABCharacterTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABGameInstance_Statics::ClassParams = {
		&UABGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UABGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABGameInstance, 366481511);
	template<> BOOKPRACTICE_API UClass* StaticClass<UABGameInstance>()
	{
		return UABGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABGameInstance(Z_Construct_UClass_UABGameInstance, &UABGameInstance::StaticClass, TEXT("/Script/BookPractice"), TEXT("UABGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
