/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPixelBufferPool, FigM2MController;

@interface BWVisionLandmarkDetector : NSObject

{
    BWPixelBufferPool *_faceDetectionBufferPool;
    FigM2MController *_m2mController;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)_detectLandmarksUsingInputPixelBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int *)arg3 includePoseAndQuality:(_Bool)arg4;
- (int)prepareForDetectionWithInputVideoFormat:(id)arg1;
- (int)detectFaceLandmarksUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attachingToSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 includePoseAndQuality:(_Bool)arg3;
- (void)prewarmForDetection;

@end
