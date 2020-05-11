// Copyright ufna. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "GnTimeTapPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GNTIMETAP_API AGnTimeTapPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGnTimeTapPlayerController(const FObjectInitializer& ObjectInitializer);

	virtual void Tick(float DeltaTime) override;

	void ProccessTimeTap(float DeltaTime);

	/** @TODO */
	UFUNCTION(BlueprintCallable)
	void ActivateTimeTap();

	/** @TODO */
	UFUNCTION(BlueprintCallable)
	void TapNow();

	/** @TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float TimeToTap;

	/** @TODO */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float PerfectTiming;

	/** @TODO */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float CurrentTiming;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bTimeTapEnabled;
};
