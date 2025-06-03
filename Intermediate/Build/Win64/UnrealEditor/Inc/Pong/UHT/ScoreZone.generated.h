// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScoreZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PONG_ScoreZone_generated_h
#error "ScoreZone.generated.h already included, missing '#pragma once' in ScoreZone.h"
#endif
#define PONG_ScoreZone_generated_h

#define FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScoreOverlap);


#define FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoreZone(); \
	friend struct Z_Construct_UClass_AScoreZone_Statics; \
public: \
	DECLARE_CLASS(AScoreZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pong"), NO_API) \
	DECLARE_SERIALIZER(AScoreZone)


#define FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AScoreZone(AScoreZone&&); \
	AScoreZone(const AScoreZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoreZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoreZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoreZone) \
	NO_API virtual ~AScoreZone();


#define FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_9_PROLOG
#define FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PONG_API UClass* StaticClass<class AScoreZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
