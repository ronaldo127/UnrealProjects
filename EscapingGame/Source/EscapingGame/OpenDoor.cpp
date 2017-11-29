// Copyright Ronaldo Felipe 2017

#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	owner = GetOwner();
	rotator = owner->GetActorRotation();
	Opener = GetWorld()->GetFirstPlayerController()->GetPawn();
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	open = PressurePlate && PressurePlate->IsOverlappingActor(Opener);
	if (open) {
		if (rotator.Yaw >= -OpenAngle) {
			rotator.Add(0, -speed * DeltaTime, 0);
			owner->SetActorRotation(rotator);
		}
	} else {
		if (rotator.Yaw <= 0.0f) {
			rotator.Add(0, speed * DeltaTime, 0);
			owner->SetActorRotation(rotator);
		}
	}
}

