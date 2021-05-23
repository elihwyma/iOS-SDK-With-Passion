/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSGAboutController : PSListController

{
    _Bool _firstViewDidAppear;
    id _effectiveSettingsChangedNotificationObserver;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)willUnlock;
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;
- (id)deviceName:(id)arg1;
- (void)updateDeviceNameSpecifierIfNeeded;

@end
