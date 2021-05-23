/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface AVTGroupDialMaskingView : UIView

{
    CAGradientLayer *_maskLayer;
}

@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
