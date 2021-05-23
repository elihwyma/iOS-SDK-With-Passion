/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HKCaretOptionalTextField, HKSeparatorLineView, HRStackedButtonView, NSDate, NSDateFormatter, NSLayoutConstraint, NSNumber, NSString, UIDatePicker, UIImageView, UILabel, UIStackView, UIView;

@interface HROnboardingAtrialFibrillationGateViewController : HROnboardingBaseViewController

{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HKSeparatorLineView *_birthdayTopSeparator;
    UIStackView *_birthdayEntryView;
    HKCaretOptionalTextField *_birthdayTextField;
    UILabel *_birthdayFooterLabel;
    UIDatePicker *_datePicker;
    NSDate *_dateOfBirth;
    NSDateFormatter *_dateFormatter;
    HKSeparatorLineView *_birthdayBottomSeparator;
    UILabel *_diagnosisPromptLabel;
    NSNumber *_diagnosis;
    HKSeparatorLineView *_diagnosisTopSeparator;
    UIView *_diagnosisYesBackground;
    UIStackView *_diagnosisYesRow;
    UIImageView *_diagnosisYesCheckmark;
    UILabel *_diagnosisYesLabel;
    HKSeparatorLineView *_diagnosisMiddleSeparator;
    UIView *_diagnosisNoBackground;
    UIStackView *_diagnosisNoRow;
    UIImageView *_diagnosisNoCheckmark;
    UILabel *_diagnosisNoLabel;
    HKSeparatorLineView *_diagnosisBottomSeparator;
    UILabel *_diagnosisFooterLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HKSeparatorLineView *birthdayTopSeparator;
@property (retain, nonatomic) UIStackView *birthdayEntryView;
@property (retain, nonatomic) HKCaretOptionalTextField *birthdayTextField;
@property (retain, nonatomic) UILabel *birthdayFooterLabel;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSDate *dateOfBirth;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) HKSeparatorLineView *birthdayBottomSeparator;
@property (retain, nonatomic) UILabel *diagnosisPromptLabel;
@property (retain, nonatomic) NSNumber *diagnosis;
@property (retain, nonatomic) HKSeparatorLineView *diagnosisTopSeparator;
@property (retain, nonatomic) UIView *diagnosisYesBackground;
@property (retain, nonatomic) UIStackView *diagnosisYesRow;
@property (retain, nonatomic) UIImageView *diagnosisYesCheckmark;
@property (retain, nonatomic) UILabel *diagnosisYesLabel;
@property (retain, nonatomic) HKSeparatorLineView *diagnosisMiddleSeparator;
@property (retain, nonatomic) UIView *diagnosisNoBackground;
@property (retain, nonatomic) UIStackView *diagnosisNoRow;
@property (retain, nonatomic) UIImageView *diagnosisNoCheckmark;
@property (retain, nonatomic) UILabel *diagnosisNoLabel;
@property (retain, nonatomic) HKSeparatorLineView *diagnosisBottomSeparator;
@property (retain, nonatomic) UILabel *diagnosisFooterLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setUpConstraints;
- (void)_updateButtonState;
- (id)_bodyFont;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)initForOnboarding:(_Bool)arg1;
- (void)_keyboardFrameChanged:(id)arg1;
- (void)_setUpBirthdayEntryView;
- (id)_footnoteFont;
- (id)_diagnosisPromptFont;
- (void)_setUpDiagnosisRowWithTitle:(id)arg1 value:(_Bool)arg2;
- (void)_updateDateOfBirthDisplay;
- (void)_didTapBackground;
- (double)_ageEntryTopSeparatorToFirstBaseline;
- (double)_ageEntryLastBaselineToBottomSeparator;
- (double)_separatorToFooterFirstBaseline;
- (double)_ageEntryFooterToDiagnosisPromptFirstBaseline;
- (double)_diagnosisPromptLastBaselineToDiagnosisTop;
- (double)_diagnosisTopSeparatorToFirstBaseline;
- (double)_diagnosisLastBaselineToBottomSeparator;
- (double)_diagnosisFooterLabelToContinueButton;
- (id)_ageEntryTitleFont;
- (id)_dateOfBirthDatePicker;
- (void)_dateOfBirthTapped:(id)arg1;
- (void)_datePickerValueChanged:(id)arg1;
- (void)_diagnosisRowTapped:(id)arg1;
- (_Bool)_meetsAgeRequirement;
- (id)ageIneligiblePromptBodyString;
- (id)ageIneligiblePromptAckButtonString;
- (_Bool)_meetsDiagnosisRequirement;
- (id)diagnosisIneligiblePromptBodyString;
- (id)diagnosisIneligiblePromptAckButtonString;
- (id)ageWithDate:(id)arg1;
- (id)ageLimit;
- (id)ageIneligiblePromptTitleString;
- (id)diagnosisIneligiblePromptTitleString;

@end
