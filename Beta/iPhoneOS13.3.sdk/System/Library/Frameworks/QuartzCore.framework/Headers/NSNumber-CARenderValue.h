/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSNumber.h>

@interface NSNumber (CARenderValue)

- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CAMLType;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;
- (id)CA_roundToIntegerFromValue:(id)arg1;

@end
