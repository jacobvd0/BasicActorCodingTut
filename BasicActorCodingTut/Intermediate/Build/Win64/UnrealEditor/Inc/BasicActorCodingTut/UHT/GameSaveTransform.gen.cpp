// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicActorCodingTut/GameSaveTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSaveTransform() {}

// Begin Cross Module References
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_UGameSaveTransform();
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_UGameSaveTransform_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BasicActorCodingTut();
// End Cross Module References

// Begin Class UGameSaveTransform
void UGameSaveTransform::StaticRegisterNativesUGameSaveTransform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameSaveTransform);
UClass* Z_Construct_UClass_UGameSaveTransform_NoRegister()
{
	return UGameSaveTransform::StaticClass();
}
struct Z_Construct_UClass_UGameSaveTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameSaveTransform.h" },
		{ "ModuleRelativePath", "GameSaveTransform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSaveTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameSaveTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BasicActorCodingTut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameSaveTransform_Statics::ClassParams = {
	&UGameSaveTransform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameSaveTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameSaveTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameSaveTransform()
{
	if (!Z_Registration_Info_UClass_UGameSaveTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameSaveTransform.OuterSingleton, Z_Construct_UClass_UGameSaveTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameSaveTransform.OuterSingleton;
}
template<> BASICACTORCODINGTUT_API UClass* StaticClass<UGameSaveTransform>()
{
	return UGameSaveTransform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSaveTransform);
UGameSaveTransform::~UGameSaveTransform() {}
// End Class UGameSaveTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_GameSaveTransform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameSaveTransform, UGameSaveTransform::StaticClass, TEXT("UGameSaveTransform"), &Z_Registration_Info_UClass_UGameSaveTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameSaveTransform), 1757887268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_GameSaveTransform_h_3048144328(TEXT("/Script/BasicActorCodingTut"),
	Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_GameSaveTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_GameSaveTransform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
