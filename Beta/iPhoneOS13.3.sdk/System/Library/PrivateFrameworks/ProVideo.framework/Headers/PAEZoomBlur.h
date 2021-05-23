/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEZoomBlur : PAEFilterDefaultBase

{
    double _upscaleFactor;
}

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_da8610d8)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (void)constrainWidth:(unsigned long long *)arg1 andHeight:(unsigned long long *)arg2 withImageInfo:(CDStruct_da8610d8)arg3;
- (void)polarToRect:(id)arg1 withInputImage:(id)arg2 withInputNode:(HGRef_265f9e4c)arg3 centerX:(double)arg4 centerY:(double)arg5 andOutputNode:(HGRef_265f9e4c *)arg6;
- (void)rectToPolar:(id)arg1 withInputImage:(id)arg2 withInputNode:(HGRef_265f9e4c)arg3 centerX:(double)arg4 centerY:(double)arg5 andOutputNode:(HGRef_baa0c882 *)arg6;

@end
