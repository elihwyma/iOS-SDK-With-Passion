/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAECheckerboard : PAEGeneratorDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2;
- (void)getTransformMatrix:(double (**)[4][4])arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5;
- (_Bool)variesOverTime;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (_Bool)parameterChanged:(unsigned int)arg1;
- (void)filteredEdges:(_Bool *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (void)updateShapeParameter:(unsigned int)arg1 atTime:(CDUnion_baaf6063)arg2;
- (_Bool)canThrowRenderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;

@end
