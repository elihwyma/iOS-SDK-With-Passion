/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor, NSSet;

__attribute__((visibility("hidden")))
@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration

{
    _Bool _includeChangeDetails;
    NSSet *_sampleTypes;
    HKQueryAnchor *_anchor;
    long long _changeDetailsQueryStrategy;
    long long _anchorStrategyChangeCountLimit;
}

@property (copy, nonatomic) NSSet *sampleTypes;
@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) _Bool includeChangeDetails;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (nonatomic) long long anchorStrategyChangeCountLimit;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
