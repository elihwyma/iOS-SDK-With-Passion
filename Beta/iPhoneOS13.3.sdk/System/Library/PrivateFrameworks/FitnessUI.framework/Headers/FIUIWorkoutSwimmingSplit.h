/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface FIUIWorkoutSwimmingSplit : NSObject

{
    double _duration;
    long long _splitDistance;
    double _distanceInUserUnit;
    long long _strokeCount;
    long long _strokeCountScaledToFillSplit;
    double _durationScaledToFillSplit;
}

@property (nonatomic) double duration;
@property (nonatomic) long long splitDistance;
@property (nonatomic) double distanceInUserUnit;
@property (nonatomic) long long strokeCount;
@property (nonatomic) long long strokeCountScaledToFillSplit;
@property (nonatomic) double durationScaledToFillSplit;

- (id)description;
- (id)formattedPaceWithFormattingManager:(id)arg1;
- (double)_fractionToFillTotalSplitDistance;
- (id)formattedStrokeCount;

@end
