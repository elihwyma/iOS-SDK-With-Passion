/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDate;

@interface FIUIWorkoutSwimmingSet : NSObject

{
    NSDate *_startDate;
    NSDate *_movementEndDate;
    NSDate *_endDate;
    long long _dominantStrokeStyle;
    long long _strokeCount;
    HKQuantity *_distance;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *movementEndDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long dominantStrokeStyle;
@property (nonatomic) long long strokeCount;
@property (retain, nonatomic) HKQuantity *distance;

+ (id)_decimalNumberFormatter;

- (id)description;
- (double)_activeDuration;
- (id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2;
- (double)_restingDuration;
- (id)formattedActiveDurationWithFormattingManager:(id)arg1;
- (id)formattedRestDurationWithFormattingManager:(id)arg1;
- (id)formattedDistanceValueWithFormattingManager:(id)arg1;
- (id)formattedStrokeCountUsingFormatType:(long long)arg1 formattingManager:(id)arg2;
- (id)formattedDominantStrokeStyle;

@end
