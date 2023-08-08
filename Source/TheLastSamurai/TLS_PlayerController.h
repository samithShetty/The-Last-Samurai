// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TLS_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class THELASTSAMURAI_API ATLS_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void AddPitchInput(float Val) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Camera Controls")
	float MinCameraAngle;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Camera Controls")
	float MaxCameraAngle;

	UFUNCTION(BlueprintCallable, Category = "Camera Controls")
	void UpdateControlRotation (float XRotation, float YRotation);
	
};
