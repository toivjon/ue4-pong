// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "Camera.h"
#include "Camera/CameraComponent.h"

ACamera::ACamera(const FObjectInitializer& objectInitializer) : ACameraActor(objectInitializer)
{
  UCameraComponent* camera = GetCameraComponent();
  camera->ProjectionMode = ECameraProjectionMode::Orthographic;
  camera->SetRelativeLocation(FVector(0.f, 100.f, 0.f));
  camera->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
  camera->SetAbsolute(true, true, true);
}
