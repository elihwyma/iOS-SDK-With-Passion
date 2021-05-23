/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface HUQuickControlMagnifierView : UIView

{
    double _innerRadius;
}

@property (nonatomic) double innerRadius;
@property (retain, nonatomic) UIColor *selectedColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_outlineWidth;

@end
