// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIEntity.h"
#include "Entity_AIController.h"
#include "AIEntity_Patrol.generated.h"

/**
 * 
 */
UCLASS()
class EXAMAI_API AAIEntity_Patrol : public AAIEntity
{
	GENERATED_BODY()

	AAIEntity_Patrol();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void StartPatrol();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	int32 CurrentPatrolIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TArray<AActor*> PatrolPoints;
};
