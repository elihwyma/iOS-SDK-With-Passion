/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TAFilterGeneralSettings : NSObject

{
    _Bool _allowNavGeoHintAsPrivateVehicleHint;
    double _durationOfConsideration;
    double _thresholdOfLocationRelevance;
    double _thresholdOfSignificantDuration;
    double _thresholdOfSignificantDistance;
    double _capOfReasonableWalkingSpeed;
}

@property (nonatomic, readonly) double durationOfConsideration;
@property (nonatomic, readonly) double thresholdOfLocationRelevance;
@property (nonatomic, readonly) double thresholdOfSignificantDuration;
@property (nonatomic, readonly) double thresholdOfSignificantDistance;
@property (nonatomic, readonly) double capOfReasonableWalkingSpeed;
@property (nonatomic, readonly) _Bool allowNavGeoHintAsPrivateVehicleHint;

- (id)initWithDefaults;
- (id)initWithDurationOfConsiderationOrDefault:(id)arg1 thresholdOfLocationRelevanceOrDefault:(id)arg2 thresholdOfSignificantDurationOrDefault:(id)arg3 thresholdOfSignificantDistanceOrDefault:(id)arg4 capOfReasonableWalkingSpeedOrDefault:(id)arg5 allowNavGeoHintAsPrivateVehicleHint:(id)arg6;
- (id)initWithDurationOfConsideration:(double)arg1 thresholdOfLocationRelevance:(double)arg2 thresholdOfSignificantDuration:(double)arg3 thresholdOfSignificantDistance:(double)arg4 capOfReasonableWalkingSpeed:(double)arg5 allowNavGeoHintAsPrivateVehicleHint:(_Bool)arg6;

@end
