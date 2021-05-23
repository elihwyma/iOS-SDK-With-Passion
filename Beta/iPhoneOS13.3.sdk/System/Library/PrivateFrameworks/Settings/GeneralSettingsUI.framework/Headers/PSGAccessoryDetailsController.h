/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class EAAccessory, NSString;

__attribute__((visibility("hidden")))
@interface PSGAccessoryDetailsController : PSListController

{
    EAAccessory *_accessory;
    _Bool _shouldEscape;
    _Bool _finishedAppearing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)disconnect;
- (id)serialNumber;
- (void)connect;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)manufacturer;
- (id)modelNumber;
- (id)specifiers;
- (id)firmwareRevision;
- (id)hardwareRevision;
- (void)accessoryDidDisconnect:(id)arg1;
- (id)bonjourName;
- (void)_accessoryDidUpdate:(id)arg1;
- (void)findAppForAccessory;

@end
