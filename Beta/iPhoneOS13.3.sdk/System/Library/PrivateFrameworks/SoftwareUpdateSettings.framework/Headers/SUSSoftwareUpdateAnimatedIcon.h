/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface SUSSoftwareUpdateAnimatedIcon : UIView

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
