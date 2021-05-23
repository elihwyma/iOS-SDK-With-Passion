/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, _SBFloatingDockPlatterMetrics;

@interface SBFloatingDockPlatterView : UIView

{
    _Bool _hasShadow;
    double _referenceHeight;
    double _maximumContinuousCornerRadius;
    UIView *_backgroundView;
    UIImageView *_shadowView;
    _SBFloatingDockPlatterMetrics *_metrics;
}

@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) _SBFloatingDockPlatterMetrics *metrics;
@property (nonatomic) double referenceHeight;
@property (nonatomic) double maximumContinuousCornerRadius;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) _Bool hasShadow;
@property (nonatomic, readonly) struct UIEdgeInsets shadowOutsets;
@property (retain, nonatomic) UIView *backgroundView;

+ (id)borderColorForUserInterfaceStyle:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct UIEdgeInsets)shadowOutsetsForBounds:(struct CGRect)arg1;
- (void)updateBorderVisualStyling;
- (double)_maxShadowViewAlpha;
- (struct UIEdgeInsets)_shadowOutsetsForMetrics:(id)arg1;
- (id)_metricsForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)_shadowInsetsForMetrics:(id)arg1;
- (id)_shadowImageViewForMetrics:(id)arg1;
- (id)_shadowImageForMetrics:(id)arg1;

@end
