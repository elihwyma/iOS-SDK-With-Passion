/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKGradientFillStyle : HKFillStyle

{
    UIColor *_firstColor;
    UIColor *_secondColor;
    double _fillPercentage;
    long long _fillDirection;
    double _gradientSize;
}

@property (retain, nonatomic) UIColor *firstColor;
@property (retain, nonatomic) UIColor *secondColor;
@property (nonatomic) double fillPercentage;
@property (nonatomic) long long fillDirection;
@property (nonatomic) double gradientSize;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (_Bool)_useReversedFillDirection;

@end
