/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIBlurEffect, UIImageView, UILabel, UIVisualEffectView;

@interface UIAccessibilityHUDView : UIView

{
    UIAccessibilityHUDItem *_item;
    UIView *_transformContainer;
    UIVisualEffectView *_effectView;
    UIBlurEffect *_blurEffect;
    UIVisualEffectView *_itemEffectView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_customView;
}

@property (copy, nonatomic) UIAccessibilityHUDItem *item;

+ (struct CGSize)preferredHUDSize;

- (id)layoutManager;
- (id)titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)customView;
- (id)_contentEffectsForItem:(id)arg1;
- (void)_updateLabelForItem;
- (void)layoutSubviews;
- (void)_show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHUDItem:(id)arg1;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)containerViewForLayout;
- (id)itemContainerViewForLayout;
- (struct UIEdgeInsets)imageInsetsForLayout;
- (id)imageView;

@end
