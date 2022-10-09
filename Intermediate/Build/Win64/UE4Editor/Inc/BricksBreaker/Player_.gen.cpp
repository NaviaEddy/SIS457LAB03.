// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker/Player_.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_() {}
// Cross Module References
	BRICKSBREAKER_API UClass* Z_Construct_UClass_APlayer__NoRegister();
	BRICKSBREAKER_API UClass* Z_Construct_UClass_APlayer_();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker();
// End Cross Module References
	void APlayer_::StaticRegisterNativesAPlayer_()
	{
	}
	UClass* Z_Construct_UClass_APlayer__NoRegister()
	{
		return APlayer_::StaticClass();
	}
	struct Z_Construct_UClass_APlayer__Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer__Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer__Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player_.h" },
		{ "ModuleRelativePath", "Player_.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer__Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer__Statics::ClassParams = {
		&APlayer_::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer__Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer__Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer__Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_, 1991858113);
	template<> BRICKSBREAKER_API UClass* StaticClass<APlayer_>()
	{
		return APlayer_::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_(Z_Construct_UClass_APlayer_, &APlayer_::StaticClass, TEXT("/Script/BricksBreaker"), TEXT("APlayer_"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
