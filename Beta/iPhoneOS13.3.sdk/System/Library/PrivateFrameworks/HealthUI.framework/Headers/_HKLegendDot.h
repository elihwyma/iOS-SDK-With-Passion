/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface _HKLegendDot : UIView

{
    UIColor *_dotColor;
    UIColor *_innerDotColor;
    CALayer *_innerDotLayer;
}

@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (retain, nonatomic) CALayer *innerDotLayer;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;

@end
