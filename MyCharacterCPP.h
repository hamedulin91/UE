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
	
	UPROPERTY(EditDefaultsOnly,Category = "CharacterStamina") //���������� � ������ � ������ �������� ������� � ����� ����� �� ������������ ������� ���������
	float CharacterStamina; //������������

	bool bIsTired; //����� ��������


	float GetStaminaPercent(); // �������� �������
	float AddStamina(); // �������� ������������
	float DecreasStamina(); //��������� �������

	bool StaminaIsZero(); //���������� ������ ���� ������� ��� ���

	UPROPERTY(EditDefaultsOnly, Category = "CharasterStamina") //EditDefaultOnly ������������ ����� �� ������� �������
	USoundBase* TiredSound; //���� ����� ����� ��� �� ��������� � ������

	UPROPERTY(EditDefaultsOnly, Category = "CharasterStamina")
	UAnimMontage* VertigoAnimation; //�������� �������������� �� ��� ��������� � ������

};
