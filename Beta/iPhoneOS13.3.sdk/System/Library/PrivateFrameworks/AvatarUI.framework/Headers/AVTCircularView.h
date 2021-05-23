/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface AVTCircularView : UIView

{
    CAShapeLayer *_clippingLayer;
}

@property (retain, nonatomic) CAShapeLayer *clippingLayer;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
