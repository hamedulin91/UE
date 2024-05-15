// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCharacterCPP.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "SirenogolovCPP.generated.h"


/**
 * 
 */
UCLASS()
class MYPROJECTCPP2_API ASirenogolovCPP : public AMyCharacterCPP
{
	GENERATED_BODY()
	
public:

		ASirenogolovCPP();

		UPROPERTY(VisibleAnywhere)
		USpringArmComponent* SpringArm;

		UPROPERTY(VisibleAnywhere)
		UCameraComponent* Camera;

		virtual void SetupPlayerInputComponent(class UInputComponent* MyPlayerInput) override;

		void MoveForwardBackword(float value);

		void MoveRightLeft(float value);

		void Jump();

		void StopJump();
};
