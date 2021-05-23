/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)variesOverTime;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (PCMatrix44Tmpl_9c426645)getViewMatrix:(CDUnion_baaf6063)arg1;
- (_Bool)frameCleanup;
- (double)getProjectionFOVYDegrees:(CDUnion_baaf6063)arg1;
- (struct HGEquirectProjectParams)getParams:(CDStruct_f5b31fc1)arg1:(id)arg2:(id)arg3:(id)arg4;
- (_Bool)renderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;

@end
