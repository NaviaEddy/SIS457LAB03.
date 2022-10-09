// Fill out your copyright notice in the Description page of Project Settings.


#include "Antipotenciador.h"

// Sets default values
AAntipotenciador::AAntipotenciador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AAntipotenciador::Color(float _color)
{
	color = _color;
}

// Called when the game starts or when spawned
void AAntipotenciador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAntipotenciador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

