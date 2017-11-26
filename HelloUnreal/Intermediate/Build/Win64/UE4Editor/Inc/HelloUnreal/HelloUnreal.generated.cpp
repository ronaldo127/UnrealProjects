// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HelloUnreal.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1HelloUnreal() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	HELLOUNREAL_API class UClass* Z_Construct_UClass_AHelloUnrealGameModeBase_NoRegister();
	HELLOUNREAL_API class UClass* Z_Construct_UClass_AHelloUnrealGameModeBase();
	HELLOUNREAL_API class UPackage* Z_Construct_UPackage__Script_HelloUnreal();
	void AHelloUnrealGameModeBase::StaticRegisterNativesAHelloUnrealGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHelloUnrealGameModeBase_NoRegister()
	{
		return AHelloUnrealGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AHelloUnrealGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_HelloUnreal();
			OuterClass = AHelloUnrealGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHelloUnrealGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HelloUnrealGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HelloUnrealGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHelloUnrealGameModeBase, 2252757747);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHelloUnrealGameModeBase(Z_Construct_UClass_AHelloUnrealGameModeBase, &AHelloUnrealGameModeBase::StaticClass, TEXT("/Script/HelloUnreal"), TEXT("AHelloUnrealGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloUnrealGameModeBase);
	UPackage* Z_Construct_UPackage__Script_HelloUnreal()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/HelloUnreal")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x94A77C49;
			Guid.B = 0x70FE7AE1;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
