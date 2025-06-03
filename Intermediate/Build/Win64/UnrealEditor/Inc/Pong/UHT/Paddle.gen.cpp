// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Paddle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_APaddle();
PONG_API UClass* Z_Construct_UClass_APaddle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class APaddle Function GameOver
static const FName NAME_APaddle_GameOver = FName(TEXT("GameOver"));
void APaddle::GameOver()
{
	UFunction* Func = FindFunctionChecked(NAME_APaddle_GameOver);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_APaddle_GameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle, nullptr, "GameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_APaddle_GameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APaddle_GameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APaddle_GameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APaddle Function GameOver

// Begin Class APaddle Function GetScore
struct Z_Construct_UFunction_APaddle_GetScore_Statics
{
	struct Paddle_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APaddle_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Paddle_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APaddle_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APaddle_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_APaddle_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_APaddle_GetScore_Statics::Paddle_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APaddle_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APaddle_GetScore_Statics::Paddle_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APaddle_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APaddle_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APaddle::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class APaddle Function GetScore

// Begin Class APaddle
void APaddle::StaticRegisterNativesAPaddle()
{
	UClass* Class = APaddle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &APaddle::execGetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddle);
UClass* Z_Construct_UClass_APaddle_NoRegister()
{
	return APaddle::StaticClass();
}
struct Z_Construct_UClass_APaddle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Paddle.h" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[] = {
		{ "Category", "Paddle" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Paddle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Paddle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
	static const UECodeGen_Private::FIntPropertyParams NewProp_score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APaddle_GameOver, "GameOver" }, // 3654775729
		{ &Z_Construct_UFunction_APaddle_GetScore, "GetScore" }, // 1060194068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, MovementComp), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collider_MetaData), NewProp_Collider_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_score_MetaData), NewProp_score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddle, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_Collider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddle_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaddle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Statics::ClassParams = {
	&APaddle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APaddle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams), Z_Construct_UClass_APaddle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaddle()
{
	if (!Z_Registration_Info_UClass_APaddle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddle.OuterSingleton, Z_Construct_UClass_APaddle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaddle.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<APaddle>()
{
	return APaddle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle);
APaddle::~APaddle() {}
// End Class APaddle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Paddle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaddle, APaddle::StaticClass, TEXT("APaddle"), &Z_Registration_Info_UClass_APaddle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddle), 1442766558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Paddle_h_3344902812(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Paddle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Paddle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
