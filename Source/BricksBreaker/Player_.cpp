// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_.h"

// Sets default values
APlayer_::APlayer_()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayer_::Color(float _color)
{
	color = _color;
}

void APlayer_::Movimiento(float _movimiento)
{
	movimiento = _movimiento;
}


// Called when the game starts or when spawned
void APlayer_::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

