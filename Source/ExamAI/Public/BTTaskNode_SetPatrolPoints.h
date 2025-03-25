// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AIEntity_Patrol.h"
#include "BTTaskNode_SetPatrolPoints.generated.h"

/**
 * 
 */
UCLASS()
class EXAMAI_API UBTTaskNode_SetPatrolPoints : public UBTTaskNode
{
	GENERATED_BODY()
public:
    UBTTaskNode_SetPatrolPoints();

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "AI")
    EAIBehaviorState BehaviorState;
};
