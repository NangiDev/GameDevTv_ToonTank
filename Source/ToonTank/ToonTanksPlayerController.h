// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ToonTanksPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANK_API AToonTanksPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetPlayerEnableState(bool bPlayerEnabled);
};