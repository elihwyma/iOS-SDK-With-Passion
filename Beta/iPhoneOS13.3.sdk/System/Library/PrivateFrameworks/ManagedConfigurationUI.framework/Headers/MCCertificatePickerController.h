/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSListItemsController.h>

__attribute__((visibility("hidden")))
@interface MCCertificatePickerController : PSListItemsController

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)specifiers;
- (void)setRowToSelect;
- (id)navigationTitle;
- (void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(struct __SecCertificate *)arg2;

@end
