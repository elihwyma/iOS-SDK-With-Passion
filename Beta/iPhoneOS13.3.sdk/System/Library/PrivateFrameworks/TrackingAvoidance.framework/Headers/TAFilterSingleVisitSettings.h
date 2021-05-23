/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSSet, TAFilterVisitsSettings;

@interface TAFilterSingleVisitSettings : NSObject

{
    double _thresholdOfSignificantDuration;
    double _thresholdOfSignificantDistance;
    TAFilterVisitsSettings *_visitsSettings;
    NSSet *_enabledLoiTypes;
}

@property (nonatomic, readonly) double thresholdOfSignificantDuration;
@property (nonatomic, readonly) double thresholdOfSignificantDistance;
@property (nonatomic, readonly) TAFilterVisitsSettings *visitsSettings;
@property (nonatomic, readonly) NSSet *enabledLoiTypes;

+ (id)defaultSingleVisitEnabledLoiTypes;

- (id)initWithDefaults;
- (id)enabledLoiTypesToString;
- (id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4;
- (id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4;

@end
