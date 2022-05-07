#pragma once

#include "CoreMinimal.h"
#include "MassEntityTypes.h"
#include "SimpleMovementFragment.generated.h"

USTRUCT()
struct FSimpleMovementFragment : public FMassFragment
{
    GENERATED_BODY()
    FVector Target;
};