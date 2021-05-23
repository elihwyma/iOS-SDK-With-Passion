/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSArray.h>

@interface NSArray (CAAnimatableValue)

- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (id)CAMLType;

@end
