/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, _UILegibilitySettings;

@interface SBFStatusBarLegibilityView : UIView

{
    _Bool _forceLegibilityGradientHidden;
    _UILegibilitySettings *_legibilitySettings;
    UIView *_statusBarGradientView;
    UIView *_overallGradientView;
    UIImageView *_leftCornerView;
    UIImageView *_rightCornerView;
}

@property (retain, nonatomic) UIView *statusBarGradientView;
@property (retain, nonatomic) UIView *overallGradientView;
@property (retain, nonatomic) UIImageView *leftCornerView;
@property (retain, nonatomic) UIImageView *rightCornerView;
@property (nonatomic) _Bool forceLegibilityGradientHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

+ (id)statusBarGradientView;
+ (id)overallGradientView;
+ (id)gradientViewWithOpacities:(const double *)arg1 locations:(id)arg2;

- (void)layoutSubviews;
- (void)_configureWithLegibilitySettings:(id)arg1 forceLegibilityGradientHidden:(_Bool)arg2;
- (void)_configureAsPad;
- (void)_configureAsPhone;

@end
