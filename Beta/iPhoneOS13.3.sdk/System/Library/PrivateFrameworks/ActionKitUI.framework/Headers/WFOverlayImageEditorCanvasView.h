/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UIRotationGestureRecognizer, WFOverlayImageTransform;

__attribute__((visibility("hidden")))
@interface WFOverlayImageEditorCanvasView : UIView

{
    _Bool _rotationEnabled;
    WFOverlayImageTransform *_imageTransform;
    UIRotationGestureRecognizer *_rotateRecognizer;
    UIImageView *_backgroundImageView;
    UIImageView *_overlayImageView;
}

@property (weak, nonatomic, readonly) UIRotationGestureRecognizer *rotateRecognizer;
@property (weak, nonatomic, readonly) UIImageView *backgroundImageView;
@property (weak, nonatomic, readonly) UIImageView *overlayImageView;
@property (nonatomic) _Bool rotationEnabled;
@property (nonatomic, readonly) WFOverlayImageTransform *imageTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (id)initWithBackgroundImage:(id)arg1 overlayImage:(id)arg2 transform:(id)arg3;
- (void)setOverlayImageOpacity:(double)arg1;

@end
