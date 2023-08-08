// Fill out your copyright notice in the Description page of Project Settings.


#include "TLS_PlayerCharacter.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
ATLS_PlayerCharacter::ATLS_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATLS_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	ULocalPlayer* player = Cast<APlayerController>(GetController())->GetLocalPlayer();
	UEnhancedInputLocalPlayerSubsystem* subsystem = player->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	subsystem->AddMappingContext(InputMapping, 0);
}

void ATLS_PlayerCharacter::BeginDestroy()
{
	Super::BeginDestroy();
}

// Called every frame
void ATLS_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

