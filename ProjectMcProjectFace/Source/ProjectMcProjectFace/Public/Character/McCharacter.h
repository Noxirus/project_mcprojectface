// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "McCharacter.generated.h"

UCLASS()
class PROJECTMCPROJECTFACE_API AMcCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMcCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	float Health = 100.f;

protected:
	virtual void BeginPlay() override;


};
