// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOKPRACTICE_ABGameMode_generated_h
#error "ABGameMode.generated.h already included, missing '#pragma once' in ABGameMode.h"
#endif
#define BOOKPRACTICE_ABGameMode_generated_h

#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_RPC_WRAPPERS
#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend struct Z_Construct_UClass_AABGameMode_Statics; \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode)


#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABGameMode(); \
	friend struct Z_Construct_UClass_AABGameMode_Statics; \
public: \
	DECLARE_CLASS(AABGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABGameMode)


#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameMode(AABGameMode&&); \
	NO_API AABGameMode(const AABGameMode&); \
public:


#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABGameMode(AABGameMode&&); \
	NO_API AABGameMode(const AABGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABGameMode)


#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define BookPractice_Source_BookPractice_public_ABGameMode_h_12_PROLOG
#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_INCLASS \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_public_ABGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class AABGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_public_ABGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
