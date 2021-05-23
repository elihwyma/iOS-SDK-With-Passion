/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HKSleepAnalysis : NSObject

{
    NSArray *_sleepDays;
    long long _numberOfAsleepSamples;
    long long _consistencyCount;
    double _averageEfficiency;
    double _averageTimeInBed;
    double _averageTimeAsleep;
    long long _averageNumberOfInterruptions;
}

@property (copy, nonatomic, readonly) NSArray *sleepDays;
@property (nonatomic, readonly) long long numberOfAsleepSamples;
@property (nonatomic, readonly) long long consistencyCount;
@property (nonatomic, readonly) double averageEfficiency;
@property (nonatomic, readonly) double averageTimeInBed;
@property (nonatomic, readonly) double averageTimeAsleep;
@property (nonatomic, readonly) long long averageNumberOfInterruptions;

+ (id)emptyAnalysis;

- (id)initWithSleepDays:(id)arg1 numberOfAsleepSamples:(long long)arg2 consistencyCount:(long long)arg3 averageEfficiency:(double)arg4 averageTimeInBed:(double)arg5 averageTimeAlseep:(double)arg6 averageNumberOfInterruptions:(long long)arg7;

@end
