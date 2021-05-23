/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKDimension.h>

@class _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundDimension : _HKDimension

{
    _HKFactorization *_baseDimensions;
}

+ (id)dimensionWithBaseDimensions:(id)arg1;

- (id)_baseDimensions;
- (id)_initWithBaseDimensions:(id)arg1;

@end
