/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIControl.h>

@class AAUILabel, UIImageView, UIView;

@interface AAUIImageControl : UIControl

{
    UIImageView *_imageView;
    AAUILabel *_label;
    UIView *_overlayView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) AAUILabel *label;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateLabelVisibility;
- (void)_updateOverlayViewVisibility;

@end
