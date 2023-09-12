//AsyncLevelLoadSceneComponent.h
// Copyright 2023, roy00227, All rights reserved


#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AsyncLevelLoadSceneComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ASYNCLEVELLOAD_API UAsyncLevelLoadSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "AsyncLevelLoad")
		void AsyncLevelLoad(const FString& LevelDir, const FString& LevelName);

	UFUNCTION(BlueprintCallable, Category = "AsyncLevelLoad")
		void AsyncLevelLoadByObjectReference(TSoftObjectPtr<UWorld> WorldSoftObject);


public:
	// Sets default values for this component's properties
	UAsyncLevelLoadSceneComponent();

};