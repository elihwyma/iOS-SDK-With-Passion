/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class HRElectrocardiogramSessionSimulationView, UIImageView;

@interface HROnboardingWristImageView : UIView

{
    UIImageView *_backgroundImageView;
    HRElectrocardiogramSessionSimulationView *_screenView;
}

@property (nonatomic, readonly) UIImageView *backgroundImageView;
@property (nonatomic, readonly) HRElectrocardiogramSessionSimulationView *screenView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)setTimeRemaining:(double)arg1;
- (void)setUpUI;

@end
