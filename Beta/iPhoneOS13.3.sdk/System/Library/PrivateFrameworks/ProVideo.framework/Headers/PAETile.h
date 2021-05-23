/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAETile : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (void)getEdgeMode:(unsigned int *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (HGRef_265f9e4c)transformAndTile:(HGRef_265f9e4c)arg1 withXValue:(double)arg2 YValue:(double)arg3 skew:(double)arg4 scale:(double)arg5 stretch:(double)arg6 rotation:(double)arg7 resolution:(PCVector2_5d498db0)arg8 inputImage:(id)arg9;
- (void)_compute_2x2_matrix:(float *)arg1 withScale:(float)arg2 angle:(float)arg3 skew:(float)arg4 stretch:(float)arg5;
- (void)retrieveXValue:(double *)arg1 YValue:(double *)arg2 skew:(double *)arg3 scale:(double *)arg4 stretch:(double *)arg5 rotation:(double *)arg6 forOutputImage:(id)arg7 withRenderInfo:(CDStruct_f5b31fc1)arg8;

@end
