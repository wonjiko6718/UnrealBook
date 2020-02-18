// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BookPractice/public/ABAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAnimInstance() {}
// Cross Module References
	BOOKPRACTICE_API UClass* Z_Construct_UClass_UABAnimInstance_NoRegister();
	BOOKPRACTICE_API UClass* Z_Construct_UClass_UABAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_BookPractice();
	BOOKPRACTICE_API UFunction* Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck();
	BOOKPRACTICE_API UFunction* Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UABAnimInstance::StaticRegisterNativesUABAnimInstance()
	{
		UClass* Class = UABAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackHitCheck", &UABAnimInstance::execAnimNotify_AttackHitCheck },
			{ "AnimNotify_NextAttackCheck", &UABAnimInstance::execAnimNotify_NextAttackCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAnimInstance, nullptr, "AnimNotify_AttackHitCheck", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABAnimInstance, nullptr, "AnimNotify_NextAttackCheck", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABAnimInstance_NoRegister()
	{
		return UABAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UABAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_BookPractice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABAnimInstance_AnimNotify_AttackHitCheck, "AnimNotify_AttackHitCheck" }, // 3333115757
		{ &Z_Construct_UFunction_UABAnimInstance_AnimNotify_NextAttackCheck, "AnimNotify_NextAttackCheck" }, // 126350095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ABAnimInstance.h" },
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UABAnimInstance*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABAnimInstance), &Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0040000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABAnimInstance, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_AttackMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_AttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UABAnimInstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABAnimInstance), &Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "public/ABAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed = { "CurrentPawnSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABAnimInstance, CurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_AttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_IsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABAnimInstance_Statics::NewProp_CurrentPawnSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABAnimInstance_Statics::ClassParams = {
		&UABAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UABAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABAnimInstance, 3683490434);
	template<> BOOKPRACTICE_API UClass* StaticClass<UABAnimInstance>()
	{
		return UABAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABAnimInstance(Z_Construct_UClass_UABAnimInstance, &UABAnimInstance::StaticClass, TEXT("/Script/BookPractice"), TEXT("UABAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
