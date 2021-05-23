/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface HUSoftwareUpdateAnimatedIcon : UIView

{
    UIImageView *_innerGearView;
    UIImageView *_outerGearShadowView;
    UIImageView *_outerGearView;
    _Bool _animating;
}

@property (nonatomic, readonly) UIImageView *innerGearView;
@property (nonatomic, readonly) UIImageView *outerGearShadowView;
@property (nonatomic, readonly) UIImageView *outerGearView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)createConstraints;

@end
