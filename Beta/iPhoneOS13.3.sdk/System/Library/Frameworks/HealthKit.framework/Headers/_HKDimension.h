/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKDimension : NSObject

{
    _HKFactorization *_reduction;
    struct os_unfair_lock_s _reductionLock;
}

+ (id)dimensionFromString:(id)arg1;

- (id)init;
- (id)description;
- (id)_baseDimensions;
- (id)reduction;

@end
