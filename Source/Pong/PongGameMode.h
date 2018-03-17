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
    virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
    virtual void StartPlay() override;
  private:
    class ACamera*      mCamera;
    class ABall*        mBall;
    class APaddle*      mLeftPaddle;
    class APaddle*      mRightPaddle;
    class AWall*        mTopWall;
    class AWall*        mBottomWall;
    class ACenterLine*  mCenterLine;
};
