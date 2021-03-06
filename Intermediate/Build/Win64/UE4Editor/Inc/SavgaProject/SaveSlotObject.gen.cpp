// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavgaProject/SaveSlotObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotObject() {}
// Cross Module References
	SAVGAPROJECT_API UFunction* Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SavgaProject();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveSlotObject_NoRegister();
	SAVGAPROJECT_API UClass* Z_Construct_UClass_USaveSlotObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVGAPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics
	{
		struct _Script_SavgaProject_eventOnSlotDeleted_Parms
		{
			USaveSlotObject* slot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SavgaProject_eventOnSlotDeleted_Parms, slot), Z_Construct_UClass_USaveSlotObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveSlotObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SavgaProject, nullptr, "OnSlotDeleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_SavgaProject_eventOnSlotDeleted_Parms), Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USaveSlotObject::StaticRegisterNativesUSaveSlotObject()
	{
	}
	UClass* Z_Construct_UClass_USaveSlotObject_NoRegister()
	{
		return USaveSlotObject::StaticClass();
	}
	struct Z_Construct_UClass_USaveSlotObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSlotDeleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlotDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveMetadata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSlotObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SavgaProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveSlotObject.h" },
		{ "ModuleRelativePath", "SaveSlotObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSlotDeleted_MetaData[] = {
		{ "Category", "SlotObject" },
		{ "ModuleRelativePath", "SaveSlotObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSlotDeleted = { "OnSlotDeleted", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSlotObject, OnSlotDeleted), Z_Construct_UDelegateFunction_SavgaProject_OnSlotDeleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSlotDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSlotDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata_MetaData[] = {
		{ "Category", "SlotObject" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "SaveSlotObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata = { "SaveMetadata", nullptr, (EPropertyFlags)0x0011000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveSlotObject, SaveMetadata), Z_Construct_UScriptStruct_FSaveMetadata, METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSlotDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSlotObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotObject_Statics::ClassParams = {
		&USaveSlotObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSlotObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveSlotObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveSlotObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveSlotObject, 1529418223);
	template<> SAVGAPROJECT_API UClass* StaticClass<USaveSlotObject>()
	{
		return USaveSlotObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveSlotObject(Z_Construct_UClass_USaveSlotObject, &USaveSlotObject::StaticClass, TEXT("/Script/SavgaProject"), TEXT("USaveSlotObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
