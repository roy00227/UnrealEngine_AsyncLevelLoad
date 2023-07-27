// Copyright 2023, roy00227, All rights reserved


#include "AsyncLevelLoadSceneComponent.h"

#include "UObject/UObjectGlobals.h"
#include "Kismet/GameplayStatics.h"






void UAsyncLevelLoadSceneComponent::AsyncLevelLoad(const FString& LevelDir, const FString& LevelName)
{

	LoadPackageAsync(LevelDir + LevelName,
		FLoadPackageAsyncDelegate::CreateLambda([=](const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
			{
				if (Result == EAsyncLoadingResult::Succeeded)
				{
					AsyncLevelLoadFinished(LevelName);
				}

			}
		),
		0,
				PKG_ContainsMap);
}

void UAsyncLevelLoadSceneComponent::AsyncLevelLoadByObjectReference(TSoftObjectPtr<UWorld> WorldSoftObject)
{

	FString LevelPath = WorldSoftObject.ToString();

	LoadPackageAsync(LevelPath,
		FLoadPackageAsyncDelegate::CreateLambda([=](const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
			{
				if (Result == EAsyncLoadingResult::Succeeded)
				{
					UGameplayStatics::OpenLevelBySoftObjectPtr(this, WorldSoftObject);
				}

			}
		),
		0,
				PKG_ContainsMap);
}

void UAsyncLevelLoadSceneComponent::AsyncLevelLoadFinished(const FString LevelName)
{
	UGameplayStatics::OpenLevel(this, FName(*LevelName));

}



// Sets default values for this component's properties
UAsyncLevelLoadSceneComponent::UAsyncLevelLoadSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAsyncLevelLoadSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UAsyncLevelLoadSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

/*
float UAsyncLevelLoadSceneComponent::GetLoadPercentage()
{


}
*/