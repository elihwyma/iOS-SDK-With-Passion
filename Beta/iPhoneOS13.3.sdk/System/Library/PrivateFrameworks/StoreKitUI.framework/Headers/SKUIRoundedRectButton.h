/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIButton.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIRoundedRectButton : UIButton

{
    UIView *_borderView;
    UILabel *_subtitleLabel;
}

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)_basicAnimationWithKeyPath:(id)arg1;
- (void)_reloadColors;
- (void)_reloadFonts;
- (void)setSubtitleWithLabel:(id)arg1;

@end
