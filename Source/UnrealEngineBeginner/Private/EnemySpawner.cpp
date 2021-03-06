// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "SimpleEnemy.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
    Super::BeginPlay();

    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemySpawner::EnemyGenerator, 3.0f, true);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemySpawner::EnemyGenerator()
{
    GetWorld()->SpawnActor<ASimpleEnemy>(EnemyPawn, GetActorLocation(), GetActorRotation());
}
