// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MCPlayerController.generated.h"

/**
 * Ability System aware player controller.
 */
UCLASS()
class MCGAMEPLAYABILITIES_API AMCPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn);
	virtual void AcknowledgePossession(class APawn* P) override;

	UFUNCTION()
		void UpdateCharacter();

protected:
	TSubclassOf<class AMCGameplayAbilitiesCharacter> AbilityCharacterClass;



};
