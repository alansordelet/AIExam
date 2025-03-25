// Fill out your copyright notice in the Description page of Project Settings.

#include "AIEntity_Patrol.h"
#include "GameFramework/Actor.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"


AAIEntity_Patrol::AAIEntity_Patrol()
{
	PrimaryActorTick.bCanEverTick = true;

}
void AAIEntity_Patrol::BeginPlay()
{
	Super::BeginPlay();
}

void AAIEntity_Patrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAIEntity_Patrol::StartPatrol()
{
    if (PatrolPoints.Num() > 0)
    {
        CurrentPatrolIndex = 0;
        AAIController* AIController = Cast<AAIController>(GetOwner());
        if (AIController)
        {
            AIController->MoveToActor(PatrolPoints[CurrentPatrolIndex]);
        }
    }
}
