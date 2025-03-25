// Fill out your copyright notice in the Description page of Project Settings.


#include "Entity_AIController.h"

void AEntity_AIController::BeginPlay()
{
	Super::BeginPlay();
    if (AIBehaviorTree)
    {
        // Run the Behavior Tree
        RunBehaviorTree(AIBehaviorTree);
    }
}

void AEntity_AIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEntity_AIController::InitializeBlackboardKeys()
{
    if (UseBlackboard(AIBehaviorTree->BlackboardAsset, AIBlackboardComponent))
    {
        AIBlackboardComponent->SetValueAsObject("TargetActor", nullptr);
        AIBlackboardComponent->SetValueAsVector("TargetLocation", FVector::ZeroVector);
        AIBlackboardComponent->SetValueAsInt("PatrolIndex", 0);
        AIBlackboardComponent->SetValueAsBool("IsAlerted", false);
    }
}
