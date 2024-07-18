// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicActorCodingTut/TUTGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTUTGameCharacter() {}
// Cross Module References
	BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGameCharacter();
	BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGameCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BasicActorCodingTut();
// End Cross Module References
	void ATUTGameCharacter::StaticRegisterNativesATUTGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATUTGameCharacter);
	UClass* Z_Construct_UClass_ATUTGameCharacter_NoRegister()
	{
		return ATUTGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATUTGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATUTGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicActorCodingTut,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGameCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATUTGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TUTGameCharacter.h" },
		{ "ModuleRelativePath", "TUTGameCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATUTGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATUTGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATUTGameCharacter_Statics::ClassParams = {
		&ATUTGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATUTGameCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATUTGameCharacter()
	{
		if (!Z_Registration_Info_UClass_ATUTGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATUTGameCharacter.OuterSingleton, Z_Construct_UClass_ATUTGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATUTGameCharacter.OuterSingleton;
	}
	template<> BASICACTORCODINGTUT_API UClass* StaticClass<ATUTGameCharacter>()
	{
		return ATUTGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATUTGameCharacter);
	ATUTGameCharacter::~ATUTGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_s221150_Documents_Perforce_ProgrammingYear1_2024_s221150_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_Perforce_ProgrammingYear1_2024_s221150_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATUTGameCharacter, ATUTGameCharacter::StaticClass, TEXT("ATUTGameCharacter"), &Z_Registration_Info_UClass_ATUTGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATUTGameCharacter), 1505838932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_Perforce_ProgrammingYear1_2024_s221150_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_1350536584(TEXT("/Script/BasicActorCodingTut"),
		Z_CompiledInDeferFile_FID_Users_s221150_Documents_Perforce_ProgrammingYear1_2024_s221150_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s221150_Documents_Perforce_ProgrammingYear1_2024_s221150_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
