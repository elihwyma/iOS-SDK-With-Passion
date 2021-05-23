/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSArray, NSString, UIButton, UILabel, UIPickerView, UIView, VTUIButton, VTUIProximityContainerView, VTUIStyle;

@interface VTUIProximityEnrollmentLanguageOptionsView : VTUIProximityView

{
    NSArray *_continueButtonsLanguages;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_settingsLabel;
    UIView *_footerView;
    UIView *_languagesView;
    VTUIStyle *_vtStyle;
    UIPickerView *_languagesPickerView;
    VTUIButton *_continueButton;
    UIButton *_dismissButton;
    NSArray *_viewConstraints;
}

@property (retain, nonatomic) NSArray *viewConstraints;
@property (nonatomic, readonly) UIPickerView *languagesPickerView;
@property (nonatomic, readonly) VTUIButton *continueButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)_setupContent;
- (id)initWithFrame:(struct CGRect)arg1 languageOptions:(id)arg2;
- (void)_setupConstraintsToSize:(struct CGSize)arg1;

@end
