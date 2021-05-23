/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView, _TVStackBackdropMaskingView, _TVStackBackdropView;

__attribute__((visibility("hidden")))
@interface _TVStackWrappingView : UIView

{
    UIImageView *_backgroundImageView;
    _TVStackBackdropView *_backdropView;
    _TVStackBackdropMaskingView *_maskedBackdropView;
    _Bool _shouldAdjustForTabBarSafeAreaInsets;
    _Bool _usesBackgroundImage;
    _Bool _usesBackdropImage;
    UICollectionView *_stackView;
    NSArray *_headerSupplementaryViews;
    UIImage *_backgroundImage;
    UIImage *_backdropImage;
    long long _backdropBlurEffectStyle;
    double _backdropInitialPeek;
    double _backdropPeekGradient;
    double _backdropMaskFactor;
    NSArray *_supplementaryCellLayoutAttributes;
}

@property (retain, nonatomic) UICollectionView *stackView;
@property (copy, nonatomic) NSArray *headerSupplementaryViews;
@property (nonatomic) _Bool shouldAdjustForTabBarSafeAreaInsets;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) _Bool usesBackgroundImage;
@property (retain, nonatomic) UIImage *backdropImage;
@property (nonatomic) _Bool usesBackdropImage;
@property (nonatomic) long long backdropBlurEffectStyle;
@property (nonatomic) double backdropInitialPeek;
@property (nonatomic) double backdropPeekGradient;
@property (nonatomic) double backdropMaskFactor;
@property (copy, nonatomic, readonly) NSArray *supplementaryCellLayoutAttributes;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets)arg1 sectionIndex:(long long)arg2;

@end
