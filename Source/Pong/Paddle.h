// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

UCLASS()
class PONG_API APaddle : public APawn
{
  GENERATED_BODY()
  public:
    APaddle() = default;
    APaddle(const FObjectInitializer& objectInitializer);
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
  protected:
    virtual void BeginPlay() override;
  private:
    class UPaperSpriteComponent* mSprite;
};
