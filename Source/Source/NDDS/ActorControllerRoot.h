// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NVAnnotatedActor.h"
#include "GameFramework/Actor.h"
#include "ActorControllerRoot.generated.h"


USTRUCT(BlueprintType)
struct FGroup_Struct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		float flowerRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		float fUpperRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		int nNum;
		
};


UCLASS()
class NDDS_API AActorControllerRoot : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorControllerRoot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Custom_Function")
		TArray<ANVAnnotatedActor*> GetActorList();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		TArray<ANVAnnotatedActor*> m_ObjectArray;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		FGroup_Struct Smallgroup;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		FGroup_Struct Middlegroup;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RandomCoeff")
		FGroup_Struct Largegroup;
	
	
};
