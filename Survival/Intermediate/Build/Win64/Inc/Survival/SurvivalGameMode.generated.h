// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef SURVIVAL_SurvivalGameMode_generated_h
#error "SurvivalGameMode.generated.h already included, missing '#pragma once' in SurvivalGameMode.h"
#endif
#define SURVIVAL_SurvivalGameMode_generated_h

#define ASurvivalGameMode_EVENTPARMS
#define ASurvivalGameMode_RPC_WRAPPERS
#define ASurvivalGameMode_RPC_WRAPPERS_NO_PURE_DECLS \
	static inline void StaticChecks_Implementation_Validate() \
	{ \
	}


#define ASurvivalGameMode_CALLBACK_WRAPPERS
#define ASurvivalGameMode_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASurvivalGameMode(); \
	friend SURVIVAL_API class UClass* Z_Construct_UClass_ASurvivalGameMode(); \
	public: \
	DECLARE_CLASS(ASurvivalGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Survival, SURVIVAL_API) \
	DECLARE_SERIALIZER(ASurvivalGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ASurvivalGameMode*>(this); }


#define ASurvivalGameMode_INCLASS \
	private: \
	static void StaticRegisterNativesASurvivalGameMode(); \
	friend SURVIVAL_API class UClass* Z_Construct_UClass_ASurvivalGameMode(); \
	public: \
	DECLARE_CLASS(ASurvivalGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, Survival, SURVIVAL_API) \
	DECLARE_SERIALIZER(ASurvivalGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ASurvivalGameMode*>(this); }


#define ASurvivalGameMode_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SURVIVAL_API ASurvivalGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalGameMode) \
private: \
	/** Private copy-constructor, should never be used */ \
	SURVIVAL_API ASurvivalGameMode(const ASurvivalGameMode& InCopy); \
public:


#define ASurvivalGameMode_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	SURVIVAL_API ASurvivalGameMode(const ASurvivalGameMode& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalGameMode)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ASurvivalGameMode


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ASurvivalGameMode_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASurvivalGameMode_RPC_WRAPPERS \
	ASurvivalGameMode_CALLBACK_WRAPPERS \
	ASurvivalGameMode_INCLASS \
	ASurvivalGameMode_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ASurvivalGameMode_RPC_WRAPPERS_NO_PURE_DECLS \
	ASurvivalGameMode_CALLBACK_WRAPPERS \
	ASurvivalGameMode_INCLASS_NO_PURE_DECLS \
	ASurvivalGameMode_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_POP


