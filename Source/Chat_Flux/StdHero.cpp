// Fill out your copyright notice in the Description page of Project Settings.


#include "StdHero.h"

// Sets default values
AStdHero::AStdHero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStdHero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStdHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStdHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

