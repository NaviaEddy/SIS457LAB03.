// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker/BricksBreakerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBricksBreakerGameModeBase() {}
// Cross Module References
	BRICKSBREAKER_API UClass* Z_Construct_UClass_ABricksBreakerGameModeBase_NoRegister();
	BRICKSBREAKER_API UClass* Z_Construct_UClass_ABricksBreakerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker();
// End Cross Module References
	void ABricksBreakerGameModeBase::StaticRegisterNativesABricksBreakerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABricksBreakerGameModeBase_NoRegister()
	{
		return ABricksBreakerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABricksBreakerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BricksBreakerGameModeBase.h" },
		{ "ModuleRelativePath", "BricksBreakerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABricksBreakerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::ClassParams = {
		&ABricksBreakerGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABricksBreakerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABricksBreakerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABricksBreakerGameModeBase, 4224851258);
	template<> BRICKSBREAKER_API UClass* StaticClass<ABricksBreakerGameModeBase>()
	{
		return ABricksBreakerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABricksBreakerGameModeBase(Z_Construct_UClass_ABricksBreakerGameModeBase, &ABricksBreakerGameModeBase::StaticClass, TEXT("/Script/BricksBreaker"), TEXT("ABricksBreakerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABricksBreakerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
