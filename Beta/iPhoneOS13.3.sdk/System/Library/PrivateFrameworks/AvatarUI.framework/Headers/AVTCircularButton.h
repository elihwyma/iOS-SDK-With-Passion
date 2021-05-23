/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIButton.h>

@class CAShapeLayer, UIColor, UIImage;

@interface AVTCircularButton : UIButton

{
    _Bool _isUsingDynamicBackground;
    CAShapeLayer *_clippingLayer;
    UIColor *_dynamicBackgroundColor;
    UIImage *_symbolImage;
    UIColor *_symbolTintColor;
}

@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) UIColor *dynamicBackgroundColor;
@property (retain, nonatomic) UIImage *symbolImage;
@property (retain, nonatomic) UIColor *symbolTintColor;
@property (nonatomic) _Bool isUsingDynamicBackground;

- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setupView;
- (void)setSymbolImageWithName:(id)arg1 configuration:(id)arg2;
- (void)setSymbolImageWithName:(id)arg1;
- (void)updateDynamicBackgroundColor;
- (void)updateBackgroundColorIfNeeded;
- (double)circleLayerAlpha;

@end
