// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePong_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Pong;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Pong()
	{
		if (!Z_Registration_Info_UPackage__Script_Pong.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Pong",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5F348A58,
				0xBDE09273,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Pong.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Pong.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Pong(Z_Construct_UPackage__Script_Pong, TEXT("/Script/Pong"), Z_Registration_Info_UPackage__Script_Pong, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5F348A58, 0xBDE09273));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
