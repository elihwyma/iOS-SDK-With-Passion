/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Preferences/PSListController.h>

@class ACAccountStore, ACUIAccountViewProvidersManager, NSArray, NSString, PSSpecifier;

@interface ACUIAddAccountViewController : PSListController

{
    _Bool _dontShowSecondLevelOtherAccountTypes;
    NSArray *_preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    PSSpecifier *_gmailSpecifier;
    NSString *_filteredDataclass;
    ACAccountStore *_accountStore;
}

@property (nonatomic, readonly) ACUIAccountViewProvidersManager *viewProvidersManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (_Bool)shouldAddSpecifierForAccountTypeID:(id)arg1;
- (id)_specifierForiCloudAccount;
- (id)_specifierForExchangeAccount;
- (id)_specifiersForRegionalMailAccounts;
- (id)_specifierForGmailAccount;
- (id)_specifierForYahooAccount;
- (id)_specifierForAOLAccount;
- (id)_specifierForOutlookAccount;
- (id)specifierForOtherAccounts;
- (id)_specifierForPrimaryiCloudAccount;
- (id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2;
- (void)_presentPrimaryAppleIDSignInController:(id)arg1;
- (void)_dismissAndBecomeFirstResponder;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2;
- (void)_createCustomControlledAccountTapped:(id)arg1;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(_Bool)arg1;
- (id)_specifierForRegionalAccountType:(id)arg1;
- (void)signInControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)signInControllerDidCancel;

@end
