/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer

{
    NSArray *_faces;
}

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)initWithFaceResults:(id)arg1;

@end
