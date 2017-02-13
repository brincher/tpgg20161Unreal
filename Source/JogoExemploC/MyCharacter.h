// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class JOGOEXEMPLOC_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
private: 
	// Permite visualizar e editar as características do componente que está logo abaixo.
	UPROPERTY(EditAnywhere)

	// Ajusta a câmera à personagem [distância, conexão, etc.]
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere)
	// Define câmera 
	UCameraComponent* Camera;


	void Move(float Value);

	void MoveSides(float Value);

	void Jump(bool Value);


	
};
