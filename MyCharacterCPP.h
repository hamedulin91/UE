// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacterCPP.generated.h"

UCLASS()
class MYPROJECTCPP2_API AMyCharacterCPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterCPP();
	
	UPROPERTY(EditDefaultsOnly,Category = "CharacterStamina") //Отобразить в движке с именем чарастер стамина и чтобы могли им пользоваться Система Рифлексии
	float CharacterStamina; //Выносливость

	bool bIsTired; //Устал персонаж


	float GetStaminaPercent(); // получает стамину
	float AddStamina(); // добаялет выносливость
	float DecreasStamina(); //уменьшает стамину

	bool StaminaIsZero(); //возвращает булево есть стамина или нет

	UPROPERTY(EditDefaultsOnly, Category = "CharasterStamina") //EditDefaultOnly редактирвать олько во влкадке детайлс
	USoundBase* TiredSound; //звук когда устал уже из имеющихся в анриле

	UPROPERTY(EditDefaultsOnly, Category = "CharasterStamina")
	UAnimMontage* VertigoAnimation; //Анимация головокружения из уже имеющихся в анриле

};
