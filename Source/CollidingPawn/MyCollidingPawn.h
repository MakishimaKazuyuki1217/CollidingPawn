// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "CollidingPawnMovementComponent.h"

#include "MyCollidingPawn.generated.h"		// TODO �����F���̃w�b�_���Ō�ɂȂ�悤�ɂ��Ȃ��ƃR���p�C���G���[




UCLASS()
class COLLIDINGPAWN_API AMyCollidingPawn : public APawn
{
	GENERATED_BODY()
	UPROPERTY()
	class UParticleSystemComponent* OurParticleSystem;

	UPROPERTY()
	class UCollidingPawnMovementComponent* OurMovementComponent;

public:
	// Sets default values for this pawn's properties
	AMyCollidingPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void Turn(float AxisValue);
	void ParticleToggle();
};
