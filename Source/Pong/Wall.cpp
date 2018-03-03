// Copyright 2018 Joni Toiviainen All Rights Reserved.

#include "Wall.h"

#include "ConstructorHelpers.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"

AWall::AWall(const FObjectInitializer& objectInitializer) : Super(objectInitializer), mSprite(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

  // get a reference on the wall sprite from the sprites directory.
  ConstructorHelpers::FObjectFinder<UPaperSprite> sprite(TEXT("PaperSprite'/Game/Sprites/Wall.Wall'"));

  // construct and attach a new sprite component with the loaded sprite.
  mSprite = objectInitializer.CreateDefaultSubobject<UPaperSpriteComponent>(this, TEXT("SpriteComponent"));
  mSprite->SetSprite(sprite.Object);
}

void AWall::BeginPlay()
{
	Super::BeginPlay();
}
