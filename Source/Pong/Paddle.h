// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

UCLASS()
class PONG_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UFloatingPawnMovement* MovementComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		class UBoxComponent* Collider;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere)
	int score;

	UFUNCTION(BlueprintCallable)
		int GetScore() { return score; }

	UFUNCTION(BlueprintImplementableEvent)
		void GameOver();
private:
	UPROPERTY(EditDefaultsOnly)
		class UStaticMeshComponent* Mesh;
};
