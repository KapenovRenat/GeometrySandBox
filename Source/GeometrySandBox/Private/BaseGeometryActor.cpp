// Fill out your copyright notice in the Description page of Project Settings.



#include "BaseGeometryActor.h"


DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All);

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();
	
	printTypes();
	// printStringTypes();
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGeometryActor::printTypes()
{
	UE_LOG(LogTemp, Display, TEXT("Actor name %s"), *GetName());
	UE_LOG(LogTemp, Display, TEXT("WeaponNum: %d, KillsNum: %i"), WeaponNum, KillsNum);
	UE_LOG(LogTemp, Display, TEXT("IsDead: %d"), IsDead);
	UE_LOG(LogTemp, Display, TEXT("IsTest: %d"), static_cast<int>(IsTest));
}

void ABaseGeometryActor::printStringTypes()
{
	FString Name = "Renat";
	UE_LOG(LogBaseGeometry, Display, TEXT("NAME: %s"), *Name);

	FString WeaponNumStr = "WeaponNumStr = " + FString::FromInt(WeaponNum);
	FString HealthStr = "HealthStr = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "IsDead = " + FString(IsDead ? "true" : "false");

	FString Stat = FString::Printf(TEXT(" \n == Stat All == \n %s \n %s \n %s "), *WeaponNumStr, *HealthStr, *IsDeadStr);

	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, Stat);
}

