// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicActorCodingTut/TUTGamemodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTUTGamemodeBase() {}

// Begin Cross Module References
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGamemodeBase();
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGamemodeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BasicActorCodingTut();
// End Cross Module References

// Begin Class ATUTGamemodeBase
void ATUTGamemodeBase::StaticRegisterNativesATUTGamemodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATUTGamemodeBase);
UClass* Z_Construct_UClass_ATUTGamemodeBase_NoRegister()
{
	return ATUTGamemodeBase::StaticClass();
}
struct Z_Construct_UClass_ATUTGamemodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TUTGamemodeBase.h" },
		{ "ModuleRelativePath", "TUTGamemodeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATUTGamemodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATUTGamemodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BasicActorCodingTut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGamemodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATUTGamemodeBase_Statics::ClassParams = {
	&ATUTGamemodeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGamemodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATUTGamemodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATUTGamemodeBase()
{
	if (!Z_Registration_Info_UClass_ATUTGamemodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATUTGamemodeBase.OuterSingleton, Z_Construct_UClass_ATUTGamemodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATUTGamemodeBase.OuterSingleton;
}
template<> BASICACTORCODINGTUT_API UClass* StaticClass<ATUTGamemodeBase>()
{
	return ATUTGamemodeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATUTGamemodeBase);
ATUTGamemodeBase::~ATUTGamemodeBase() {}
// End Class ATUTGamemodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATUTGamemodeBase, ATUTGamemodeBase::StaticClass, TEXT("ATUTGamemodeBase"), &Z_Registration_Info_UClass_ATUTGamemodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATUTGamemodeBase), 3075188710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_3548824847(TEXT("/Script/BasicActorCodingTut"),
	Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
