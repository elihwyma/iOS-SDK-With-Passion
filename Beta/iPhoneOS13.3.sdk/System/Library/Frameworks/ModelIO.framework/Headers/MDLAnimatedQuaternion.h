/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternion : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)precision;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (struct)floatQuaternionAtTime:(double)arg1;
- (struct)doubleQuaternionAtTime:(double)arg1;
- (struct VtValue)defaultVtValue;
- (unsigned long long)getFloatQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDoubleQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (void)setFloatQuaternion:(struct)arg1 atTime:(double)arg2;
- (void)setDoubleQuaternion:(struct)arg1 atTime:(double)arg2;
- (void)resetWithFloatQuaternionArray:(const struct *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithDoubleQuaternionArray:(const struct *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;

@end
