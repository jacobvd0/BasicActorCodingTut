// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicActorCodingTut/TUTGamemodeBase.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTUTGamemodeBase() {}

// Begin Cross Module References
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGamemodeBase();
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_ATUTGamemodeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_resetBtn_MetaData[] = {
		{ "ModuleRelativePath", "TUTGamemodeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseJSONSaveGame_MetaData[] = {
		{ "Category", "TUTGamemodeBase" },
		{ "ModuleRelativePath", "TUTGamemodeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[] = {
		{ "Category", "TUTGamemodeBase" },
		{ "ModuleRelativePath", "TUTGamemodeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_resetBtn;
	static void NewProp_UseJSONSaveGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseJSONSaveGame;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATUTGamemodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_resetBtn = { "resetBtn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATUTGamemodeBase, resetBtn), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_resetBtn_MetaData), NewProp_resetBtn_MetaData) }; // 658672854
void Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_UseJSONSaveGame_SetBit(void* Obj)
{
	((ATUTGamemodeBase*)Obj)->UseJSONSaveGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_UseJSONSaveGame = { "UseJSONSaveGame", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATUTGamemodeBase), &Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_UseJSONSaveGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseJSONSaveGame_MetaData), NewProp_UseJSONSaveGame_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATUTGamemodeBase, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveName_MetaData), NewProp_SaveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATUTGamemodeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_resetBtn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_UseJSONSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATUTGamemodeBase_Statics::NewProp_SaveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGamemodeBase_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ATUTGamemodeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATUTGamemodeBase_Statics::PropPointers),
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
		{ Z_Construct_UClass_ATUTGamemodeBase, ATUTGamemodeBase::StaticClass, TEXT("ATUTGamemodeBase"), &Z_Registration_Info_UClass_ATUTGamemodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATUTGamemodeBase), 3473409363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_224002927(TEXT("/Script/BasicActorCodingTut"),
	Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGamemodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
