/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEBadTV : PAEFilterDefaultBase

- (void)dealloc;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (_Bool)variesOverTime;
- (void)createWavyTableOfHeight:(int)arg1 rowBytes:(unsigned long long)arg2 table:(char *)arg3 flip:(_Bool)arg4 atTime:(CDUnion_baaf6063)arg5;

@end
