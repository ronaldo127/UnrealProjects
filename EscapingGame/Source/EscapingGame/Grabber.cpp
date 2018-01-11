// Copyright Ronaldo Felipe 2017

#include "Grabber.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	UE_LOG(LogTemp, Warning, TEXT("Hello world!"));
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// get viewpoint
	FVector PlayerViewPointLocation;
	FRotator PlayerViewPointRotation;
	APlayerController * PlayerController = GetWorld()->GetFirstPlayerController();

	PlayerController->GetPlayerViewPoint(
		PlayerViewPointLocation,
		PlayerViewPointRotation
	);

	FVector EndPoint = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * ReachDistance;

	//UE_LOG(LogTemp, Warning, TEXT("Location: %s and Rotation: %s"), *PlayerViewPointLocation.ToString(), *PlayerViewPointRotation.ToString());

	DrawDebugLine(
		GetWorld(),
		PlayerViewPointLocation, 
		EndPoint,
		FColor(255, 0, 0),
		false,
		.0f,
		.0f,
		10.f
	);

	// raycast
	
	// handle hit
}

