// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOKPRACTICE_BookPracticeCharacter_generated_h
#error "BookPracticeCharacter.generated.h already included, missing '#pragma once' in BookPracticeCharacter.h"
#endif
#define BOOKPRACTICE_BookPracticeCharacter_generated_h

#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_RPC_WRAPPERS
#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABookPracticeCharacter(); \
	friend struct Z_Construct_UClass_ABookPracticeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABookPracticeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(ABookPracticeCharacter)


#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABookPracticeCharacter(); \
	friend struct Z_Construct_UClass_ABookPracticeCharacter_Statics; \
public: \
	DECLARE_CLASS(ABookPracticeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(ABookPracticeCharacter)


#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABookPracticeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABookPracticeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABookPracticeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABookPracticeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABookPracticeCharacter(ABookPracticeCharacter&&); \
	NO_API ABookPracticeCharacter(const ABookPracticeCharacter&); \
public:


#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABookPracticeCharacter(ABookPracticeCharacter&&); \
	NO_API ABookPracticeCharacter(const ABookPracticeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABookPracticeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABookPracticeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABookPracticeCharacter)


#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABookPracticeCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABookPracticeCharacter, FollowCamera); }


#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_9_PROLOG
#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_INCLASS \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_BookPracticeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class ABookPracticeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_BookPracticeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
