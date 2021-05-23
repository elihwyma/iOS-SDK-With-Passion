/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKMultiTypeQueryCursor;

__attribute__((visibility("hidden")))
@interface _HKMultiTypeSampleQueryServerConfiguration : HKQueryServerConfiguration

{
    HKMultiTypeQueryCursor *_queryCursor;
    unsigned long long _limit;
}

@property (copy, nonatomic) HKMultiTypeQueryCursor *queryCursor;
@property (nonatomic) unsigned long long limit;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
