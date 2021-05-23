/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAESharedDefaultBase.h>

@interface PAEGeneratorDefaultBase : PAESharedDefaultBase

- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (void)filteredEdges:(_Bool *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (_Bool)canThrowRenderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (_Bool)renderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;

@end
