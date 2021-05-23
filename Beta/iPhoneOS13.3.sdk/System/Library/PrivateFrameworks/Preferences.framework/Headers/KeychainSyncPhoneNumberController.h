/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class KeychainSyncPhoneSettingsFragment, NSString, UILabel;

@interface KeychainSyncPhoneNumberController

{
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UILabel *_footerLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)nextPressed;
- (void)controllerDone;

@end
