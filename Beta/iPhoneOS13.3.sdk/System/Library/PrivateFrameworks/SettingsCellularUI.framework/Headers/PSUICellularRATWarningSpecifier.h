/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSConfirmationSpecifier.h>

@class PSListController;

__attribute__((visibility("hidden")))
@interface PSUICellularRATWarningSpecifier : PSConfirmationSpecifier

{
    PSListController *_RATModeDrillDownController;
}

@property (retain, nonatomic) PSListController *RATModeDrillDownController;

- (id)initWithDrillDownController:(id)arg1;
- (void)acceptedRATSwitch;
- (void)canceledRATSwitch;

@end
