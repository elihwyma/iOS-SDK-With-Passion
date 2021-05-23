/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@interface _UIReflectingView : UIView

{
    UIView *_containerView;
    UIView *_gradientView;
    double _reflectionAlpha;
}

@property (retain, nonatomic, readonly) UIView *containerView;
@property (nonatomic) double reflectionFraction;
@property (nonatomic) double reflectionAlpha;

- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_gradientLayer;
- (void)_updateGradientColors;

@end
