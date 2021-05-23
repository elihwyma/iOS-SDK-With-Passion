/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAESunburst : PAEGeneratorDefaultBase

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2;
- (void)getTransformMatrix:(double (**)[4][4])arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5;
- (_Bool)variesOverTime;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (_Bool)frameCleanup;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (_Bool)canThrowRenderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;

@end
