// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class PARTIEL_ILANC_API MyRotatingMovement
{
public:
};
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/RotatingMovementComponent.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class YOURPROJECT_API MyRotatingMovement : public URotatingMovementComponent
{
	GENERATED_BODY()

public:
	// Ajoutez des m�thodes ou des propri�t�s personnalis�es au besoin
	MyRotatingMovement();
	~MyRotatingMovement();
};