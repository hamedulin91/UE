// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterCPP.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyCharacterCPP::AMyCharacterCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //���������� ������ ����. ���� ��� ��������� �����. ����� �� ���� ������� ����� �����  ��� �����������

	CharacterStamina = 100.0f; //���������������� ���������� 100. ������������  � ��� 100
	bIsTired = false; //� ������ ������ ��������� � ��� �����. �� ���� �� ����� 


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
	if (CharacterStamina <= 0) //���� ������ ���� �� �������� �����
	{
		bIsTired = true;
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision); //���� ����������� ������������ �� ��������� �������� � ������� ���������� ����� �� ������ � ����
	}

	UGameplayStatics::SpawnSoundAtLocation(this, TiredSound, GetActorLocation());//����. �����������. ��������� ������� ��� ���� ���, ���� ���������� �����, ��� � ����� ������� � ������� ������ ������

	return bIsTired;
}