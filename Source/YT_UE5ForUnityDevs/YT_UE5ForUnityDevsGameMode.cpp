// Copyright Epic Games, Inc. All Rights Reserved.

#include "YT_UE5ForUnityDevsGameMode.h"
#include "YT_UE5ForUnityDevsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYT_UE5ForUnityDevsGameMode::AYT_UE5ForUnityDevsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
