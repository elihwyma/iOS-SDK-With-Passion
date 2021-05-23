/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Preferences/PSListController.h>

@class NSDateFormatter, PSSpecifier, UISUserInterfaceStyleMode;

__attribute__((visibility("hidden")))
@interface DBSDeviceAppearanceScheduleController : PSListController

{
    _Bool __showingScheduleSpecifiers;
    PSSpecifier *__radioGroup;
    PSSpecifier *__timeGroup;
    PSSpecifier *__lightAppearanceStartTimeSpecifier;
    PSSpecifier *__darkAppearanceStartTimeSpecifier;
    PSSpecifier *__lightAppearanceTimePickerSpecifier;
    PSSpecifier *__darkAppearanceTimePickerSpecifier;
    PSSpecifier *__selectedTimeSpecifier;
    UISUserInterfaceStyleMode *__styleMode;
    NSDateFormatter *__timeFormatter;
}

@property (retain, nonatomic) PSSpecifier *_radioGroup;
@property (retain, nonatomic) PSSpecifier *_timeGroup;
@property (retain, nonatomic) PSSpecifier *_lightAppearanceStartTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *_darkAppearanceStartTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *_lightAppearanceTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *_darkAppearanceTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *_selectedTimeSpecifier;
@property (nonatomic) _Bool _showingScheduleSpecifiers;
@property (weak, nonatomic) UISUserInterfaceStyleMode *_styleMode;
@property (retain, nonatomic) NSDateFormatter *_timeFormatter;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (void)showScheduleSpecifiers:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (id)_lightAppearanceTimeString;
- (id)_darkAppearanceTimeString;

@end
