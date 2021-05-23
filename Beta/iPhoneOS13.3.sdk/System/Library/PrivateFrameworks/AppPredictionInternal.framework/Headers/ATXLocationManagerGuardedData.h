/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXLocationManagerKnownLOIs, ATXLocationManagerState, CLLocation, NSDate;

@interface ATXLocationManagerGuardedData : NSObject

{
    CLLocation *currentLocation;
    ATXLocationManagerState *state;
    NSDate *lastLOIUpdateTimestamp;
    NSDate *lastPredictedLOIsUpdateTimestamp;
    NSDate *lastPredictedExitTimesUpdateTimestamp;
    ATXLocationManagerKnownLOIs *locationsOfInterest;
}

- (id)init;
- (void)clear;

@end
