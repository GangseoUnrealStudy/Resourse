// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GangseoGames/GangseoGamesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGangseoGamesGameModeBase() {}
// Cross Module References
	GANGSEOGAMES_API UClass* Z_Construct_UClass_AGangseoGamesGameModeBase_NoRegister();
	GANGSEOGAMES_API UClass* Z_Construct_UClass_AGangseoGamesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GangseoGames();
// End Cross Module References
	void AGangseoGamesGameModeBase::StaticRegisterNativesAGangseoGamesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGangseoGamesGameModeBase_NoRegister()
	{
		return AGangseoGamesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGangseoGamesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GangseoGames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GangseoGamesGameModeBase.h" },
		{ "ModuleRelativePath", "GangseoGamesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGangseoGamesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::ClassParams = {
		&AGangseoGamesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGangseoGamesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGangseoGamesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGangseoGamesGameModeBase, 83886947);
	template<> GANGSEOGAMES_API UClass* StaticClass<AGangseoGamesGameModeBase>()
	{
		return AGangseoGamesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGangseoGamesGameModeBase(Z_Construct_UClass_AGangseoGamesGameModeBase, &AGangseoGamesGameModeBase::StaticClass, TEXT("/Script/GangseoGames"), TEXT("AGangseoGamesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGangseoGamesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
