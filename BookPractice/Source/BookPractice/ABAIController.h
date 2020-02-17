// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookPractice.h"
#include "AIController.h"
#include "ABAIController.generated.h"

/**
 * 
 */
UCLASS()
class BOOKPRACTICE_API AABAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AABAIController();

	virtual void OnPossess(APawn* InPawn) override; // Ver.4.20+ Possess->OnPossess
	 // virtual void OnUnPossess() override; -->> Ver.4.20+ UnPossess->OnUnPossess

	static const FName HomePosKey;
	static const FName PatrolPosKey;
	static const FName TargetKey;

private:
	UPROPERTY()
		class UBehaviorTree* BTAsset;
	UPROPERTY()
		class UBlackboardData* BBAsset;
};