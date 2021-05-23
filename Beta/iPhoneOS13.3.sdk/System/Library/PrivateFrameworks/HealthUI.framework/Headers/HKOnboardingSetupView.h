/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@protocol HKOnboardingSetupViewDelegate;

@interface HKOnboardingSetupView : UIView

{
    id <HKOnboardingSetupViewDelegate> _delegate;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_onboardingButton;
}

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *onboardingButton;
@property (weak, nonatomic) id <HKOnboardingSetupViewDelegate> delegate;
@property (nonatomic, readonly) NSString *titleString;
@property (nonatomic, readonly) NSString *bodyString;
@property (nonatomic, readonly) NSString *buttonTitleString;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setUpConstraints;
- (id)createHeroView;
- (void)_didTapOnboardingButton;

@end
