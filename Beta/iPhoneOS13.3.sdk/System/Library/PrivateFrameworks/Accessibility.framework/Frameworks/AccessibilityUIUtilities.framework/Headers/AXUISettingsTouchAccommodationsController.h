/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray, NSString, PSSpecifier;

@interface AXUISettingsTouchAccommodationsController : AXUISettingsBaseListController

{
    _Bool _touchAccommodationsEnabled;
    _Bool _touchAccommodationsAreConfigured;
    _Bool _touchAccommodationsHoldDurationEnabled;
    _Bool _touchAccommodationsIgnoreRepeatEnabled;
    _Bool _touchAccommodationsAllowsSwipeGesturesToBypass;
    double _touchAccommodationsHoldDuration;
    double _touchAccommodationsIgnoreRepeatDuration;
    double _touchAccommodationsTapActivationTimeout;
    long long _touchAccommodationsTapActivationMethod;
    NSArray *_tapTimeoutSpecifiers;
    PSSpecifier *_holdDurationPickerSpecifier;
    PSSpecifier *_ignoreRepeatPickerSpecifier;
    NSArray *_swipeGesturesSpecifiers;
}

@property (retain, nonatomic) NSArray *tapTimeoutSpecifiers;
@property (retain, nonatomic) PSSpecifier *holdDurationPickerSpecifier;
@property (retain, nonatomic) PSSpecifier *ignoreRepeatPickerSpecifier;
@property (retain, nonatomic) NSArray *swipeGesturesSpecifiers;
@property (nonatomic) _Bool touchAccommodationsEnabled;
@property (nonatomic, readonly) _Bool touchAccommodationsAreConfigured;
@property (nonatomic) _Bool touchAccommodationsHoldDurationEnabled;
@property (nonatomic) _Bool touchAccommodationsIgnoreRepeatEnabled;
@property (nonatomic) _Bool touchAccommodationsAllowsSwipeGesturesToBypass;
@property (nonatomic) double touchAccommodationsHoldDuration;
@property (nonatomic) double touchAccommodationsIgnoreRepeatDuration;
@property (nonatomic) double touchAccommodationsTapActivationTimeout;
@property (nonatomic) long long touchAccommodationsTapActivationMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)stringValueForSpecifier:(id)arg1;
- (double)valueForSpecifier:(id)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (double)stepValueForSpecifier:(id)arg1;
- (double)minimumValueForSpecifier:(id)arg1;
- (double)maximumValueForSpecifier:(id)arg1;
- (void)_updateMasterSwitchFooterTextForSpecifier:(id)arg1 shouldReload:(_Bool)arg2;
- (void)setTouchAccommodationsEnabled:(id)arg1 specifier:(id)arg2;
- (id)touchAccommodationsEnabled:(id)arg1;
- (id)_holdDurationSpecifiers;
- (_Bool)_shouldShowSwipeGesturesSpecifiersWithHoldDuration;
- (id)_swipeGesturesSpecifiers;
- (id)_ignoreRepeatSpecifiers;
- (id)_tapActivationMethodSpecifiers;
- (_Bool)_shouldShowSwipeGesturesSpecifiersWithTapAssistance;
- (void)_updateMasterSwitchFooterText;
- (void)_showOrHideTapTimeoutAnimated:(_Bool)arg1;
- (void)_updateSwipeGesturesSpecifiers;
- (void)_updateDelayPickerSpecifier:(id)arg1 additionalSpecifiers:(id)arg2 afterSpecifierWithIdentifier:(id)arg3 enabled:(_Bool)arg4;
- (void)_setIgnoreRepeatEnabled:(id)arg1 specifier:(id)arg2;
- (id)_ignoreRepeatEnabled:(id)arg1;
- (id)_durationSpecifiersWithName:(id)arg1 groupIdentifier:(id)arg2 footerText:(id)arg3 set:(SEL)arg4 get:(SEL)arg5 previousSpecifierIdentifier:(id)arg6 conditionalSpecifiers:(id)arg7;
- (void)_setHoldDurationEnabled:(id)arg1 specifier:(id)arg2;
- (id)_holdDurationEnabled:(id)arg1;
- (id)_swipeGesturesEnabled:(id)arg1;
- (Class)touchAccomodationsSwipeGestureViewControllerClass;
- (id)holdDuration:(id)arg1;
- (id)ignoreRepeat:(id)arg1;
- (id)activationMethod:(id)arg1;

@end
