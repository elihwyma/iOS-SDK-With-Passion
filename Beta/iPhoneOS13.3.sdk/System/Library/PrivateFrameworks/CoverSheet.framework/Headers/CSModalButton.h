/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIButton.h>

@class UIColor, UIVisualEffect, UIVisualEffectView;

@interface CSModalButton : UIButton

{
    UIColor *_backgroundColor;
    UIVisualEffectView *_effectView;
    _Bool _isPressed;
}

@property (retain, nonatomic) UIVisualEffect *visualEffect;

- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_buttonReleased:(id)arg1;

@end
