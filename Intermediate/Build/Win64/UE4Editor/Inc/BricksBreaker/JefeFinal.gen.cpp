// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker/JefeFinal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJefeFinal() {}
// Cross Module References
	BRICKSBREAKER_API UClass* Z_Construct_UClass_AJefeFinal_NoRegister();
	BRICKSBREAKER_API UClass* Z_Construct_UClass_AJefeFinal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker();
// End Cross Module References
	void AJefeFinal::StaticRegisterNativesAJefeFinal()
	{
	}
	UClass* Z_Construct_UClass_AJefeFinal_NoRegister()
	{
		return AJefeFinal::StaticClass();
	}
	struct Z_Construct_UClass_AJefeFinal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJefeFinal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJefeFinal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JefeFinal.h" },
		{ "ModuleRelativePath", "JefeFinal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJefeFinal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJefeFinal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJefeFinal_Statics::ClassParams = {
		&AJefeFinal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJefeFinal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJefeFinal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJefeFinal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJefeFinal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJefeFinal, 413080114);
	template<> BRICKSBREAKER_API UClass* StaticClass<AJefeFinal>()
	{
		return AJefeFinal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJefeFinal(Z_Construct_UClass_AJefeFinal, &AJefeFinal::StaticClass, TEXT("/Script/BricksBreaker"), TEXT("AJefeFinal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJefeFinal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
