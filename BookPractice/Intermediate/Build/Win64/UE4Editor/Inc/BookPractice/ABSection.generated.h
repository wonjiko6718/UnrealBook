// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOOKPRACTICE_ABSection_generated_h
#error "ABSection.generated.h already included, missing '#pragma once' in ABSection.h"
#endif
#define BOOKPRACTICE_ABSection_generated_h

#define BookPractice_Source_BookPractice_public_ABSection_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGateTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define BookPractice_Source_BookPractice_public_ABSection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGateTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define BookPractice_Source_BookPractice_public_ABSection_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABSection(); \
	friend struct Z_Construct_UClass_AABSection_Statics; \
public: \
	DECLARE_CLASS(AABSection, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABSection)


#define BookPractice_Source_BookPractice_public_ABSection_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAABSection(); \
	friend struct Z_Construct_UClass_AABSection_Statics; \
public: \
	DECLARE_CLASS(AABSection, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BookPractice"), NO_API) \
	DECLARE_SERIALIZER(AABSection)


#define BookPractice_Source_BookPractice_public_ABSection_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABSection(AABSection&&); \
	NO_API AABSection(const AABSection&); \
public:


#define BookPractice_Source_BookPractice_public_ABSection_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABSection(AABSection&&); \
	NO_API AABSection(const AABSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABSection)


#define BookPractice_Source_BookPractice_public_ABSection_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GateMeshes() { return STRUCT_OFFSET(AABSection, GateMeshes); } \
	FORCEINLINE static uint32 __PPO__GateTriggers() { return STRUCT_OFFSET(AABSection, GateTriggers); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AABSection, Mesh); } \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(AABSection, Trigger); } \
	FORCEINLINE static uint32 __PPO__bNoBattle() { return STRUCT_OFFSET(AABSection, bNoBattle); } \
	FORCEINLINE static uint32 __PPO__EnemySpawnTime() { return STRUCT_OFFSET(AABSection, EnemySpawnTime); } \
	FORCEINLINE static uint32 __PPO__ItemBoxSpawnTime() { return STRUCT_OFFSET(AABSection, ItemBoxSpawnTime); }


#define BookPractice_Source_BookPractice_public_ABSection_h_9_PROLOG
#define BookPractice_Source_BookPractice_public_ABSection_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABSection_h_12_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABSection_h_12_RPC_WRAPPERS \
	BookPractice_Source_BookPractice_public_ABSection_h_12_INCLASS \
	BookPractice_Source_BookPractice_public_ABSection_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BookPractice_Source_BookPractice_public_ABSection_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BookPractice_Source_BookPractice_public_ABSection_h_12_PRIVATE_PROPERTY_OFFSET \
	BookPractice_Source_BookPractice_public_ABSection_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABSection_h_12_INCLASS_NO_PURE_DECLS \
	BookPractice_Source_BookPractice_public_ABSection_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOKPRACTICE_API UClass* StaticClass<class AABSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BookPractice_Source_BookPractice_public_ABSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
