/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class NSArray, NSSet, PSSpecifier, STAlwaysAllowList;

@protocol STAlwaysAllowListControllerDelegate;

__attribute__((visibility("hidden")))
@interface STAlwaysAllowListController : STPINListViewController

{
    id <STAlwaysAllowListControllerDelegate> _delegate;
    STAlwaysAllowList *_alwaysAllowList;
    NSArray *_chooseBundleIDs;
    NSSet *_installedBundleIDs;
    PSSpecifier *_allowedContactsSpecifier;
    PSSpecifier *_allowedAppsGroupSpecifier;
    NSArray *_allowedAppsSpecifiers;
    PSSpecifier *_chooseAppsGroupSpecifier;
    NSArray *_chooseAppsSpecifiers;
}

@property (retain) PSSpecifier *allowedContactsSpecifier;
@property (retain, nonatomic) PSSpecifier *allowedAppsGroupSpecifier;
@property (retain, nonatomic) NSArray *allowedAppsSpecifiers;
@property (retain, nonatomic) PSSpecifier *chooseAppsGroupSpecifier;
@property (retain, nonatomic) NSArray *chooseAppsSpecifiers;
@property (weak, nonatomic) id <STAlwaysAllowListControllerDelegate> delegate;
@property (copy, nonatomic) STAlwaysAllowList *alwaysAllowList;
@property (copy, nonatomic) NSArray *chooseBundleIDs;
@property (copy, nonatomic) NSSet *installedBundleIDs;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willResignActive;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)setCoordinator:(id)arg1;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)_allowedContactsDuringDowntimeText:(id)arg1;
- (id)createAllowedAppsSpecifiers;
- (id)createChooseAppsSpecifiers;
- (id)appSpecifiersForBundleIDs:(id)arg1;
- (void)_insertAllowedAppSpecifier:(id)arg1;
- (void)_removeAllowedAppSpecifier:(id)arg1;
- (id)removeMessagesConfirmationPrompt;
- (void)removeAllowedIdentifier:(id)arg1 withSpecifier:(id)arg2;

@end
