// Fill out your copyright notice in the Description page of Project Settings.


#include "CaaGameMode.h"
#include "SaveManager.h"
#include "PlayerCharacterBase.h"
#include "UObject/ConstructorHelpers.h"

ACaaGameMode::ACaaGameMode()
{
	// Set default pawn class to the Blueprint character.
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GameBP/Blueprints/TeomanPlayer"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
};

void ACaaGameMode::InitGameState()
{
	USaveManager::QueryAllSaveInterfaces();
	USaveManager::LoadGame();

	Super::InitGameState();
}

APawn* ACaaGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform)
{
	APawn* Pawn = Super::SpawnDefaultPawnAtTransform_Implementation(NewPlayer, SpawnTransform);
	
	USaveManager::QueryAllSaveInterfaces();
	USaveManager::LoadGame();

	return Pawn;
}