/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UIVisualEffectView, _TVProgressBarView;

@interface _TVProgressView : UIView

{
    _TVProgressBarView *_progressBarView;
    _Bool _useMaterial;
    _Bool _shouldProgressBarUseRoundCorner;
    long long _style;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    UIColor *_completeTintColor;
    UIVisualEffectView *_materialView;
    UIImageView *_shadowImageView;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) long long style;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *completeTintColor;
@property (nonatomic) _Bool useMaterial;
@property (nonatomic) _Bool shouldProgressBarUseRoundCorner;
@property (nonatomic) struct UIEdgeInsets padding;
@property (retain, nonatomic) UIVisualEffectView *materialView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateForStyleChange;
- (id)_maskImageForProgressBar;
- (void)_layoutMaterialView;

@end
