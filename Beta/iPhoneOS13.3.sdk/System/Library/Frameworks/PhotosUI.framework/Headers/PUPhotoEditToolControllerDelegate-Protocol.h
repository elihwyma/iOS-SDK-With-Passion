/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUPhotoEditToolControllerDelegate <Swift>

- (unsigned short)imageProperties;
- (unsigned short)mediaView;
- (unsigned short)isLoopingVideo;
- (unsigned short)sourceSelection;
- (unsigned short)toolControllerDidFinishLoadingThumbnails: /* Error: Ran out of types for this method. */;
- (unsigned short)toolController:updateModelDependentControlsAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerDidChangeIsPerformingLiveInteraction: /* Error: Ran out of types for this method. */;
- (unsigned short)toolController:didChangePreferredPreviewViewInsetsAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerDidChangeWantsDefaultPreviewView: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerDidChangePreferredAlternateToolbarButton: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerDidUpdateToolbar: /* Error: Ran out of types for this method. */;
- (unsigned short)overcaptureType;
- (unsigned short)toolController:switchEditSource: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerUneditedCompositionController: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerOriginalCompositionController: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerImageModulationOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerMainContainerView: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerPlaceholderImage: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerMainRenderer: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerPreviewView: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerLivePhoto: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerRequestLivePhoto:filters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerOriginalOrientedImageSize: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerOriginalImageSize: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerSourceAssetType: /* Error: Ran out of types for this method. */;
- (unsigned short)toolControllerDidFinish: /* Error: Ran out of types for this method. */;
- (unsigned short)toolController:originalPointFromViewPoint:view: /* Error: Ran out of types for this method. */;
- (unsigned short)toolController:viewPointFromOriginalPoint:view: /* Error: Ran out of types for this method. */;
- (unsigned short)updateProgressIndicatorAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)mainLivePhotoView;
- (unsigned short)toolControllerHitEventForwardView: /* Error: Ran out of types for this method. */;
- (unsigned short)isStandardVideo;
- (unsigned short)isVideoOn;
- (unsigned short)isHighframeRateVideo;
- (unsigned short)fontForButtons;
- (unsigned short)dismissLivePhotoRevertConfirmationAlert;
- (unsigned short)updateMutedState;
- (unsigned short)toggleLivePhotoActive;
- (unsigned short)configureEnablenessOfControlButton:animated:canVisuallyDisable: /* Error: Ran out of types for this method. */;
- (unsigned short)hasLoopingVideoAdjustment;
- (unsigned short)isImageZooming;
- (unsigned short)isImageFrameReady;
- (unsigned short)previewViewFrame;

@end
