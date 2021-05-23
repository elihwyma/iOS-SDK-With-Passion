/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@interface FIUIWorkoutSplit : NSObject

{
    double _distanceInMeters;
    double _duration;
}

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistance:(double)arg1 duration:(double)arg2;

@end
