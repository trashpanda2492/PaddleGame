// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pong/Ball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PONG_API UClass* Z_Construct_UClass_ABall();
PONG_API UClass* Z_Construct_UClass_ABall_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pong();
// End Cross Module References

// Begin Class ABall Function OnBallHit
struct Z_Construct_UFunction_ABall_OnBallHit_Statics
{
	struct Ball_eventOnBallHit_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_OnBallHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ball_eventOnBallHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_OnBallHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_OnBallHit_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_OnBallHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_OnBallHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "OnBallHit", nullptr, nullptr, Z_Construct_UFunction_ABall_OnBallHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_OnBallHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABall_OnBallHit_Statics::Ball_eventOnBallHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_OnBallHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABall_OnBallHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABall_OnBallHit_Statics::Ball_eventOnBallHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABall_OnBallHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_OnBallHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABall::execOnBallHit)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBallHit(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ABall Function OnBallHit

// Begin Class ABall
void ABall::StaticRegisterNativesABall()
{
	UClass* Class = ABall::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBallHit", &ABall::execOnBallHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABall);
UClass* Z_Construct_UClass_ABall_NoRegister()
{
	return ABall::StaticClass();
}
struct Z_Construct_UClass_ABall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ball.h" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBallSpeed_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingBallSpeed_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallSpeedupIncrement_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallDirection_MetaData[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[] = {
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentBallSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingBallSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BallSpeedupIncrement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BallDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABall_OnBallHit, "OnBallHit" }, // 1844566632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_CurrentBallSpeed = { "CurrentBallSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, CurrentBallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBallSpeed_MetaData), NewProp_CurrentBallSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_StartingBallSpeed = { "StartingBallSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, StartingBallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingBallSpeed_MetaData), NewProp_StartingBallSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_BallSpeedupIncrement = { "BallSpeedupIncrement", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, BallSpeedupIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallSpeedupIncrement_MetaData), NewProp_BallSpeedupIncrement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_BallDirection = { "BallDirection", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, BallDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallDirection_MetaData), NewProp_BallDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, Collider), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collider_MetaData), NewProp_Collider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_CurrentBallSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_StartingBallSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_BallSpeedupIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_BallDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_Collider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pong,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
	&ABall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams), Z_Construct_UClass_ABall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABall()
{
	if (!Z_Registration_Info_UClass_ABall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABall.OuterSingleton, Z_Construct_UClass_ABall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABall.OuterSingleton;
}
template<> PONG_API UClass* StaticClass<ABall>()
{
	return ABall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
ABall::~ABall() {}
// End Class ABall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Ball_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABall, ABall::StaticClass, TEXT("ABall"), &Z_Registration_Info_UClass_ABall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABall), 420684351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Ball_h_3778427272(TEXT("/Script/Pong"),
	Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Ball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_poked_Documents_Unreal_Projects_Pong_Source_Pong_Ball_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
