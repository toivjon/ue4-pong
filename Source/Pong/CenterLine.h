// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CenterLine.generated.h"

UCLASS()
class PONG_API ACenterLine : public AActor
{
  GENERATED_BODY()
  public:
    ACenterLine() = default;
    ACenterLine(const FObjectInitializer& objectInitializer);
    virtual void Tick(float DeltaTime) override;
  protected:
    virtual void BeginPlay() override;
  private:
    class UPaperSpriteComponent* mSprite;
};
