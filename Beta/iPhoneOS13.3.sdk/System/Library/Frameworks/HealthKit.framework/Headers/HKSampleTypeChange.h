/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject

{
    _Bool _samplesWereDeleted;
    _Bool _hasUnfrozenSeries;
    HKSampleType *_sampleType;
    double _startTime;
    double _endTime;
    long long _queryStrategy;
}

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long queryStrategy;
@property (copy, nonatomic, readonly) HKSampleType *sampleType;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) _Bool samplesWereDeleted;
@property (nonatomic, readonly) _Bool hasUnfrozenSeries;

+ (_Bool)supportsSecureCoding;
+ (id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 samplesWereDeleted:(_Bool)arg3 hasUnfrozenSeries:(_Bool)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 deletions:(_Bool)arg4 hasUnfrozenSeries:(_Bool)arg5 queryStrategy:(long long)arg6;
- (void)_extendDateIntervalWithSample:(id)arg1;

@end
