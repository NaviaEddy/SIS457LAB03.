// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Antipotenciador.generated.h"

UCLASS()
class BRICKSBREAKER_API AAntipotenciador : public AActor
{
	GENERATED_BODY()
protected:
	float color;
	
public:	
	// Sets default values for this actor's properties
	AAntipotenciador();
	void Color(float _color);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float velocidad_de_caida = 8.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
