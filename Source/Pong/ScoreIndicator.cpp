// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "ScoreIndicator.h"

#include "ConstructorHelpers.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"

AScoreIndicator::AScoreIndicator(const FObjectInitializer& objectInitializer) : AActor(objectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

  // get a reference on the sprite from the sprites directory.
  ConstructorHelpers::FObjectFinder<UPaperSprite> sprite(TEXT("PaperSprite'/Game/Sprites/Zero.Zero'"));

  // construct and attach a new sprite component with the loaded sprite.
  mSprite = objectInitializer.CreateDefaultSubobject<UPaperSpriteComponent>(this, TEXT("SpriteComponent"));
  mSprite->SetSprite(sprite.Object);
}

void AScoreIndicator::BeginPlay()
{
	Super::BeginPlay();	
}

void AScoreIndicator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

