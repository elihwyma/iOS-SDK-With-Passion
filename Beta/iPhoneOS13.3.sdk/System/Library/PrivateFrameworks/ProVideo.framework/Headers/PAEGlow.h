/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEGlow : PAEFilterDefaultBase

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_da8610d8)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (HGRef_265f9e4c)get360BlurNode:(HGRef_265f9e4c)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2_5d498db0)arg5;
- (HGRef_265f9e4c)getPlanarBlurNode:(HGRef_265f9e4c)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2_5d498db0)arg5;
- (HGRef_265f9e4c)getBlurNode:(HGRef_265f9e4c)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2_5d498db0)arg5 is360:(_Bool)arg6;

@end
