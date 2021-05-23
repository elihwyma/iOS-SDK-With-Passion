/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterpolatedColor : NSObject

{
    struct {
        double r;
        double g;
        double b;
        double a;
    } _color;
    double _epsilon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)zero;
+ (id)epsilon;
+ (id)valueWithUIColor:(id)arg1;
+ (id)valueWithCGColor:(struct CGColor *)arg1;

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
- (id)initWithDecomposedColor:(CDStruct_d2b197d1)arg1;
- (id)initWithDecomposedColor:(CDStruct_d2b197d1)arg1 epsilon:(double)arg2;
- (struct CGColor *)getCGColor;
- (id)getUIColor;

@end
