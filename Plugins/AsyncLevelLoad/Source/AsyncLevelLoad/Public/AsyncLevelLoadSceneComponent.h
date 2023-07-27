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

	/*
	UFUNCTION(BlueprintCallable, Category = "AsyncLevelLoad")
		float GetLoadPercentage();
	*/

private:
	void AsyncLevelLoadFinished(const FString LevelName);


public:
	// Sets default values for this component's properties
	UAsyncLevelLoadSceneComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};