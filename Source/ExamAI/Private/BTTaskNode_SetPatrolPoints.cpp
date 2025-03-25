// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_SetPatrolPoints.h"

UBTTaskNode_SetPatrolPoints::UBTTaskNode_SetPatrolPoints()
{
}

EBTNodeResult::Type UBTTaskNode_SetPatrolPoints::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	AActor* Owner = OwnerComp.GetAIOwner()->GetPawn();
	AAIEntity_Patrol* AIEntity = Cast<AAIEntity_Patrol>(Owner);
	if (AIEntity)
	{
		AIEntity->StartPatrol();
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
