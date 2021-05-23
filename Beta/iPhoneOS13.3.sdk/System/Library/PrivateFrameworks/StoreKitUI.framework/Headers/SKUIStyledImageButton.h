/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIStyledImageButton : UIControl

{
    _Bool _didInitialHighlightForTouch;
    SKUIImageView *_imageView;
    SKUIImageView *_additionalImageView;
    struct UIEdgeInsets _bigHitInsets;
    _Bool _useBigHitTarget;
    struct UIEdgeInsets _hitRectInsets;
}

@property (nonatomic) struct UIEdgeInsets bigHitInsets;
@property (nonatomic, readonly) SKUIImageView *imageView;
@property (nonatomic, readonly) SKUIImageView *additionalImageView;
@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (nonatomic) _Bool useBigHitTarget;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;

@end
