/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@protocol WFOverlayImageEditorOptionsViewDelegate

@property (nonatomic) _Bool rotationEnabled;
@property (nonatomic) _Bool opacitySliderVisible;

- (unsigned short)resetOverlayImageViewTransformations;
- (unsigned short)cancelEditingImage;
- (unsigned short)finishEditingImage;

@end
