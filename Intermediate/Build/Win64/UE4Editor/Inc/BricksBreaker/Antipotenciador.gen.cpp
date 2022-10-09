// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker/Antipotenciador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntipotenciador() {}
// Cross Module References
	BRICKSBREAKER_API UClass* Z_Construct_UClass_AAntipotenciador_NoRegister();
	BRICKSBREAKER_API UClass* Z_Construct_UClass_AAntipotenciador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker();
// End Cross Module References
	void AAntipotenciador::StaticRegisterNativesAAntipotenciador()
	{
	}
	UClass* Z_Construct_UClass_AAntipotenciador_NoRegister()
	{
		return AAntipotenciador::StaticClass();
	}
	struct Z_Construct_UClass_AAntipotenciador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAntipotenciador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAntipotenciador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Antipotenciador.h" },
		{ "ModuleRelativePath", "Antipotenciador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAntipotenciador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAntipotenciador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAntipotenciador_Statics::ClassParams = {
		&AAntipotenciador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAntipotenciador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAntipotenciador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAntipotenciador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAntipotenciador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAntipotenciador, 167245113);
	template<> BRICKSBREAKER_API UClass* StaticClass<AAntipotenciador>()
	{
		return AAntipotenciador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAntipotenciador(Z_Construct_UClass_AAntipotenciador, &AAntipotenciador::StaticClass, TEXT("/Script/BricksBreaker"), TEXT("AAntipotenciador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAntipotenciador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
