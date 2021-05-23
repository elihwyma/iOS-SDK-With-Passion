/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface ETColorGradientView : UIView

{
    UIImageView *_imageView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareToAnimateColorWheelWithRotation:(double)arg1;
- (void)revealColorWheelWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideColorWheelWithRotation:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
