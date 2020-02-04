// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef BOOKPRACTICE_ABCharacter_generated_h
#error "ABCharacter.generated.h already included, missing '#pragma once' in ABCharacter.h"
#endif
#define BOOKPRACTICE_ABCharacter_generated_h

#define BookPractice_Source_BookPractice_ABCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define BookPractice_Source_BookPractice_ABCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define BookPractice_Source_BookPractice_ABCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABCharacter(); \
	friend struct Z_Construct_UClass_AABCharacter_Statics; \
public: \
	DECLARE_CLASS(AABCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABCharacter)


#define BookPractice_Source_BookPractice_ABCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAABCharacter(); \
	friend struct Z_Construct_UClass_AABCharacter_Statics; \
public: \
	DECLARE_CLASS(AABCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABCharacter)


#define BookPractice_Source_BookPractice_ABCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABCharacter(AABCharacter&&); \
	NO_API AABCharacter(const AABCharacter&); \
public:


#define BookPractice_Source_BookPractice_ABCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABCharacter(AABCharacter&&); \
	NO_API AABCharacter(const AABCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABCharacter)


#define BookPractice_Source_BookPractice_ABCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AABCharacter, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__ABAnim() { return STRUCT_OFFSET(AABCharacter, ABAnim); } \
	FORCEINLINE static uint32 __PPO__CanNextCombo() { return STRUCT_OFFSET(AABCharacter, CanNextCombo); } \
	FORCEINLINE static uint32 __PPO__IsComboInputOn() { return STRUCT_OFFSET(AABCharacter, IsComboInputOn); } \
	FORCEINLINE static uint32 __PPO__CurrentCombo() { return STRUCT_OFFSET(AABCharacter, CurrentCombo); } \
	FORCEINLINE static uint32 __PPO__MaxCombo() { return STRUCT_OFFSET(AABCharacter, MaxCombo); }


#define BookPractice_Source_BookPractice_ABCharacter_h_9_PROLOG
#define BookPractice_Source_BookPractice_ABCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_ABCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_ABCharacter_h_12_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_ABCharacter_h_12_INCLASS \
	BookPractice_Source_BookPractice_ABCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_ABCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_ABCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_ABCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_ABCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_ABCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class AABCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_ABCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
