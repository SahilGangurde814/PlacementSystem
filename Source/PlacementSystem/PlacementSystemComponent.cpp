// Fill out your copyright notice in the Description page of Project Settings.


#include "PlacementSystemComponent.h"

// Sets default values for this component's properties
UPlacementSystemComponent::UPlacementSystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlacementSystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UPlacementSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	/*FVector startPos = 

	GetWorld()->LineTraceSingleByChannel();*/
}

void UPlacementSystemComponent::GroundCheck(FTransform cameraStartTransform) {
	UE_LOG(LogTemp, Warning, TEXT("Placement System Componet"));
}

