/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

__attribute__((visibility("hidden")))
@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration

{
    _Bool _observeUnfrozenSeries;
}

@property (nonatomic) _Bool observeUnfrozenSeries;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
