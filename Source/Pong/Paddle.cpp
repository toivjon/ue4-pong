// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "Paddle.h"

#include "ConstructorHelpers.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"

APaddle::APaddle(const FObjectInitializer& objectInitializer) : APawn(objectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

  // get a reference on the sprite from the sprites directory.
  ConstructorHelpers::FObjectFinder<UPaperSprite> sprite(TEXT("PaperSprite'/Game/Sprites/Paddle.Paddle'"));

  // construct and attach a new sprite component with the loaded sprite.
  mSprite = objectInitializer.CreateDefaultSubobject<UPaperSpriteComponent>(this, TEXT("SpriteComponent"));
  mSprite->SetSprite(sprite.Object);
}

void APaddle::BeginPlay()
{
	Super::BeginPlay();	
}

void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

