/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEEquirectProjectFilter : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_da8610d8)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (void)getQuaternion:(CDUnion_baaf6063)arg1:(double *)arg2:(double *)arg3:(double *)arg4:(double *)arg5;
- (double)getInitialYaw:(CDUnion_baaf6063)arg1;
- (_Bool)getIsFrontFacing:(CDUnion_baaf6063)arg1;
- (void)getProjectionFOVYDegrees:(float *)arg1 FOVXDegrees:(float *)arg2 withFrameAspect:(double)arg3 atTime:(CDUnion_baaf6063)arg4;
- (PCMatrix44Tmpl_93ed1289)composeViewMatrix:(CDUnion_baaf6063)arg1 withCameraBehavior:(int)arg2 heroAngle:(double)arg3;
- (struct HGEquirectProjectParams)getParams:(CDStruct_f5b31fc1)arg1 withOutputImage:(id)arg2 inputImage:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 outputWidth:(unsigned long long)arg6 outputHeight:(unsigned long long)arg7 xRotation:(double)arg8 yRotation:(double)arg9 zRotation:(double)arg10 cameraBehavior:(int)arg11 paramAPI:(id)arg12;
- (void)getEdgeMode:(unsigned int *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (_Bool)variesOverTime;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (PCMatrix44Tmpl_93ed1289)getViewMatrix:(CDUnion_baaf6063)arg1;
- (double)convertToFOVYFromFOVX:(double)arg1 width:(double)arg2 height:(double)arg3;
- (double)convertToFOVXFromFOVY:(double)arg1 width:(double)arg2 height:(double)arg3;
- (_Bool)frameCleanup;

@end
