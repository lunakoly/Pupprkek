// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HashGenerator.generated.h"

/**
 * Generates random hashes. This may be useful
 * for assigning objects unique names.
 */
UCLASS()
class HARDSHIFT_API UHashGenerator : public UObject
{
	GENERATED_BODY()

public:

	/**
	 * Returns a random unique string.
	 */
	UFUNCTION(BlueprintCallable)
	static FString GetHash() {
		auto it = FDateTime::Now().ToString() + FString::FromInt(FMath::RandRange(0, 1000));
		return FMD5::HashAnsiString(it.GetCharArray().GetData());
	}
	
};
