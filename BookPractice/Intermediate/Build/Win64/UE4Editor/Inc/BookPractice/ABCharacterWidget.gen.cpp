// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BookPractice/public/ABCharacterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterWidget() {}
// Cross Module References
	BOOKPRACTICE_API UClass* Z_Construct_UClass_UABCharacterWidget_NoRegister();
	BOOKPRACTICE_API UClass* Z_Construct_UClass_UABCharacterWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_BookPractice();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UABCharacterWidget::StaticRegisterNativesUABCharacterWidget()
	{
	}
	UClass* Z_Construct_UClass_UABCharacterWidget_NoRegister()
	{
		return UABCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPProgressBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BookPractice,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABCharacterWidget.h" },
		{ "ModuleRelativePath", "public/ABCharacterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "public/ABCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar = { "HPProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABCharacterWidget, HPProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterWidget_Statics::NewProp_HPProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterWidget_Statics::ClassParams = {
		&UABCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UABCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABCharacterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABCharacterWidget, 3759476349);
	template<> BOOKPRACTICE_API UClass* StaticClass<UABCharacterWidget>()
	{
		return UABCharacterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABCharacterWidget(Z_Construct_UClass_UABCharacterWidget, &UABCharacterWidget::StaticClass, TEXT("/Script/BookPractice"), TEXT("UABCharacterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
