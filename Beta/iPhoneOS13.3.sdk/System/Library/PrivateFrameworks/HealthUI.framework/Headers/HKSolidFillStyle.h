/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKFillStyle.h>

@class UIColor;

@interface HKSolidFillStyle : HKFillStyle

{
    UIColor *_color;
}

@property (copy, nonatomic) UIColor *color;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;

@end
