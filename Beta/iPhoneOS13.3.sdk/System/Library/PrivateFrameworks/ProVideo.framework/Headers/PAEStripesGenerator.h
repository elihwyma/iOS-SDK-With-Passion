/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEStripesGenerator : PAEGeneratorDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)variesOverTime;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (_Bool)canThrowRenderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;

@end
