// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterCPP.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyCharacterCPP::AMyCharacterCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //Вызывается каждый кадр. было тру поставили фосле. чтобы не было каждого кадро вызов  для ОПТИМИЗАЦИИ

	CharacterStamina = 100.0f; //инициализаровали параметром 100. выносливость  у нас 100
	bIsTired = false; //с самого начала усталость у нас фалсе. то есть НЕ устал 


}

float AMyCharacterCPP::GetStaminaPercent()
{
	return CharacterStamina;
}

float AMyCharacterCPP::AddStamina()
{
	return 0.0f;
}

float AMyCharacterCPP::DecreasStamina()
{
	return 0.0f;
}

bool AMyCharacterCPP::StaminaIsZero()
{
	if (CharacterStamina <= 0) //если меньше нуля то персонаж устал
	{
		bIsTired = true;
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision); //если закончилась выносливость то октлючаем коллицию с капсуле комонентом чтобы не улетал в небо
	}

	UGameplayStatics::SpawnSoundAtLocation(this, TiredSound, GetActorLocation());//звук. анриловский. параметры функции это Этот Мир, НАша переменная звука, где в какой лоакции в локации нашего актера

	return bIsTired;
}