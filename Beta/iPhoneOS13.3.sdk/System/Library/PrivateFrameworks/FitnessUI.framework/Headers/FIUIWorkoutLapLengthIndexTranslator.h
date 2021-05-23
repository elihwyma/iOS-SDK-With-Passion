/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject

{
    HKUnit *_distanceUnit;
}

@property (retain, nonatomic) HKUnit *distanceUnit;

- (double)valueForIndex:(long long)arg1;
- (long long)indexForValue:(double)arg1;
- (double)valueTranslatedIntoDistanceUnit:(double)arg1;
- (double)valueTranslatedFromDistanceUnit:(double)arg1;
- (id)initWithDistanceUnit:(id)arg1;

@end
