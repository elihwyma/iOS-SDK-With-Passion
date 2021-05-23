/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSGDeviceNameEditingController : PSListController

{
    id _effectiveSettingsChangedNotificationObserver;
    NSString *_originalDeviceName;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (retain, nonatomic) NSString *originalDeviceName;

- (void)suspend;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)shouldSelectResponderOnAppearance;
- (id)deviceName:(id)arg1;
- (id)_editedDeviceName;

@end
