/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPhotoPickerPreviewView.h>

@class AVTView, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAnimojiPosePreviewView : CNPhotoPickerPreviewView

{
    AVTView *_avtView;
    CAShapeLayer *_clippingLayer;
}

@property (nonatomic, readonly) AVTView *avtView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;

- (void)layoutSubviews;
- (void)setupPreview;
- (void)updatePreviewWithItem:(id)arg1;
- (void)updatePoseWithConfiguration:(id)arg1;

@end
