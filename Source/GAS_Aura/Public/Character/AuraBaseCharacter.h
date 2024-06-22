// Copyright Aura

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraBaseCharacter.generated.h"
//抽象类
UCLASS(Abstract)
class GAS_AURA_API AAuraBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AAuraBaseCharacter();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
