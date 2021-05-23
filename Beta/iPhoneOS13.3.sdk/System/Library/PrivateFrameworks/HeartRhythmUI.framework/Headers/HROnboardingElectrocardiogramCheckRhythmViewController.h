/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HKCaretOptionalTextField, HKHeartRhythmAvailability, HKSeparatorLineView, HRStackedButtonView, NSDate, NSDateFormatter, NSLayoutConstraint, NSString, UIDatePicker, UILabel, UIStackView, UIView;

@interface HROnboardingElectrocardiogramCheckRhythmViewController : HROnboardingBaseViewController

{
    HKHeartRhythmAvailability *_availability;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UILabel *_birthdayPromptLabel;
    HKSeparatorLineView *_birthdayTopSeparator;
    UIStackView *_birthdayEntryView;
    HKCaretOptionalTextField *_birthdayTextField;
    UIDatePicker *_datePicker;
    NSDate *_dateOfBirth;
    NSDateFormatter *_dateFormatter;
    HKSeparatorLineView *_birthdayBottomSeparator;
    UILabel *_birthdayFooterLabel;
    UILabel *_locationFooterLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSString *_productType;
}

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *birthdayPromptLabel;
@property (retain, nonatomic) HKSeparatorLineView *birthdayTopSeparator;
@property (retain, nonatomic) UIStackView *birthdayEntryView;
@property (retain, nonatomic) HKCaretOptionalTextField *birthdayTextField;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSDate *dateOfBirth;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) HKSeparatorLineView *birthdayBottomSeparator;
@property (retain, nonatomic) UILabel *birthdayFooterLabel;
@property (retain, nonatomic) UILabel *locationFooterLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSString *productType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)_titleFont;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)titleString;
- (void)setUpConstraints;
- (id)disclaimerString;
- (id)bodyString;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)createHeroView;
- (id)buttonTitleString;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(_Bool)arg1;
- (void)_keyboardFrameChanged:(id)arg1;
- (id)_footnoteFont;
- (void)_updateDateOfBirthDisplay;
- (double)_ageEntryTopSeparatorToFirstBaseline;
- (double)_ageEntryLastBaselineToBottomSeparator;
- (id)_ageEntryTitleFont;
- (id)_dateOfBirthDatePicker;
- (void)_dateOfBirthTapped:(id)arg1;
- (void)_datePickerValueChanged:(id)arg1;
- (_Bool)_meetsAgeRequirement;
- (id)ageIneligiblePromptBodyString;
- (id)ageIneligiblePromptAckButtonString;
- (id)ageWithDate:(id)arg1;
- (id)ageLimit;
- (id)ageIneligiblePromptTitleString;
- (_Bool)_activeWatchNeedsLocationCheck;
- (id)learnMoreString;
- (id)featureDisabledBodyString;
- (id)locationNotFoundPromptBodyString;
- (id)watchOSVersionTooLowBodyString;
- (id)deviceNotSupportedBodyString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)_footnoteTextStyle;
- (id)_birthdayPromptFont;
- (void)_setupBirthdayEntryView;
- (id)birthdayFooterString;
- (id)locationFooterString;
- (double)_titleBottomToBodyTop;
- (double)_bodyBottomToAgePromptTop;
- (double)_agePromptLastBaselineToAgeEntryTop;
- (double)_bottomSeparatorToBirthdayFooterFirstBaseline;
- (double)_birthdayFooterLastBaselineToContinueButton;
- (void)_trackElectrocardiogramOnboardingStepIfNeeded:(long long)arg1 countryCode:(id)arg2;
- (id)createLearnMoreExpandedView;

@end
