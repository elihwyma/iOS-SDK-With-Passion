/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep

{
    NSArray *_aggregatedGEOSteps;
    unsigned int _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)duration;
- (unsigned int)distance;
- (_Bool)isUncertainArrival;
- (unsigned int)_calculateAggregatedStepsDuration;
- (unsigned int)_calculateAggregatedStepsDistance;
- (id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4 maneuverPointRange:(struct _NSRange)arg5;

@end
