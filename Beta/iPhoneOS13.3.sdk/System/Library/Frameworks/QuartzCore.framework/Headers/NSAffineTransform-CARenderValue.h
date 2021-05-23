/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSAffineTransform.h>

@interface NSAffineTransform (CARenderValue)

- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (struct CGAffineTransform)CA_CGAffineTransformValue;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (id)CAMLType;
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;

@end
