// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "UObject/ConstructorHelpers.h"


#include "Components/BoxComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Our root component will be a sphere that reacts to physics
    UBoxComponent* BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
    RootComponent = BoxComponent;
    BoxComponent->InitBoxExtent(FVector(50, 50, 50));
    

    // Create and position a mesh component so we can see where our sphere is
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    Mesh->SetupAttachment(BoxComponent);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

