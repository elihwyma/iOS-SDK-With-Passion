/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalarArray : MDLAnimatedValue

{
    unsigned long long _elementCount;
}

@property (nonatomic) unsigned long long elementCount;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)precision;
- (id)initWithElementCount:(unsigned long long)arg1;
- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (struct VtValue)defaultVtValue;
- (void)setFloatArray:(const float *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDoubleArray:(const double *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)resetWithFloatArray:(const float *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;
- (void)resetWithDoubleArray:(const double *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;
- (unsigned long long)getFloatArray:(float *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDoubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;

@end
