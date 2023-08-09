// Fill out your copyright notice in the Description page of Project Settings.


#include "TLS_PlayerController.h"

void ATLS_PlayerController::AddPitchInput(float Val)
{
	Super::AddPitchInput(Val);
}

void ATLS_PlayerController::UpdateControlRotation(float XRotation, float YRotation)
{
	FRotator Rotation = GetControlRotation();
	Rotation.Yaw += XRotation;
	Rotation.Pitch = FMath::ClampAngle(Rotation.Pitch + YRotation,MinCameraAngle,MaxCameraAngle);
	SetControlRotation(Rotation);
}
