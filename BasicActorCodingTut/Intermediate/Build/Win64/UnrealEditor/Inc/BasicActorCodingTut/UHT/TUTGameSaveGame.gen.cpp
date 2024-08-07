// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicActorCodingTut/TUTGameSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTUTGameSaveGame() {}

// Begin Cross Module References
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_UTUTGameSaveGame();
BASICACTORCODINGTUT_API UClass* Z_Construct_UClass_UTUTGameSaveGame_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_BasicActorCodingTut();
// End Cross Module References

// Begin Class UTUTGameSaveGame
void UTUTGameSaveGame::StaticRegisterNativesUTUTGameSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTUTGameSaveGame);
UClass* Z_Construct_UClass_UTUTGameSaveGame_NoRegister()
{
	return UTUTGameSaveGame::StaticClass();
}
struct Z_Construct_UClass_UTUTGameSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TUTGameSaveGame.h" },
		{ "ModuleRelativePath", "TUTGameSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "ModuleRelativePath", "TUTGameSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayerLocation_MetaData[] = {
		{ "ModuleRelativePath", "TUTGameSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTransformsByName_MetaData[] = {
		{ "ModuleRelativePath", "TUTGameSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPlayerLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveTransformsByName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTransformsByName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveTransformsByName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTUTGameSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTUTGameSaveGame, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_LastPlayerLocation = { "LastPlayerLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTUTGameSaveGame, LastPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayerLocation_MetaData), NewProp_LastPlayerLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_SaveTransformsByName_ValueProp = { "SaveTransformsByName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_SaveTransformsByName_Key_KeyProp = { "SaveTransformsByName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_SaveTransformsByName = { "SaveTransformsByName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTUTGameSaveGame, SaveTransformsByName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTransformsByName_MetaData), NewProp_SaveTransformsByName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTUTGameSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_LastPlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_SaveTransformsByName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_SaveTransformsByName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTUTGameSaveGame_Statics::NewProp_SaveTransformsByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTUTGameSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTUTGameSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_BasicActorCodingTut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTUTGameSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTUTGameSaveGame_Statics::ClassParams = {
	&UTUTGameSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTUTGameSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTUTGameSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTUTGameSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UTUTGameSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTUTGameSaveGame()
{
	if (!Z_Registration_Info_UClass_UTUTGameSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTUTGameSaveGame.OuterSingleton, Z_Construct_UClass_UTUTGameSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTUTGameSaveGame.OuterSingleton;
}
template<> BASICACTORCODINGTUT_API UClass* StaticClass<UTUTGameSaveGame>()
{
	return UTUTGameSaveGame::StaticClass();
}
UTUTGameSaveGame::UTUTGameSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTUTGameSaveGame);
UTUTGameSaveGame::~UTUTGameSaveGame() {}
// End Class UTUTGameSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTUTGameSaveGame, UTUTGameSaveGame::StaticClass, TEXT("UTUTGameSaveGame"), &Z_Registration_Info_UClass_UTUTGameSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTUTGameSaveGame), 1774935258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameSaveGame_h_3570155350(TEXT("/Script/BasicActorCodingTut"),
	Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s221150_Documents_BasicActorCodingTut_BasicActorCodingTut_Source_BasicActorCodingTut_TUTGameSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
