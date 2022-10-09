// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Player_.generated.h"

UCLASS()
class BRICKSBREAKER_API APlayer_ : public AActor
{
	GENERATED_BODY()

private:
	float color;
	float movimiento;

	
public:	
	// Sets default values for this actor's properties
	APlayer_();
	void Color(float _color);
	void Movimiento(float _movimiento);

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float lanzamiento = 2.0f;
	float vidas = 3.0f;

public:	
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

};
