// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"

UCLASS()
class PONG_API ABall : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
		float CurrentBallSpeed = 5;
	
	UPROPERTY(EditDefaultsOnly)
		float StartingBallSpeed = 5;

	UPROPERTY(EditDefaultsOnly)
		float BallSpeedupIncrement = 3;
	
	UPROPERTY(VisibleAnywhere)
		FVector BallDirection;

	FVector InitPos;
public:	
	// Sets default values for this actor's properties
	ABall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* Mesh;
	
	UPROPERTY(EditDefaultsOnly)
		class UCapsuleComponent* Collider;

	UFUNCTION(BlueprintCallable)
		void OnBallHit(AActor* OtherActor);

	void ResetBall();
};
