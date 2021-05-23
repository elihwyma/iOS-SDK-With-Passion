/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLAnimatedValue.h>

@class MISSING_TYPE;

@interface MDLAnimatedVector2 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (struct VtValue)defaultVtValue;
- (void)setFloat2:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (void)setDouble2:(double)arg1 atTime: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)float2AtTime:(double)arg1;
- (MISSING_TYPE *)double2AtTime:(double)arg1;
- (void)resetWithFloat2Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithDouble2Array:(const MISSING_TYPE **)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)getFloat2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDouble2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;

@end
