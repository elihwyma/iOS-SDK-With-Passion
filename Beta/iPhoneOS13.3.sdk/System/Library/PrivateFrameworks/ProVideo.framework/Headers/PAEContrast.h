/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEContrast : PAEFilterDefaultBase

- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (struct CGPoint)calculateBezier:(double)arg1 startPt:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPt:(struct CGPoint)arg5;
- (void)generateLut:(struct RGBAfPixel *)arg1 forContrast:(double)arg2 andPivot:(double)arg3;

@end
