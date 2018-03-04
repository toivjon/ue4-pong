// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Goal.generated.h"

UCLASS()
class PONG_API AGoal : public AActor
{
  GENERATED_BODY()
  public:
    AGoal();
    virtual void Tick(float DeltaTime) override;
  protected:
    virtual void BeginPlay() override;
};
