/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEAddNoise : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (_Bool)variesOverTime;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (HGRef_265f9e4c)translateNode:(HGRef_265f9e4c)arg1 byAmount:(PCVector2_5d498db0)arg2 andCropTo:(struct HGRect)arg3;
- (HGRef_265f9e4c)noiseNodeWithWidth:(int)arg1 height:(int)arg2 noiseType:(int)arg3 isMono:(_Bool)arg4 frameNum:(double)arg5 autoAnimate:(_Bool)arg6 randomSeed:(int)arg7 inputPixelTransform:(PCMatrix44Tmpl_93ed1289)arg8 outputPixelTransform:(PCMatrix44Tmpl_93ed1289)arg9 outputInvPixelTransform:(PCMatrix44Tmpl_93ed1289)arg10 is360:(_Bool)arg11;

@end
