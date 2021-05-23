/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEiOSStretch : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (void)handleUIEventWithPosition:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 scale:(double)arg3 scaleVelocity:(double)arg4 rotation:(double)arg5 rotationVelocity:(double)arg6;

@end
