/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@class CAMPreviewView;

@protocol CAMViewfinderTransitionable

@property (nonatomic, readonly) CAMPreviewView *previewView;
@property (nonatomic, readonly) long long desiredAspectRatio;

- (unsigned short)removeInflightBlurAnimations;
- (unsigned short)prepareForResumingUsingCrossfade;

@end
