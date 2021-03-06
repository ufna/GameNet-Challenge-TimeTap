// Copyright ufna. All Rights Reserved.

#include "GnTimeTapPlayerController.h"

#include "GnTimeTap.h"

AGnTimeTapPlayerController::AGnTimeTapPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	TimeToTap = 2.f;

	PerfectTiming = 0.9f;
	CurrentTiming = 0.f;
	bTimeTapEnabled = false;
}

void AGnTimeTapPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ProccessTimeTap(DeltaTime);
}

void AGnTimeTapPlayerController::ProccessTimeTap(float DeltaTime)
{
	if (!bTimeTapEnabled)
	{
		return;
	}

	if (TimeToTap <= 0.f)
	{
		UE_LOG(LogGnTimeTap, Error, TEXT("%s: TimeToTap is less than zero! %f"), *VA_FUNC_LINE, TimeToTap);
		return;
	}

	CurrentTiming += (DeltaTime / TimeToTap);

	if (CurrentTiming >= 1.f)
	{
		UE_LOG(LogGnTimeTap, Log, TEXT("%s: TimeTap event ended"), *VA_FUNC_LINE);
		bTimeTapEnabled = false;

		// @TODO Add more gameplay logic here
	}
}

void AGnTimeTapPlayerController::ActivateTimeTap()
{
	UE_LOG(LogGnTimeTap, Log, TEXT("%s: TimeTap event activated"), *VA_FUNC_LINE);

	if (bTimeTapEnabled)
	{
		UE_LOG(LogGnTimeTap, Warning, TEXT("%s: TimeTap event already activated! %f"), *VA_FUNC_LINE, CurrentTiming);

		return;
	}

	bTimeTapEnabled = true;
	CurrentTiming = 0.f;
}

void AGnTimeTapPlayerController::TapNow()
{
	UE_LOG(LogGnTimeTap, Log, TEXT("%s: Tap happened: %f"), *VA_FUNC_LINE, CurrentTiming);

	bTimeTapEnabled = false;

	// @TODO Gameplay logic here
}
