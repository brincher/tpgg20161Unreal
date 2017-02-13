// Fill out your copyright notice in the Description page of Project Settings.

#include "JogoExemploC.h"
#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>
		(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetCapsuleComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>
		(TEXT("Camera"));
	Camera->SetupAttachment(CameraBoom);
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	InputComponent->BindAxis("Move", this, &AMyCharacter::Move);
	InputComponent->BindAxis("Side", this, &AMyCharacter::MoveSides);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump, 
}

// MÉTODO QUE MOVIMENTA O PERSONAGEM PARA A FRENTE E PARA TRÁS

void AMyCharacter::Move(float Value) {
	FVector Forward(1.0f, 0.0f, 0.0f);  //  X, Y, Z
	AddMovementInput(Forward, Value);

}

// MÉTODO QUE MOVIMENTA O PERSONAGEM PARA OS LADOS
void AMyCharacter::MoveSides(float Value) {
	FVector Side(0.0f, 1.0f, 0.0f); //  X, Y, Z
	AddMovementInput(Side, Value);
}


// MÉTODO QUE FAZ O PERSONAGEM PULAR
void AMyCharacter::Jump(bool false) {
	AddMovementInput(Jump, Value);
}

