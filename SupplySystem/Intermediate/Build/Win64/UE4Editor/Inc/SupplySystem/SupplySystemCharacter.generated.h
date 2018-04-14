// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPPLYSYSTEM_SupplySystemCharacter_generated_h
#error "SupplySystemCharacter.generated.h already included, missing '#pragma once' in SupplySystemCharacter.h"
#endif
#define SUPPLYSYSTEM_SupplySystemCharacter_generated_h

#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_RPC_WRAPPERS
#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASupplySystemCharacter(); \
	friend SUPPLYSYSTEM_API class UClass* Z_Construct_UClass_ASupplySystemCharacter(); \
public: \
	DECLARE_CLASS(ASupplySystemCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SupplySystem"), NO_API) \
	DECLARE_SERIALIZER(ASupplySystemCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASupplySystemCharacter(); \
	friend SUPPLYSYSTEM_API class UClass* Z_Construct_UClass_ASupplySystemCharacter(); \
public: \
	DECLARE_CLASS(ASupplySystemCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SupplySystem"), NO_API) \
	DECLARE_SERIALIZER(ASupplySystemCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASupplySystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASupplySystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASupplySystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASupplySystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASupplySystemCharacter(ASupplySystemCharacter&&); \
	NO_API ASupplySystemCharacter(const ASupplySystemCharacter&); \
public:


#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASupplySystemCharacter(ASupplySystemCharacter&&); \
	NO_API ASupplySystemCharacter(const ASupplySystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASupplySystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASupplySystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASupplySystemCharacter)


#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASupplySystemCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASupplySystemCharacter, FollowCamera); }


#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_9_PROLOG
#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_RPC_WRAPPERS \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_INCLASS \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SupplySystem_Source_SupplySystem_SupplySystemCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SupplySystem_Source_SupplySystem_SupplySystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
