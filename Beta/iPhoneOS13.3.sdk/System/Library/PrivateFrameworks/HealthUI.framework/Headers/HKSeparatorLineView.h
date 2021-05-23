/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface HKSeparatorLineView : UIView

{
    UIColor *_color;
    double _separatorThickness;
    long long _dashStyle;
    double _leadingMargin;
    double _trailingMargin;
}

@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double separatorThickness;
@property (nonatomic) long long dashStyle;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

+ (id)_hkecg_separatorView;

- (id)init;
- (_Bool)isOpaque;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_isVertical;
- (void)_applyStyleToContext:(struct CGContext *)arg1;

@end
