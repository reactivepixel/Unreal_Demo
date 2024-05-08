// Copyright Epic Games, Inc. All Rights Reserved.

#include "Chat_FluxGameMode.h"
#include "Chat_FluxPlayerController.h"
#include "Chat_FluxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChat_FluxGameMode::AChat_FluxGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AChat_FluxPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}