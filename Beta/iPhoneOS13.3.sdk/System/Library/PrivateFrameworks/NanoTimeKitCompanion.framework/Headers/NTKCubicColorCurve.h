/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKColorCurve.h>

@class MISSING_TYPE, NTKCubicSpline;

@interface NTKCubicColorCurve : NTKColorCurve

{
    NTKCubicSpline *_spline;
    MISSING_TYPE **_colors;
    float *_fractions;
    unsigned long long _count;
}

- (void)dealloc;
- (id)colorForFraction:(float)arg1;
- (id)initWithColorCurveElements:(id)arg1;

@end
