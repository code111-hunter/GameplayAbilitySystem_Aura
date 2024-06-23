// Copyright Aura


#include "Character/AuraBaseCharacter.h"

// Sets default values
AAuraBaseCharacter::AAuraBaseCharacter()
{
 
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* AAuraBaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


void AAuraBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


