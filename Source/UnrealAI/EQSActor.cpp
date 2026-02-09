// Fill out your copyright notice in the Description page of Project Settings.


#include "EQSActor.h"

// Sets default values
AEQSActor::AEQSActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AEQSActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEQSActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEQSActor::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	TagContainer = GameplayTags;
	return;
}

