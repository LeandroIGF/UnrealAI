// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorCrash.h"

// Sets default values
AMyActorCrash::AMyActorCrash()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorCrash::BeginPlay()
{
	Super::BeginPlay();

	AActor* ActorCrash = nullptr;
	// Simulating crash by trying to set location of a null pointer
	ActorCrash->SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	
}

// Called every frame
void AMyActorCrash::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

