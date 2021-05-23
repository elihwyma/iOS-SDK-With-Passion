/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)precision;
- (void)setFloat4x4:(CDStruct_14d5dc5e)arg1 atTime:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (struct VtValue)defaultVtValue;
- (unsigned long long)getFloat4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDouble4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (void)setDouble4x4:(CDStruct_14d5dc5e)arg1 atTime:(double)arg2;
- (void)resetWithFloat4x4Array:(const CDStruct_14d5dc5e *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithDouble4x4Array:(const CDStruct_14d5dc5e *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;

@end
