// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "Components/CapsuleComponent.h"
#include "Paddle.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	SetRootComponent(Collider);
	Collider->SetCollisionProfileName(TEXT("BlockAll"));

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentBallSpeed = StartingBallSpeed;
	BallDirection = FVector(1.f, -1.f, 0.f);

	InitPos = GetActorLocation();
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (BallDirection * CurrentBallSpeed * DeltaTime);
	SetActorLocation(NewLocation, true);
}

void ABall::OnBallHit(AActor* OtherActor)
{
	CurrentBallSpeed += BallSpeedupIncrement;

	if (Cast<APaddle>(OtherActor))
	{
		BallDirection.Y = -BallDirection.Y;
		return;
	}
	
	BallDirection.X = -BallDirection.X;
}

void ABall::ResetBall()
{
	SetActorLocation(InitPos);
	CurrentBallSpeed = StartingBallSpeed;
}

