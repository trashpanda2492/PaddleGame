// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/ScoreZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreZone() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
PONG_API UClass* Z_Construct_UClass_AScoreZone();
PONG_API UClass* Z_Construct_UClass_AScoreZone_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class AScoreZone Function ScoreOverlap
struct Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics
{
	struct ScoreZone_eventScoreOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ScoreZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreZone_eventScoreOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScoreZone, nullptr, "ScoreOverlap", nullptr, nullptr, Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::ScoreZone_eventScoreOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::ScoreZone_eventScoreOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AScoreZone_ScoreOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScoreZone_ScoreOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AScoreZone::execScoreOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScoreOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AScoreZone Function ScoreOverlap

// Begin Class AScoreZone
void AScoreZone::StaticRegisterNativesAScoreZone()
{
	UClass* Class = AScoreZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ScoreOverlap", &AScoreZone::execScoreOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScoreZone);
UClass* Z_Construct_UClass_AScoreZone_NoRegister()
{
	return AScoreZone::StaticClass();
}
struct Z_Construct_UClass_AScoreZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ScoreZone.h" },
		{ "ModuleRelativePath", "ScoreZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoringPaddle_MetaData[] = {
		{ "Category", "ScoreZone" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "ScoreZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreZone_MetaData[] = {
		{ "Category", "ScoreZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ScoreZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoringPaddle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AScoreZone_ScoreOverlap, "ScoreOverlap" }, // 1422645967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoreZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreZone_Statics::NewProp_ScoringPaddle = { "ScoringPaddle", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreZone, ScoringPaddle), Z_Construct_UClass_APaddle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoringPaddle_MetaData), NewProp_ScoringPaddle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScoreZone_Statics::NewProp_ScoreZone = { "ScoreZone", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScoreZone, ScoreZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreZone_MetaData), NewProp_ScoreZone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScoreZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreZone_Statics::NewProp_ScoringPaddle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScoreZone_Statics::NewProp_ScoreZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScoreZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScoreZone_Statics::ClassParams = {
	&AScoreZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AScoreZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AScoreZone_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScoreZone_Statics::Class_MetaDataParams), Z_Construct_UClass_AScoreZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScoreZone()
{
	if (!Z_Registration_Info_UClass_AScoreZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScoreZone.OuterSingleton, Z_Construct_UClass_AScoreZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScoreZone.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<AScoreZone>()
{
	return AScoreZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScoreZone);
AScoreZone::~AScoreZone() {}
// End Class AScoreZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScoreZone, AScoreZone::StaticClass, TEXT("AScoreZone"), &Z_Registration_Info_UClass_AScoreZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScoreZone), 1061837367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_2680206377(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_ScoreZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
