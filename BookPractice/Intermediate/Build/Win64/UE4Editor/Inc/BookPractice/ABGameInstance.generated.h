// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOKPRACTICE_ABGameInstance_generated_h
#error "ABGameInstance.generated.h already included, missing '#pragma once' in ABGameInstance.h"
#endif
#define BOOKPRACTICE_ABGameInstance_generated_h

#define BookPractice_Source_BookPractice_public_ABGameInstance_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FABCharacterData_Statics; \
	BOOKPRACTICE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BOOKPRACTICE_API UScriptStruct* StaticStruct<struct FABCharacterData>();

#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_RPC_WRAPPERS
#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend struct Z_Construct_UClass_UABGameInstance_Statics; \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance)


#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUABGameInstance(); \
	friend struct Z_Construct_UClass_UABGameInstance_Statics; \
public: \
	DECLARE_CLASS(UABGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(UABGameInstance)


#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public:


#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABGameInstance(UABGameInstance&&); \
	NO_API UABGameInstance(const UABGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABGameInstance)


#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ABCharacterTable() { return STRUCT_OFFSET(UABGameInstance, ABCharacterTable); }


#define BookPractice_Source_BookPractice_public_ABGameInstance_h_32_PROLOG
#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_INCLASS \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_public_ABGameInstance_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABGameInstance_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class UABGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_public_ABGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
