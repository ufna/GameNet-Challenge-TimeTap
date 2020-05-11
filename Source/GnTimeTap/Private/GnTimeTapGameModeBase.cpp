// Copyright ufna. All Rights Reserved.

#include "GnTimeTapGameModeBase.h"

#include "GnTimeTapPlayerController.h"

AGnTimeTapGameModeBase::AGnTimeTapGameModeBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerControllerClass = AGnTimeTapPlayerController::StaticClass();
}
