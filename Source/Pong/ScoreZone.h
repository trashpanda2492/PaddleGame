// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScoreZone.generated.h"

UCLASS()
class PONG_API AScoreZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScoreZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true))
		class APaddle* ScoringPaddle;

	UPROPERTY(EditDefaultsOnly)
		class UBoxComponent* ScoreZone;

	UFUNCTION(BlueprintCallable)
		void ScoreOverlap(AActor* OtherActor);
};
