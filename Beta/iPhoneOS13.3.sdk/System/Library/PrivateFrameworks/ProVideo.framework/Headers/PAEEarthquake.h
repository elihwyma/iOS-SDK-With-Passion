/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEEarthquake : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (void)getEdgeMode:(unsigned int *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (_Bool)variesOverTime;
- (HGRef_265f9e4c)quakeHeliumNodeWithInputImage:(HGRef_265f9e4c)arg1 inputImage:(id)arg2 outputImage:(id)arg3 renderInfo:(CDStruct_f5b31fc1)arg4 twist:(float)arg5 horizontalShake:(float)arg6 verticalShake:(float)arg7 layers:(float)arg8 centerX:(float)arg9 centerY:(float)arg10 randomSeed:(int)arg11;

@end
