/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView

{
    long long _layoutStyle;
    long long _style;
    UIImageView *__borderImageView;
    UILabel *__label;
}

@property (nonatomic, readonly) UIImageView *_borderImageView;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long style;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_updateAppearance;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1;
- (void)_updateForAppearanceChange;
- (long long)_framesPerSecond;

@end
