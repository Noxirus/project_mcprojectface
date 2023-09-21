// Fill out your copyright notice in the Description page o Project Settings.

#include "Character/McCharacter.h"

AMcCharacter::AMcCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMcCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
}

void AMcCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMcCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}