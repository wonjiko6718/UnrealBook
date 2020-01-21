// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookPractice.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOOKPRACTICE_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AABGameMode();
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
