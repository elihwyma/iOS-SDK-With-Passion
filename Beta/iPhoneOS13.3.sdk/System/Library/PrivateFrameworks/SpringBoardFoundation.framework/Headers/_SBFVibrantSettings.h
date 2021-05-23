/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject

{
    long long _style;
    UIColor *_referenceColor;
    _UILegibilitySettings *_legibilitySettings;
    double _referenceContrast;
    UIColor *_tintColor;
    UIColor *_highlightLimitingColor;
    UIColor *_shimmerColor;
    UIColor *_chevronShimmerColor;
    UIColor *_highlightColor;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *highlightLimitingColor;
@property (retain, nonatomic) UIColor *shimmerColor;
@property (retain, nonatomic) UIColor *chevronShimmerColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic, readonly) UIColor *referenceColor;
@property (nonatomic, readonly) double referenceContrast;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long style;

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)_style;
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;
- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2;
- (id)tintViewWithFrame:(struct CGRect)arg1;
- (id)highlightLimitingViewWithFrame:(struct CGRect)arg1;

@end
