/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class NSArray, NSDictionary, NSObject, NSString, PSSpecifier;

@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowanceListController : STPINListViewController

{
    _Bool _shouldShowConfirmDeletionAlert;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    NSArray *_allowanceSpecifiers;
    PSSpecifier *_enableAllAllowancesSpecifier;
    NSDictionary *_allowanceSpecifiersByBundleIdentifier;
}

@property (copy) NSArray *allowanceSpecifiers;
@property (retain) PSSpecifier *enableAllAllowancesSpecifier;
@property (readonly) _Bool shouldShowCompatibilityAlert;
@property _Bool shouldShowConfirmDeletionAlert;
@property (copy) NSDictionary *allowanceSpecifiersByBundleIdentifier;
@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (void)confirmDeletion:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)deleteAllowance:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)_allowancesDidChange;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)arg1;
- (void)addAllowance:(id)arg1;
- (void)showStoreDemoAlert;
- (void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2;
- (id)_allAllowancesEnabled:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_showAllowanceDetailController:(id)arg1;
- (id)_subtitleTextForAllowance:(id)arg1;
- (void)_showConfirmDeletionView:(id)arg1;

@end
