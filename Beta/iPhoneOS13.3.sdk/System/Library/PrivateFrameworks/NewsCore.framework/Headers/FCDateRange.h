/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDate;

@interface FCDateRange : NSObject <Swift>

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *earlierDate;
@property (nonatomic, readonly) NSDate *laterDate;
@property (nonatomic, readonly) _Bool isFinite;
@property (nonatomic, readonly) _Bool isFromInfinity;
@property (nonatomic, readonly) _Bool isToInfinity;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) double absoluteTimeInterval;
@property (nonatomic, readonly) unsigned long long minMillisecondsTimeIntervalSince1970;
@property (nonatomic, readonly) unsigned long long maxMillisecondsTimeIntervalSince1970;

+ (_Bool)supportsSecureCoding;
+ (id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)dateRangeWithEarlierDate:(id)arg1 laterDate:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)containsDate:(id)arg1;
- (id)intersectionWithDateRange:(id)arg1;
- (_Bool)isWithinTimeInterval:(double)arg1 ofDateRange:(id)arg2;
- (_Bool)startsLaterThanDateRange:(id)arg1;
- (id)initWithEarlierDate:(id)arg1 laterDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 timeInterval:(double)arg2;
- (id)slicesWithTimeInterval:(double)arg1;
- (id)sliceForDate:(id)arg1 withInterval:(double)arg2;
- (long long)sliceIndexForDate:(id)arg1 withInterval:(double)arg2;

@end
