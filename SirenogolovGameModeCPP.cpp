// Fill out your copyright notice in the Description page of Project Settings.


#include "SirenogolovGameModeCPP.h"

ASirenogolovGameModeCPP::ASirenogolovGameModeCPP() : Super()
{
	ConstructorHelpers::FClassFinder<APawn>MainCharacterSirenogolov(TEXT("/Game/Blueprints/MySirenogolovCPPBP"));

	DefaultPawnClass = MainCharacterSirenogolov.Class;
}