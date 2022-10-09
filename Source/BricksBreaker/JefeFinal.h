// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JefeFinal.generated.h"

UCLASS()
class BRICKSBREAKER_API AJefeFinal : public AActor
{
	GENERATED_BODY()
protected:
	float agresividad;
	
public:	
	// Sets default values for this actor's properties
	AJefeFinal();
	void Agresividad(float _agresividad);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float salud = 50.0f;
	float movimiento = 2.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
