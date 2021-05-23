/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _HKFirstPartyWorkoutSnapshot : NSObject

{
    double _elapsedTime;
    NSDate *_snapshotDate;
    long long _state;
    unsigned long long _activityType;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) unsigned long long activityType;

+ (id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1;

- (id)description;
- (id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 elapsedTime:(double)arg3 snapshotDate:(id)arg4;
- (double)durationForDate:(id)arg1;

@end
