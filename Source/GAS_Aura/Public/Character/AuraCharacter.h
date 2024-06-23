// Copyright Aura

#pragma once

#include "CoreMinimal.h"
#include "AuraBaseCharacter.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GAS_AURA_API AAuraCharacter : public AAuraBaseCharacter
{
	GENERATED_BODY()
public:
	AAuraCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	void InitAbilityActorInfo();
	
};
