/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIPreviewAction;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetItemView : UIView

{
    _Bool _selected;
    UIPreviewAction *_action;
    UILabel *_label;
    UIImageView *_imageView;
}

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) _Bool selected;
@property (copy, nonatomic) UIPreviewAction *action;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_contentSizeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 action:(id)arg2;
- (void)_updateLabelFont;
- (void)_updateTitleFromAction;
- (void)_updateImageFromAction;
- (void)_updateConstraints;

@end
