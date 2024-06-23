// Copyright Aura

#pragma once

#include "CoreMinimal.h"
#include "AuraBaseCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class GAS_AURA_API AAuraEnemy : public AAuraBaseCharacter,public IEnemyInterface
{
	GENERATED_BODY()
public:
	AAuraEnemy();
protected:
	virtual void BeginPlay() override;
	//~Enemy Interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//~End Enemy Interface

};
