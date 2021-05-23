/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIButton.h>

@class HUCircleView, NSArray, UIImage, UIImageView;

@interface HUCircleButton : UIButton

{
    UIImage *_iconImage;
    HUCircleView *_circleView;
    UIImageView *_iconImageView;
    NSArray *_constraints;
}

@property (retain, nonatomic) HUCircleView *circleView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImage *iconImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)tintColorDidChange;
- (void)_setupConstraints;

@end
