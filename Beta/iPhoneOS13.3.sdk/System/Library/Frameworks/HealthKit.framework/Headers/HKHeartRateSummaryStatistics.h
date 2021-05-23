/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, NSMutableArray, NSUUID;

@interface HKHeartRateSummaryStatistics : NSObject

{
    NSMutableArray *_sortedBuckets;
    NSDateInterval *_dateInterval;
    long long _numberOfBuckets;
    long long _numberOfReadings;
    NSUUID *_sessionUUID;
    NSArray *_highlightedReadings;
}

@property (retain, nonatomic, setter=_setHighlightedReadings:) NSArray *highlightedReadings;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) long long numberOfBuckets;
@property (nonatomic, readonly) long long numberOfReadings;
@property (nonatomic, readonly) NSUUID *sessionUUID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)bucketAtIndex:(long long)arg1;
- (id)_bucketAtIndex:(long long)arg1 createdIfNeeded:(_Bool)arg2;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 sessionUUID:(id)arg3;
- (void)addHeartRateInBeatsPerMinute:(double)arg1 forTime:(double)arg2;
- (void)enumerateBucketsWithBlock:(CDUnknownBlockType)arg1;
- (id)_bucketsDescription;

@end
