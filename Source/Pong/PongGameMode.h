// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
  GENERATED_BODY()
  public:
    virtual void StartPlay() override;

};
