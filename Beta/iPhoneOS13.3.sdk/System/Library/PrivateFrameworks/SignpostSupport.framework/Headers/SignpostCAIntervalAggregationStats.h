/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@interface SignpostCAIntervalAggregationStats : NSObject

{
    float _maxIntervalDurationNs;
    unsigned long long _intervalCount;
    unsigned long long _totalIntervalDurationNs;
}

@property (nonatomic, readonly) unsigned long long intervalCount;
@property (nonatomic, readonly) unsigned long long totalIntervalDurationNs;
@property (nonatomic, readonly) float averageIntervalDurationNs;
@property (nonatomic, readonly) float maxIntervalDurationNs;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_addAggregationStats:(id)arg1;
- (void)_addDurationNsToAggregation:(unsigned long long)arg1;

@end
