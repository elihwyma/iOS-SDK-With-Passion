/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIFont, UIImage, UIStackView, VSFontCenter;

@protocol VSSetupViewDelegate;

@interface VSSetupView : UIView

{
    _Bool _shouldShowAppsButton;
    _Bool _shouldShowAboutButton;
    _Bool _shouldOverrideSkipButtonStyle;
    id <VSSetupViewDelegate> _delegate;
    UIImage *_image;
    NSString *_appName;
    NSString *_appAgeRatingBadge;
    NSString *_footnote;
    NSString *_title;
    NSString *_message;
    NSString *_beginButtonTitle;
    NSString *_skipButtonTitle;
    NSString *_appsButtonTitle;
    UIView *_tvProviderPrivacyButtonContainer;
    UIView *_tvAppPrivacyButtonContainer;
    NSString *_footer;
    VSFontCenter *_fontCenter;
    UIFont *_defaultSkipButtonFont;
    UIFont *_skipButtonFont;
    double _defaultSkipButtonSpacing;
    UIStackView *_stackView;
    UIButton *_beginButton;
    UIButton *_skipButton;
    UIButton *_appsButton;
}

@property (retain, nonatomic) VSFontCenter *fontCenter;
@property (retain, nonatomic) UIFont *defaultSkipButtonFont;
@property (retain, nonatomic) UIFont *skipButtonFont;
@property (nonatomic) double defaultSkipButtonSpacing;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIButton *beginButton;
@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) UIButton *appsButton;
@property (weak, nonatomic) id <VSSetupViewDelegate> delegate;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appAgeRatingBadge;
@property (retain, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) _Bool shouldShowAppsButton;
@property (nonatomic) _Bool shouldShowAboutButton;
@property (nonatomic) _Bool shouldOverrideSkipButtonStyle;
@property (copy, nonatomic) NSString *beginButtonTitle;
@property (copy, nonatomic) NSString *skipButtonTitle;
@property (copy, nonatomic) NSString *appsButtonTitle;
@property (nonatomic, readonly) UIView *tvProviderPrivacyButtonContainer;
@property (nonatomic, readonly) UIView *tvAppPrivacyButtonContainer;
@property (copy, nonatomic) NSString *footer;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_beginButtonPressed:(id)arg1;
- (void)_skipButtonPressed:(id)arg1;
- (void)_appsButtonPressed:(id)arg1;

@end
