/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject

{
    NSMutableIndexSet *_heartRatesInBeatsPerMinute;
    long long _bucketIndex;
}

@property (nonatomic, readonly) long long bucketIndex;
@property (nonatomic, readonly) NSIndexSet *heartRatesInBeatsPerMinute;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBucketIndex:(long long)arg1;
- (void)addHeartRateInBeatsPerMinute:(long long)arg1;

@end
