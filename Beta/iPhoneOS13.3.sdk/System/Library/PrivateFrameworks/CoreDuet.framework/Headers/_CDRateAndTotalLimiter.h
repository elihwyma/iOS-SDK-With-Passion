/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter

{
    long long _totalCount;
    long long _currentTotal;
}

@property long long currentTotal;
@property (readonly) long long totalCount;

- (id)description;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (_Bool)credit;
- (_Bool)debited;

@end
