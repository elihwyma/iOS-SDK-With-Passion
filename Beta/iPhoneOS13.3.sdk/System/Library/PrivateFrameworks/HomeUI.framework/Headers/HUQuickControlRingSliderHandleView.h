/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface HUQuickControlRingSliderHandleView : UIView

{
    unsigned long long _handleViewStyle;
    UIView *_lineView;
    CAShapeLayer *_circleLayer;
}

@property (nonatomic) unsigned long long handleViewStyle;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAShapeLayer *circleLayer;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (void)_setColor:(id)arg1;
- (double)outerRadius;
- (void)_updateCircleLayer;

@end
