// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor.h"
#include "MyTargetActor.generated.h"

class UGameplayAbility;

UCLASS()
class THEBRAVEMONK_API AMyTargetActor : public AGameplayAbilityTargetActor
{
	GENERATED_BODY()
	
public:
	// Expose the function to Blueprint
   	UFUNCTION(BlueprintCallable, Category = "Targeting")
	virtual void StartTargeting(UGameplayAbility* Ability) override;
   	// virtual void StartTargeting_Implementation(AActor* TargetActor) override;
};
