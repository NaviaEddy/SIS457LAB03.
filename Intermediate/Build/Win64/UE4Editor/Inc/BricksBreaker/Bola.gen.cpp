// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker/Bola.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBola() {}
// Cross Module References
	BRICKSBREAKER_API UClass* Z_Construct_UClass_ABola_NoRegister();
	BRICKSBREAKER_API UClass* Z_Construct_UClass_ABola();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker();
// End Cross Module References
	void ABola::StaticRegisterNativesABola()
	{
	}
	UClass* Z_Construct_UClass_ABola_NoRegister()
	{
		return ABola::StaticClass();
	}
	struct Z_Construct_UClass_ABola_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABola_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABola_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bola.h" },
		{ "ModuleRelativePath", "Bola.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABola_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABola>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABola_Statics::ClassParams = {
		&ABola::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABola_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABola_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABola()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABola_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABola, 1186851668);
	template<> BRICKSBREAKER_API UClass* StaticClass<ABola>()
	{
		return ABola::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABola(Z_Construct_UClass_ABola, &ABola::StaticClass, TEXT("/Script/BricksBreaker"), TEXT("ABola"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABola);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
