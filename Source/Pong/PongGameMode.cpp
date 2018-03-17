// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "PongGameMode.h"
#include "Camera.h"
#include "Ball.h"
#include "CenterLine.h"
#include "Paddle.h"
#include "Wall.h"
#include "Engine/World.h"

#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

void APongGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
  // ....
  DefaultPawnClass = nullptr;
  Super::InitGame(MapName, Options, ErrorMessage);
}

void APongGameMode::StartPlay()
{
  Super::StartPlay();
  auto world = GetWorld();
  if (world != nullptr) {
    // create and assign a locked and static orthographic camera.
    mCamera = world->SpawnActor<ACamera>(ACamera::StaticClass());
    mCamera->Rename(TEXT("Camera"));
    mCamera->SetActorLabel(mCamera->GetName());
    world->GetFirstPlayerController()->SetViewTarget(mCamera);

    // get the camera dimensions reference to position other entities.
    auto dimensions = mCamera->GetViewDimensions();
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("dimensions: x: %f, y: %f"), dimensions.X, dimensions.Y));
    FVector origin, extent;

    // create a paddle on the left side of the game scene.
    mLeftPaddle = world->SpawnActor<APaddle>(APaddle::StaticClass());
    mLeftPaddle->Rename(TEXT("Left Paddle"));
    mLeftPaddle->SetActorLabel(mLeftPaddle->GetName());
    mLeftPaddle->GetActorBounds(false, origin, extent);
    auto leftPaddleLocation = mLeftPaddle->GetActorLocation();
    leftPaddleLocation.X = -(dimensions.X / 2) + (3 * extent.X);
    mLeftPaddle->SetActorLocation(leftPaddleLocation);

    // create a paddle on the right side of the game scene.
    mRightPaddle = world->SpawnActor<APaddle>(APaddle::StaticClass());
    mRightPaddle->Rename(TEXT("Right Paddle"));
    mRightPaddle->SetActorLabel(mRightPaddle->GetName());
    mRightPaddle->GetActorBounds(false, origin, extent);
    auto rightPaddleLocation = mRightPaddle->GetActorLocation();
    rightPaddleLocation.X = (dimensions.X / 2) - (3 * extent.X);
    mRightPaddle->SetActorLocation(rightPaddleLocation);

    // create a wall on the top of the scene.
    mTopWall = world->SpawnActor<AWall>(AWall::StaticClass());
    mTopWall->Rename(TEXT("Top Wall"));
    mTopWall->SetActorLabel(mTopWall->GetName());
    mTopWall->GetActorBounds(false, origin, extent);
    auto topWallLocation = mTopWall->GetActorLocation();
    topWallLocation.Z = (dimensions.Y / 2) - extent.Z;
    mTopWall->SetActorLocation(topWallLocation);

    // create a wall on the bottom of the scene.
    mBottomWall = world->SpawnActor<AWall>(AWall::StaticClass());
    mBottomWall->Rename(TEXT("Bottom Wall"));
    mBottomWall->SetActorLabel(mBottomWall->GetName());
    mBottomWall->GetActorBounds(false, origin, extent);
    auto bottomWallLocation = mBottomWall->GetActorLocation();
    bottomWallLocation.Z = -(dimensions.Y / 2) + extent.Z;
    mBottomWall->SetActorLocation(bottomWallLocation);

    // create a ball on the center and middle of the scene.
    mBall = world->SpawnActor<ABall>(ABall::StaticClass());
    mBall->Rename(TEXT("Ball"));
    mBall->SetActorLabel(mBall->GetName());

    // create the center line in the center of the court.
    mCenterLine = world->SpawnActor<ACenterLine>(ACenterLine::StaticClass());
    mCenterLine->Rename(TEXT("CenterLine"));
    mCenterLine->SetActorLabel(mCenterLine->GetName());
    auto centerLineRotation = mCenterLine->GetActorRotation();
    centerLineRotation.Pitch = 90.f;
    mCenterLine->SetActorRotation(centerLineRotation);
  }
}