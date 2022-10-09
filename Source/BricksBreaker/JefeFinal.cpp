// Fill out your copyright notice in the Description page of Project Settings.


#include "JefeFinal.h"

// Sets default values
AJefeFinal::AJefeFinal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AJefeFinal::Agresividad(float _agresividad)
{
	agresividad = _agresividad;
}

// Called when the game starts or when spawned
void AJefeFinal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJefeFinal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

