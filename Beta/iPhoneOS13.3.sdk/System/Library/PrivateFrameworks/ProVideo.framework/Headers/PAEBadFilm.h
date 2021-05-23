/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@class NSMutableArray, PAEEarthquake;

@interface PAEBadFilm : PAEFilterDefaultBase

{
    PAEEarthquake *_jitterer;
    int _cachedSeed;
    NSMutableArray *_scratches;
    struct PCMutex _scratchMutex;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (_Bool)variesOverTime;
- (double)autoRandomize:(double)arg1 withVariance:(double)arg2 andFrequency:(int)arg3 atTime:(CDUnion_baaf6063)arg4 randCount:(int *)arg5;
- (void)setupScratchArrayWithAutoRandomizeFrequency:(int)arg1 andSeed:(int)arg2 withWidth:(int)arg3 andHeight:(int)arg4 atTime:(CDUnion_baaf6063)arg5;
- (void)getBrightness:(double *)arg1 saturation:(double *)arg2 dust:(int *)arg3 scratches:(int *)arg4 scratchColor:(double *)arg5 hair:(int *)arg6 randomSeed:(int *)arg7 jitter:(double *)arg8 focus:(double *)arg9 grain:(double *)arg10 autoRandFreq:(int *)arg11 withParmsAPI:(id)arg12 atTime:(CDUnion_baaf6063)arg13;
- (void)createDust:(int)arg1 scratches:(int)arg2 scratchColor:(double *)arg3 hair:(int)arg4 randomSeed:(int)arg5 autoRandFreq:(int)arg6 buffer:(struct HGBitmap *)arg7 atTime:(CDUnion_baaf6063)arg8 pixelTransform:(const PCMatrix44Tmpl_93ed1289 *)arg9;

@end
