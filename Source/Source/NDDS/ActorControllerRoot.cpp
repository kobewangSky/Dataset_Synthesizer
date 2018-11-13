// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorControllerRoot.h"


// Sets default values
AActorControllerRoot::AActorControllerRoot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorControllerRoot::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AActorControllerRoot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}



TArray<ANVAnnotatedActor*> AActorControllerRoot::GetActorList()
{
	float Rangetemp = FMath::RandRange(Smallgroup.flowerRange, Largegroup.fUpperRange);

	TArray<ANVAnnotatedActor*> GroupTemp = m_ObjectArray;

	TArray<ANVAnnotatedActor*> temp;

	if ( Rangetemp >= Smallgroup.flowerRange && Rangetemp <= Smallgroup.fUpperRange)
	{
		for (int i = 0; i < Smallgroup.nNum; ++i)
		{
			int Index = FMath::RandRange(0, GroupTemp.Num()-1);
			GroupTemp[Index]->SetActorScale3D(FVector(Rangetemp, Rangetemp, Rangetemp));
			temp.Add(GroupTemp[Index]);

			GroupTemp.RemoveAt(Index);

		}
	}
	else if (Rangetemp >= Middlegroup.flowerRange && Rangetemp <= Middlegroup.fUpperRange)
	{
		for (int i = 0; i < Middlegroup.nNum; ++i)
		{
			int Index = FMath::RandRange(0, GroupTemp.Num() - 1);
			GroupTemp[Index]->SetActorScale3D(FVector(Rangetemp, Rangetemp, Rangetemp));
			temp.Add(GroupTemp[Index]);

			GroupTemp.RemoveAt(Index);
		}
	}
	else if (Rangetemp >= Largegroup.flowerRange && Rangetemp <= Largegroup.fUpperRange)
	{
		for (int i = 0; i < Largegroup.nNum; ++i)
		{
			int Index = FMath::RandRange(0, GroupTemp.Num() - 1);
			GroupTemp[Index]->SetActorScale3D(FVector(Rangetemp, Rangetemp, Rangetemp));
			temp.Add(GroupTemp[Index]);

			GroupTemp.RemoveAt(Index);
		}
	}
	return temp;
}

