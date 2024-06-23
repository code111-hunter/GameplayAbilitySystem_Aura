// Copyright Aura

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "AuraBaseCharacter.generated.h"


class UAttributeSet;
class UAbilitySystemComponent;
//抽象类
UCLASS(Abstract)
class GAS_AURA_API AAuraBaseCharacter : public ACharacter,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AAuraBaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual UAttributeSet* GetAttributeSet() const{return AttributeSet;}
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
