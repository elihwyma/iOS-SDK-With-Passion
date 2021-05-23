/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate;

@interface FIUIWorkoutSegment : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_activeEnergy;
    HKQuantity *_distance;
    double _elapsedTime;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantity *activeEnergy;
@property (retain, nonatomic) HKQuantity *distance;
@property (nonatomic) double elapsedTime;

+ (id)_decimalNumberFormatter;

- (id)description;
- (id)formattedActiveEnergyValueForUnit:(id)arg1;
- (id)formattedDistanceValueForUnit:(id)arg1;
- (id)formattedDurationValueWithFormattingManager:(id)arg1;
- (id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2;

@end
