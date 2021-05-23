/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEBloom : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_da8610d8)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (_Bool)bloomHeliumRender:(id)arg1 withInput:(id)arg2 withRadius:(double)arg3 withBrightness:(double)arg4 withThreshold:(double)arg5 doDarkBloom:(_Bool)arg6 withXScale:(double)arg7 withYScale:(double)arg8 withDoCrop:(_Bool)arg9 withDoClip:(_Bool)arg10 is360:(_Bool)arg11 withInfo:(CDStruct_f5b31fc1)arg12;
- (_Bool)parameterChanged:(unsigned int)arg1;

@end
