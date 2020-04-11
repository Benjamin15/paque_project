// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "paque_projet/paque_projetGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepaque_projetGameMode() {}
// Cross Module References
	PAQUE_PROJET_API UClass* Z_Construct_UClass_Apaque_projetGameMode_NoRegister();
	PAQUE_PROJET_API UClass* Z_Construct_UClass_Apaque_projetGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_paque_projet();
// End Cross Module References
	void Apaque_projetGameMode::StaticRegisterNativesApaque_projetGameMode()
	{
	}
	UClass* Z_Construct_UClass_Apaque_projetGameMode_NoRegister()
	{
		return Apaque_projetGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Apaque_projetGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apaque_projetGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_paque_projet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apaque_projetGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "paque_projetGameMode.h" },
		{ "ModuleRelativePath", "paque_projetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apaque_projetGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apaque_projetGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Apaque_projetGameMode_Statics::ClassParams = {
		&Apaque_projetGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Apaque_projetGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Apaque_projetGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Apaque_projetGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Apaque_projetGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Apaque_projetGameMode, 4128537848);
	template<> PAQUE_PROJET_API UClass* StaticClass<Apaque_projetGameMode>()
	{
		return Apaque_projetGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Apaque_projetGameMode(Z_Construct_UClass_Apaque_projetGameMode, &Apaque_projetGameMode::StaticClass, TEXT("/Script/paque_projet"), TEXT("Apaque_projetGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apaque_projetGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
