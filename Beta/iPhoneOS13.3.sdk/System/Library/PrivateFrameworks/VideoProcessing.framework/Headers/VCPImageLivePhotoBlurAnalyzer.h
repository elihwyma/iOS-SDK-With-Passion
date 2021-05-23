/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VCPImageLivePhotoBlurAnalyzer : VCPBlurAnalyzer

{
    NSArray *_movingObjects;
}

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)initWithMovingObjectsResults:(id)arg1;

@end
