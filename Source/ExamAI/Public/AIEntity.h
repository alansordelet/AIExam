  // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIEntity.generated.h"

UENUM(BlueprintType)
enum class EAIBehaviorState : uint8
{
    Idle,
    Follow,
    Flee,
    Patrol,
    Seek,
    AttackMelee,
    AttackRanged,
    Defend,
    Hit,
    Investigate
};

UCLASS()
class EXAMAI_API AAIEntity : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIEntity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
