/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMCameraClip.h>

@class NSDate, NSDateInterval, NSNumber;

@interface HMCameraClip (HFAdditions)

@property (copy, nonatomic, readonly) NSDate *hf_endDate;
@property (copy, nonatomic, readonly) NSDateInterval *hf_dateInterval;
@property (nonatomic, readonly) NSNumber *hf_percentageOfDurationUntilNextDay;
@property (nonatomic, readonly) double hf_elapsedTimeSinceMidnight;
@property (nonatomic, readonly) double hf_duration;
@property (nonatomic, readonly) _Bool hf_isPlayable;

+ (_Bool)clipSpansMultipleDays:(id)arg1;

@end
