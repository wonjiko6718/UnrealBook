// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BookPractice/public/BookPracticeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookPracticeGameMode() {}
// Cross Module References
	BOOKPRACTICE_API UClass* Z_Construct_UClass_ABookPracticeGameMode_NoRegister();
	BOOKPRACTICE_API UClass* Z_Construct_UClass_ABookPracticeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BookPractice();
// End Cross Module References
	void ABookPracticeGameMode::StaticRegisterNativesABookPracticeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABookPracticeGameMode_NoRegister()
	{
		return ABookPracticeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABookPracticeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABookPracticeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BookPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABookPracticeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BookPracticeGameMode.h" },
		{ "ModuleRelativePath", "public/BookPracticeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABookPracticeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABookPracticeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABookPracticeGameMode_Statics::ClassParams = {
		&ABookPracticeGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABookPracticeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABookPracticeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABookPracticeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABookPracticeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABookPracticeGameMode, 4181913905);
	template<> BOOKPRACTICE_API UClass* StaticClass<ABookPracticeGameMode>()
	{
		return ABookPracticeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABookPracticeGameMode(Z_Construct_UClass_ABookPracticeGameMode, &ABookPracticeGameMode::StaticClass, TEXT("/Script/BookPractice"), TEXT("ABookPracticeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABookPracticeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
