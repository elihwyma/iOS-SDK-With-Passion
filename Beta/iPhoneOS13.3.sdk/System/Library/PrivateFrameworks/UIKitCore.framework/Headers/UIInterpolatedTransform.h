/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedTransform : NSObject

{
    CDStruct_e79446ac _transform;
    double _rotationEpsilon;
    double _scaleEpsilon;
    double _translationEpsilon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)zero;
+ (id)epsilon;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4;
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1 rotationEpsilon:(double)arg2 scaleEpsilon:(double)arg3 translationEpsilon:(double)arg4;
+ (id)valueWithDecomposedTransform:(CDStruct_e79446ac)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isUndefined;
- (id)addVector:(id)arg1;
- (id)getValue;
- (id)interpolateTo:(id)arg1 progress:(double)arg2;
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_9e265dec)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;
- (_Bool)isApproximatelyEqualTo:(id)arg1;
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;
- (void)reinitWithVector:(id)arg1;
- (id)getNSValue;
- (id)multiplyByScalar:(double)arg1;
- (id)multiplyByVector:(id)arg1;

@end
