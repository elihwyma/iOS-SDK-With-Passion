/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PAEKeyer;

@interface PAEKeyerInitialize : NSObject

{
    PAEKeyer *_keyer;
    id _apiManager;
}

+ (void)setInitialSamples:(vector_ff5abfb7 *)arg1 autokeySetupUtil:(id)arg2 sampleBoxHalfDim:(float)arg3;

- (void)dealloc;
- (void)calculateInitialSamples:(struct ColorHisto *)arg1 percentageOfBaseColorIncluded:(float)arg2 use32x32x32:(_Bool)arg3 autokeySetupUtil:(id)arg4 samples:(vector_ff5abfb7 *)arg5;
- (_Bool)calculateInitialMatteWithInfo:(CDStruct_f5b31fc1)arg1 omSamples:(struct OMSamples *)arg2 colorPrimaries:(int)arg3 screenColor:(int *)arg4 minGreenHueAngle:(float)arg5 maxGreenHueAngle:(float)arg6 greenChroma:(float)arg7 minBlueHueAngle:(float)arg8 maxBlueHueAngle:(float)arg9 blueChroma:(float)arg10 histoPercentageIncluded:(float)arg11 use32x32x32:(_Bool)arg12 simpleKey:(_Bool)arg13;
- (id)initWithAPIManager:(id)arg1 keyer:(id)arg2;
- (_Bool)findSampleRectsWithInfo:(CDStruct_f5b31fc1)arg1 screenColor:(int *)arg2 colorPrimaries:(int)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11 histoPercentageIncluded:(float)arg12 omSamples:(struct OMSamples *)arg13 viewingSetupMatte:(_Bool)arg14 use32x32Histogram:(_Bool)arg15 simpleKey:(_Bool)arg16;

@end
