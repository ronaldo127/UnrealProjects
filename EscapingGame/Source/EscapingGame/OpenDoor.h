// Copyright Ronaldo Felipe 2017

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "GameFramework/Actor.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPINGGAME_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	AActor* owner;
	FRotator rotator;
	UPROPERTY(EditAnywhere)
	float speed = 30.0f;
	UPROPERTY(VisibleAnywhere)
	float OpenAngle = 60.0f;
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;
	AActor* Opener;
	int open;
	
};
