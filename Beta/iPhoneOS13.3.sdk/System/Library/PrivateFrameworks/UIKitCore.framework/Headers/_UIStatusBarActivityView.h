/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CAGradientLayer, CALayer, NSString, UIAccessibilityHUDItem, UIColor, _UIStatusBarCycleAnimation;

@interface _UIStatusBarActivityView : UIView

{
    _Bool _isSlow;
    UIColor *_color;
    CALayer *_mainLayer;
    CAGradientLayer *_barLayer;
    CALayer *_pointLayer;
    double _thickness;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (retain, nonatomic) CALayer *mainLayer;
@property (retain, nonatomic) CAGradientLayer *barLayer;
@property (retain, nonatomic) CALayer *pointLayer;
@property (nonatomic) double thickness;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;
@property (nonatomic) _Bool isSlow;
@property (copy, nonatomic) UIColor *color;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applyStyleAttributes:(id)arg1;
- (void)startAnimating;
- (void)stopAnimatingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stopAnimatingWithStoppingAnimations:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_thicknessForTraitCollection:(id)arg1;

@end
