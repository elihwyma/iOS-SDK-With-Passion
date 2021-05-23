/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class CALayer;

@interface AVTShadowView : UIView

{
    CALayer *_separator;
}

@property (retain, nonatomic) CALayer *separator;

+ (double)defaultHeightForSuperview:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
