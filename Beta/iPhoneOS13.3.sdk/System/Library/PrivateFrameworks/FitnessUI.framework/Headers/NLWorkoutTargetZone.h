/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface NLWorkoutTargetZone : NSObject

{
    long long _type;
    double _min;
    double _max;
    double _currentValue;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double currentValue;
@property (nonatomic, readonly) _Bool enabled;

+ (id)restoreFromDictionary:(id)arg1 activityType:(id)arg2;
+ (id)restoreFromDictionary:(id)arg1;
+ (long long)mapTargetZoneTypeStringToEnum:(id)arg1;
+ (id)mapTargetZoneTypeEnumToString:(long long)arg1;
+ (id)serializeTargetZone:(id)arg1;
+ (unsigned long long)stateForZone:(id)arg1 distanceUnit:(id)arg2;
+ (id)targetZoneForActivityType:(id)arg1;
+ (void)saveTargetZone:(id)arg1 forActivityType:(id)arg2;
+ (id)targetZoneFromMetadata:(id)arg1;
+ (id)metadataForTargetZone:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(long long)arg1 min:(double)arg2 max:(double)arg3 currentValue:(double)arg4;
- (_Bool)isSingleThreshold;

@end
