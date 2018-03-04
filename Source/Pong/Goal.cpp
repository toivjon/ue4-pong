// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "Goal.h"

AGoal::AGoal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AGoal::BeginPlay()
{
	Super::BeginPlay();	
}

void AGoal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

