/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEChannelMixer : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (_Bool)constrainMonoParams:(int)arg1 atTime:(CDUnion_baaf6063)arg2;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4 fromParam:(int)arg5 atFxTime:(CDUnion_baaf6063)arg6;
- (_Bool)monochromeChanged:(CDUnion_baaf6063)arg1;

@end
