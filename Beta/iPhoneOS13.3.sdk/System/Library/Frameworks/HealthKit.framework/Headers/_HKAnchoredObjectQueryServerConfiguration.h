/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration

{
    _Bool _includeDeletedObjects;
    _Bool _includeAutomaticTimeZones;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    double _collectionInterval;
}

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double collectionInterval;
@property (nonatomic) _Bool includeDeletedObjects;
@property (nonatomic) _Bool includeAutomaticTimeZones;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
