// Fill out your copyright notice in the Description page of Project Settings.


#include "Cible.h"

// Sets default values
ACible::ACible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACible::GetKilled()
{
}

