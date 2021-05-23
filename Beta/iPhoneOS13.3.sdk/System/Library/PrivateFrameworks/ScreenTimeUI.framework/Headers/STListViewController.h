/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSArray, NSMutableDictionary, NSString;

@interface STListViewController : PSListController

{
    NSArray *_specifierProviders;
    NSMutableDictionary *_cellHeightBySpecifierIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *cellHeightBySpecifierIdentifier;
@property (copy, nonatomic) NSArray *specifierProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)specifierProvider:(id)arg1 reloadSpecifier:(id)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(id)arg1 reloadSectionHeaderFootersWithAnimation:(long long)arg2;
- (void)specifierProvider:(id)arg1 showController:(id)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(id)arg1 dismissViewControllerAnimated:(_Bool)arg2;
- (void)specifierProvider:(id)arg1 showConfirmationViewForSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 popToViewControllerAnimated:(_Bool)arg2;
- (void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)specifierProviderBeginUpdates:(id)arg1;
- (void)specifierProviderEndUpdates:(id)arg1;
- (void)specifierProvider:(id)arg1 lazyLoadBundle:(id)arg2;
- (void)specifierProvider:(id)arg1 showPINSheet:(id)arg2;
- (void)removeObserversForSpecifierProvider:(id)arg1;
- (void)addObserversForSpecifierProvider:(id)arg1;
- (id)visibleSpecifierProviders;

@end
