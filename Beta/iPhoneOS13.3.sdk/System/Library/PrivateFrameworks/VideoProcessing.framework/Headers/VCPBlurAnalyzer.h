/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

__attribute__((visibility("hidden")))
@interface VCPBlurAnalyzer : VCPImageAnalyzer

- (int)computeSharpnessScore:(float *)arg1 forObjects:(id)arg2 inImage:(struct __CVBuffer *)arg3;
- (float)computeRegionSharpness:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4;

@end
