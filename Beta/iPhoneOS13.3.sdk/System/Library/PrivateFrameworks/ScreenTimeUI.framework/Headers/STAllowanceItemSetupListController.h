/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, STAllowanceItemSearchResultsController;

__attribute__((visibility("hidden")))
@interface STAllowanceItemSetupListController : PSListController

{
    _Bool _allAppsAndCategoriesSelected;
    NSMutableOrderedSet *_selectedBundleIdentifiers;
    NSMutableOrderedSet *_selectedWebDomains;
    NSMutableOrderedSet *_selectedCategoryIdentifiers;
    NSArray *_categorySpecifiers;
    NSMutableDictionary *_applicationAndWebDomainSpecifiersByCategoryIdentifier;
    STAllowanceItemSearchResultsController *_searchResultsController;
}

@property _Bool allAppsAndCategoriesSelected;
@property (readonly) NSMutableOrderedSet *selectedBundleIdentifiers;
@property (readonly) NSMutableOrderedSet *selectedWebDomains;
@property (readonly) NSMutableOrderedSet *selectedCategoryIdentifiers;
@property (copy) NSArray *categorySpecifiers;
@property (nonatomic, readonly) NSMutableDictionary *applicationAndWebDomainSpecifiersByCategoryIdentifier;
@property (retain) STAllowanceItemSearchResultsController *searchResultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willResignActive;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)willPresentSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (id)_categoryDetailText:(id)arg1;
- (void)_didPressCancelButton:(id)arg1;
- (void)_didPressDoneButton:(id)arg1;
- (void)_selectCellsForSelectedIdentifiers:(id)arg1;
- (void)_hasSelectionDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_updateApplicationSpecifiersWithBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 shouldInsertSpecifier:(_Bool)arg3;
- (id)_webDomainSpecifierForDomain:(id)arg1;
- (void)_addWebsiteButtonPressed:(id)arg1;
- (id)_categorySpecifierForIdentifier:(id)arg1;
- (id)_applicationSpecifierForBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2;
- (void)_addCustomWebDomain:(id)arg1 specifier:(id)arg2;
- (void)_cleanUpRetainCycles;

@end
