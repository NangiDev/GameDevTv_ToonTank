// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANK_API ATower : public ABasePawn
{
	GENERATED_BODY()

public:

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly, Category= "Combat")
	float FireRange = 700.f;
};
