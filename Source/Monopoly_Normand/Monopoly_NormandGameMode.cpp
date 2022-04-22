// Copyright Epic Games, Inc. All Rights Reserved.

#include "Monopoly_NormandGameMode.h"
#include "Monopoly_NormandPlayerController.h"
#include "Monopoly_NormandPawn.h"

AMonopoly_NormandGameMode::AMonopoly_NormandGameMode()
{
	// no pawn by default
	DefaultPawnClass = AMonopoly_NormandPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AMonopoly_NormandPlayerController::StaticClass();
}
