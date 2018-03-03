// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Wall.generated.h"

UCLASS()
class PONG_API AWall : public AActor
{
  GENERATED_BODY()
  public:
    AWall() = default;
    AWall(const FObjectInitializer& objectInitializer);
  protected:
    virtual void BeginPlay() override;
  private:
    class UPaperSpriteComponent* mSprite;
};
