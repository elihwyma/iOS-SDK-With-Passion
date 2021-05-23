/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedColorMatrix : NSObject

{
    struct CAColorMatrix _colorMatrix;
    double _epsilon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)zero;
+ (id)epsilon;
+ (id)valueWithColorMatrix:(struct CAColorMatrix)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isUndefined;
- (id)addVector:(id)arg1;
- (id)initWithColorMatrix:(struct CAColorMatrix)arg1;
- (id)initWithColorMatrix:(struct CAColorMatrix)arg1 epsilon:(double)arg2;
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
