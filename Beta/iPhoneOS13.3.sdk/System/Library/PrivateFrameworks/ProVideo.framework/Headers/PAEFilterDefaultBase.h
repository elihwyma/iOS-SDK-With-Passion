/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAESharedDefaultBase.h>

@interface PAEFilterDefaultBase : PAESharedDefaultBase

- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (id)getParamErrorFor:(id)arg1;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_da8610d8)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (HGRef_265f9e4c)makePrescaledBlurNode:(HGRef_265f9e4c)arg1 radius:(float)arg2 withScale:(PCVector2_79a470e1)arg3 minInputScale:(float)arg4 maxInputScale:(float)arg5;
- (id)getParamAPIWithError:(id *)arg1;
- (_Bool)getInputBitmap:(id *)arg1 withInfo:(CDStruct_f5b31fc1)arg2 atTime:(CDUnion_baaf6063)arg3 withROI:(struct HGRect *)arg4;
- (_Bool)getInputBitmap:(id *)arg1 withInfo:(CDStruct_f5b31fc1)arg2 atTime:(CDUnion_baaf6063)arg3 appendHGGraph:(HGRef_265f9e4c)arg4;
- (HGRef_265f9e4c)preScaleDown:(float)arg1 withOutputRadius:(float *)arg2 withOutputScaleFactor:(float *)arg3 withInput:(HGRef_265f9e4c)arg4 minInputScale:(float)arg5 maxInputScale:(float)arg6;
- (HGRef_265f9e4c)preScaleUp:(float)arg1 withInput:(HGRef_265f9e4c)arg2;
- (_Bool)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;

@end
