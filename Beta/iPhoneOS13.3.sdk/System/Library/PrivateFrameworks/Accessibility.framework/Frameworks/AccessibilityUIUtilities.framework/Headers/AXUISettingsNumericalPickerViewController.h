/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXUISettingsSetupCapableListController.h>

@class NSString;

@interface AXUISettingsNumericalPickerViewController : AXUISettingsSetupCapableListController

{
    double _cachedNumericalValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)localizedTitle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)minimumValue;
- (double)maximumValue;
- (id)specifiers;
- (_Bool)userCanDisableNumericalPreference;
- (_Bool)shouldDisablePreferenceEntirely;
- (id)localizedFooterText;
- (void)setDelayEnabled:(id)arg1 specifier:(id)arg2;
- (id)delayEnabled:(id)arg1;
- (_Bool)numericalPreferenceEnabled;
- (id)localizedPickerFooterText;
- (id)_delayPickerSpecifier;
- (void)setNumericalPreferenceEnabledFromUser:(_Bool)arg1;
- (_Bool)shouldSaveOnExit;
- (id)_delayPickerFooterSpecifier;
- (void)setNumericalPreferenceValueFromUser:(double)arg1;
- (double)stepAmount;
- (double)numericalPreferenceValue;
- (id)stringValueForSpecifier:(id)arg1;
- (double)valueForSpecifier:(id)arg1;
- (id)localizedTextForValue:(double)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (double)stepValueForSpecifier:(id)arg1;
- (double)minimumValueForSpecifier:(id)arg1;
- (double)maximumValueForSpecifier:(id)arg1;

@end
