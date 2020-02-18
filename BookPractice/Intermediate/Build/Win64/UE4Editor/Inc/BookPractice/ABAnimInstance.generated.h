// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOKPRACTICE_ABAnimInstance_generated_h
#error "ABAnimInstance.generated.h already included, missing '#pragma once' in ABAnimInstance.h"
#endif
#define BOOKPRACTICE_ABAnimInstance_generated_h

#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttackCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_NextAttackCheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHitCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackHitCheck(); \
		P_NATIVE_END; \
	}


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttackCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_NextAttackCheck(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHitCheck) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_AttackHitCheck(); \
		P_NATIVE_END; \
	}


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABAnimInstance(); \
	friend struct Z_Construct_UClass_UABAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UABAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(UABAnimInstance)


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUABAnimInstance(); \
	friend struct Z_Construct_UClass_UABAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UABAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(UABAnimInstance)


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABAnimInstance(UABAnimInstance&&); \
	NO_API UABAnimInstance(const UABAnimInstance&); \
public:


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABAnimInstance(UABAnimInstance&&); \
	NO_API UABAnimInstance(const UABAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABAnimInstance)


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UABAnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UABAnimInstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UABAnimInstance, AttackMontage); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(UABAnimInstance, IsDead); }


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_14_PROLOG
#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_INCLASS \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class UABAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_public_ABAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
