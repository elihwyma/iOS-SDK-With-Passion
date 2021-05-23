/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMCaptionDetectorNode, AXMFaceDetectorNode, AXMIconClassDetectorNode, AXMImageNode, AXMProminentObjectsDetectorNode, AXMSceneDetectorNode, AXMScreenCaptureNode, AXMTextDetectorNode, AXMTraitDetectorNode;

@interface AXMVoiceOverVisionEngine : AXMVisionEngine

{
    AXMScreenCaptureNode *_captureNode;
    AXMImageNode *_imageNode;
    AXMTextDetectorNode *_textDetector;
    AXMSceneDetectorNode *_sceneDetector;
    AXMFaceDetectorNode *_faceDetector;
    AXMTraitDetectorNode *_traitDetector;
    AXMProminentObjectsDetectorNode *_prominentObjectsDetector;
    AXMCaptionDetectorNode *_captionDetector;
    AXMIconClassDetectorNode *_iconClassDetector;
}

@property (weak, nonatomic) AXMScreenCaptureNode *captureNode;
@property (weak, nonatomic) AXMImageNode *imageNode;
@property (weak, nonatomic) AXMTextDetectorNode *textDetector;
@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (weak, nonatomic) AXMFaceDetectorNode *faceDetector;
@property (weak, nonatomic) AXMTraitDetectorNode *traitDetector;
@property (weak, nonatomic) AXMProminentObjectsDetectorNode *prominentObjectsDetector;
@property (weak, nonatomic) AXMCaptionDetectorNode *captionDetector;
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector;

- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end
