/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSValue.h>

@interface NSValue (CATransform3DAdditions)

@property (readonly) struct CATransform3D CATransform3DValue;

+ (id)valueWithCAColorMatrix:(struct CAColorMatrix)arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D)arg1;
+ (id)valueWithCAPoint3D:(struct CAPoint3D)arg1;

- (double)CA_distanceToValue:(id)arg1;
- (struct CAColorMatrix)CAColorMatrixValue;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (struct CGAffineTransform)CA_CGAffineTransformValue;
- (struct CAPoint3D)CAPoint3DValue;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CAMLType;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;
- (id)CA_roundToIntegerFromValue:(id)arg1;

@end
