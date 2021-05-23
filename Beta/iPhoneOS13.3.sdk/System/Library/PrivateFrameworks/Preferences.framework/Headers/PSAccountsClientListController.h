/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSAccountsClientListController

{
    _Bool _noAccountsSetUp;
    _Bool _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id _acObserver;
    int accountUpdateThrottle;
}

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifierForID:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)updateAccountSpecifier;
- (id)requestedAccountDataclass;
- (id)_visibleAccountTypeIDs;
- (_Bool)_isAccountModificationDisabledByRestrictions;

@end
