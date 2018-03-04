// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScoreIndicator.generated.h"

UCLASS()
class PONG_API AScoreIndicator : public AActor
{
  GENERATED_BODY()
  public:	
    AScoreIndicator() = default;
    AScoreIndicator(const FObjectInitializer& objectInitializer);
    virtual void Tick(float DeltaTime) override;
  protected:
    virtual void BeginPlay() override;
  private:
    class UPaperSpriteComponent* mSprite;
};
