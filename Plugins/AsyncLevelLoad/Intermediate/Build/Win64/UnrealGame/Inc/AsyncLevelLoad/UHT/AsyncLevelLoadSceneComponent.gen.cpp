// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../../Users/roy00/OneDrive/5.3/AsyncLevelLoad/HostProject/Plugins/AsyncLevelLoad/Source/AsyncLevelLoad/Public/AsyncLevelLoadSceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncLevelLoadSceneComponent() {}
// Cross Module References
	ASYNCLEVELLOAD_API UClass* Z_Construct_UClass_UAsyncLevelLoadSceneComponent();
	ASYNCLEVELLOAD_API UClass* Z_Construct_UClass_UAsyncLevelLoadSceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AsyncLevelLoad();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncLevelLoadSceneComponent::execAsyncLevelLoadByObjectReference)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_WorldSoftObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncLevelLoadByObjectReference(Z_Param_WorldSoftObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncLevelLoadSceneComponent::execAsyncLevelLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelDir);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncLevelLoad(Z_Param_LevelDir,Z_Param_LevelName);
		P_NATIVE_END;
	}
	void UAsyncLevelLoadSceneComponent::StaticRegisterNativesUAsyncLevelLoadSceneComponent()
	{
		UClass* Class = UAsyncLevelLoadSceneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLevelLoad", &UAsyncLevelLoadSceneComponent::execAsyncLevelLoad },
			{ "AsyncLevelLoadByObjectReference", &UAsyncLevelLoadSceneComponent::execAsyncLevelLoadByObjectReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics
	{
		struct AsyncLevelLoadSceneComponent_eventAsyncLevelLoad_Parms
		{
			FString LevelDir;
			FString LevelName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelDir = { "LevelDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLevelLoadSceneComponent_eventAsyncLevelLoad_Parms, LevelDir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelDir_MetaData), Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLevelLoadSceneComponent_eventAsyncLevelLoad_Parms, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelName_MetaData), Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncLevelLoad" },
		{ "ModuleRelativePath", "Public/AsyncLevelLoadSceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLevelLoadSceneComponent, nullptr, "AsyncLevelLoad", nullptr, nullptr, Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::AsyncLevelLoadSceneComponent_eventAsyncLevelLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::AsyncLevelLoadSceneComponent_eventAsyncLevelLoad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics
	{
		struct AsyncLevelLoadSceneComponent_eventAsyncLevelLoadByObjectReference_Parms
		{
			TSoftObjectPtr<UWorld> WorldSoftObject;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldSoftObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::NewProp_WorldSoftObject = { "WorldSoftObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLevelLoadSceneComponent_eventAsyncLevelLoadByObjectReference_Parms, WorldSoftObject), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::NewProp_WorldSoftObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncLevelLoad" },
		{ "ModuleRelativePath", "Public/AsyncLevelLoadSceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLevelLoadSceneComponent, nullptr, "AsyncLevelLoadByObjectReference", nullptr, nullptr, Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::AsyncLevelLoadSceneComponent_eventAsyncLevelLoadByObjectReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::AsyncLevelLoadSceneComponent_eventAsyncLevelLoadByObjectReference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncLevelLoadSceneComponent);
	UClass* Z_Construct_UClass_UAsyncLevelLoadSceneComponent_NoRegister()
	{
		return UAsyncLevelLoadSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AsyncLevelLoad,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoad, "AsyncLevelLoad" }, // 3727044163
		{ &Z_Construct_UFunction_UAsyncLevelLoadSceneComponent_AsyncLevelLoadByObjectReference, "AsyncLevelLoadByObjectReference" }, // 2574745569
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AsyncLevelLoadSceneComponent.h" },
		{ "ModuleRelativePath", "Public/AsyncLevelLoadSceneComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLevelLoadSceneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::ClassParams = {
		&UAsyncLevelLoadSceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAsyncLevelLoadSceneComponent()
	{
		if (!Z_Registration_Info_UClass_UAsyncLevelLoadSceneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLevelLoadSceneComponent.OuterSingleton, Z_Construct_UClass_UAsyncLevelLoadSceneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncLevelLoadSceneComponent.OuterSingleton;
	}
	template<> ASYNCLEVELLOAD_API UClass* StaticClass<UAsyncLevelLoadSceneComponent>()
	{
		return UAsyncLevelLoadSceneComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLevelLoadSceneComponent);
	UAsyncLevelLoadSceneComponent::~UAsyncLevelLoadSceneComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_roy00_OneDrive_5_3_AsyncLevelLoad_HostProject_Plugins_AsyncLevelLoad_Source_AsyncLevelLoad_Public_AsyncLevelLoadSceneComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_roy00_OneDrive_5_3_AsyncLevelLoad_HostProject_Plugins_AsyncLevelLoad_Source_AsyncLevelLoad_Public_AsyncLevelLoadSceneComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLevelLoadSceneComponent, UAsyncLevelLoadSceneComponent::StaticClass, TEXT("UAsyncLevelLoadSceneComponent"), &Z_Registration_Info_UClass_UAsyncLevelLoadSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLevelLoadSceneComponent), 2542920106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_roy00_OneDrive_5_3_AsyncLevelLoad_HostProject_Plugins_AsyncLevelLoad_Source_AsyncLevelLoad_Public_AsyncLevelLoadSceneComponent_h_1112318453(TEXT("/Script/AsyncLevelLoad"),
		Z_CompiledInDeferFile_FID_Users_roy00_OneDrive_5_3_AsyncLevelLoad_HostProject_Plugins_AsyncLevelLoad_Source_AsyncLevelLoad_Public_AsyncLevelLoadSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_roy00_OneDrive_5_3_AsyncLevelLoad_HostProject_Plugins_AsyncLevelLoad_Source_AsyncLevelLoad_Public_AsyncLevelLoadSceneComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
