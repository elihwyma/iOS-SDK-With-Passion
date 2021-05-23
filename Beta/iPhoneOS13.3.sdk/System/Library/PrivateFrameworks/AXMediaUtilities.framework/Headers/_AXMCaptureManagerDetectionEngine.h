/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMCaptureManager, AXMFaceDetectorNode, AXMImageNode, AXMSceneDetectorNode, AXMVisionAnalysisOptions, AXMVisionEngine, NSString;

@interface _AXMCaptureManagerDetectionEngine : NSObject

{
    AXMCaptureManager *_captureManager;
    AXMVisionEngine *_visionEngine;
    AXMImageNode *_imageNode;
    AXMSceneDetectorNode *_sceneDetector;
    AXMFaceDetectorNode *_faceDetector;
    AXMVisionAnalysisOptions *_analysisOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithCaptureManager:(id)arg1 options:(id)arg2;

@end
