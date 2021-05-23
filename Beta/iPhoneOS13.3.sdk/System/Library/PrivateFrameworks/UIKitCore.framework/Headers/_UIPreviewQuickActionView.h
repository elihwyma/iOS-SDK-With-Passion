/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIPreviewAction;

__attribute__((visibility("hidden")))
@interface _UIPreviewQuickActionView : UIView

{
    _Bool _selected;
    UIPreviewAction *_quickAction;
    UIImageView *_backgroundViewImage;
    UIImageView *_imageView;
    UILabel *_label;
}

@property (weak, nonatomic) UIImageView *backgroundViewImage;
@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UILabel *label;
@property (retain, nonatomic) UIPreviewAction *quickAction;
@property (nonatomic) _Bool selected;

- (id)initWithCoder:(id)arg1;
- (id)centerYAnchor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateCircleBackgroundImage;
- (void)updateFromQuickAction;

@end
