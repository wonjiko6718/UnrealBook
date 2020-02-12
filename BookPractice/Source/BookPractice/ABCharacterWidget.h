// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookPractice.h"
#include "Blueprint/UserWidget.h"
#include "ABCharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class BOOKPRACTICE_API UABCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void BindCharacterStat(class UABCharacterStatComponent* NewCharacterStat);
private:
	TWeakObjectPtr<class UABharacterStatComponent> CurrentCharacterStat;
};
