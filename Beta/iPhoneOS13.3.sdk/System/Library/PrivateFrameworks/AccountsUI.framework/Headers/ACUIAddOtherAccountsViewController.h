/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Preferences/PSListController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ACUIAddOtherAccountsViewController : PSListController

{
    NSString *_filteredDataclass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)_specifiersForOtherMailAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherCalendarAccounts;
- (id)_viewProvidersManager;

@end
