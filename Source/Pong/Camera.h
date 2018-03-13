// Copyright 2018 Joni Toiviainen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Camera.generated.h"

UCLASS()
class PONG_API ACamera : public ACameraActor
{
  GENERATED_BODY()
  public:
    ACamera() = default;
    ACamera(const FObjectInitializer& objectInitializer);
    FVector2D GetViewDimensions() const;
};
