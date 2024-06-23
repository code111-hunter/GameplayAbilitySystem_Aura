// Copyright Aura

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "AuraPlayerController.generated.h"


class IEnemyInterface;
class UInputMappingContext;
class UInputAction;
/**
 * 
 */
UCLASS()
class GAS_AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;
protected:

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	UPROPERTY(EditAnywhere,Category = "Input")
	TObjectPtr<UInputMappingContext> AuraContext;
	
	UPROPERTY(EditAnywhere,Category = "Input")
	TObjectPtr<UInputAction> AuraInputAction;
	
	void IA_Move(const FInputActionValue& Value);

	void CursorTrace();

	TObjectPtr<IEnemyInterface> LastActor;
	TObjectPtr<IEnemyInterface> ThisActor;


	
};
