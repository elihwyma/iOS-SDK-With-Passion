/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_manageContactsRequestSpecifier;
}

@property (retain) PSSpecifier *manageContactsRequestSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)_communicationLimitsDidChange:(id)arg1;
- (void)_showManageContactsRequestAlert:(id)arg1;
- (void)_updateContactManagementState:(long long)arg1;

@end
