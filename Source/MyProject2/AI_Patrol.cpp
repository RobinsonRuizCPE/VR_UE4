// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Patrol.h"

// Sets default values
AAI_Patrol::AAI_Patrol()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAI_Patrol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI_Patrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAI_Patrol::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

