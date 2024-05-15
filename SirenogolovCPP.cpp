// Fill out your copyright notice in the Description page of Project Settings.


#include "SirenogolovCPP.h"

ASirenogolovCPP::ASirenogolovCPP() :Super()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponetnt"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 300.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	Camera->SetupAttachment(SpringArm);

}

void ASirenogolovCPP::SetupPlayerInputComponent(UInputComponent* MyPlayerInput)
{
	MyPlayerInput->BindAxis("MoveForwardBackword", this, &ASirenogolovCPP::MoveForwardBackword);
}
