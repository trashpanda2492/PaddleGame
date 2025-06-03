// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreZone.h"
#include "Paddle.h"
#include "Components/BoxComponent.h"
#include "Ball.h"

// Sets default values
AScoreZone::AScoreZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ScoreZone = CreateDefaultSubobject<UBoxComponent>(TEXT("Score Zone"));
	SetRootComponent(ScoreZone);
	ScoreZone->SetCollisionProfileName(FName("OverlapAll"));
}

// Called when the game starts or when spawned
void AScoreZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScoreZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScoreZone::ScoreOverlap(AActor* OtherActor)
{
	ABall* BallRef = Cast<ABall>(OtherActor);

	if (BallRef)
	{
		if (ScoringPaddle)
		{
			ScoringPaddle->score++;

			if (ScoringPaddle->score >= 5)
				ScoringPaddle->GameOver();

			BallRef->ResetBall();
		}
	}
}

