// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOKPRACTICE_ABAIController_generated_h
#error "ABAIController.generated.h already included, missing '#pragma once' in ABAIController.h"
#endif
#define BOOKPRACTICE_ABAIController_generated_h

#define BookPractice_Source_BookPractice_public_ABAIController_h_15_RPC_WRAPPERS
#define BookPractice_Source_BookPractice_public_ABAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BookPractice_Source_BookPractice_public_ABAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABAIController(); \
	friend struct Z_Construct_UClass_AABAIController_Statics; \
public: \
	DECLARE_CLASS(AABAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABAIController)


#define BookPractice_Source_BookPractice_public_ABAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABAIController(); \
	friend struct Z_Construct_UClass_AABAIController_Statics; \
public: \
	DECLARE_CLASS(AABAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABAIController)


#define BookPractice_Source_BookPractice_public_ABAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABAIController(AABAIController&&); \
	NO_API AABAIController(const AABAIController&); \
public:


#define BookPractice_Source_BookPractice_public_ABAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABAIController(AABAIController&&); \
	NO_API AABAIController(const AABAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABAIController)


#define BookPractice_Source_BookPractice_public_ABAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BTAsset() { return STRUCT_OFFSET(AABAIController, BTAsset); } \
	FORCEINLINE static uint32 __PPO__BBAsset() { return STRUCT_OFFSET(AABAIController, BBAsset); }


#define BookPractice_Source_BookPractice_public_ABAIController_h_12_PROLOG
#define BookPractice_Source_BookPractice_public_ABAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_INCLASS \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_public_ABAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class AABAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_public_ABAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
