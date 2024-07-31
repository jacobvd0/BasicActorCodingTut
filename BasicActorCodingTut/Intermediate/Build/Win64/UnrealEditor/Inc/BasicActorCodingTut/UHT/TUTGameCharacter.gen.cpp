// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicActorCodingTut/TUTGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTUTGameCharacter() {}

// Begin Cross Module References
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGameCharacter();
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGameCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_BasicActorCodingTut();
// End Cross Module References

// Begin Class ATUTGameCharacter
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TUTGameCharacter.h" },
		{ "ModuleRelativePath", "TUTGameCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATUTGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATUTGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BasicActorCodingTut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGameCharacter_Statics::DependentSingletons) < 16);
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
// End Class ATUTGameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATUTGameCharacter, ATUTGameCharacter::StaticClass, TEXT("ATUTGameCharacter"), &Z_Registration_Info_UClass_ATUTGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATUTGameCharacter), 3823363487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_2279841901(TEXT("/Script/BasicActorCodingTut"),
	Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
