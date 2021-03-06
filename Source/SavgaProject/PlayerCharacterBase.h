// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacterBase.generated.h"

UCLASS()
class SAVGAPROJECT_API APlayerCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacterBase();

	// The properties of player's status and inventory
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	FVector Location = GetActorLocation();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	float MaxHealth = 200.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	float CurrentHealth;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	int HealthPack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	int DoorKey;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	int QuestItem;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category="SavedVariables")
	FString QuestText;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
