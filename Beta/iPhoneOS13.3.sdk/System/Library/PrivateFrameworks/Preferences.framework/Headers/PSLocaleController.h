/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSString, PSLocaleSelector, PSRegion, UISearchBar, UITableView, UIView;

@interface PSLocaleController

{
    UITableView *_tableView;
    UIView *_contentView;
    UISearchBar *_searchBar;
    _Bool _searchMode;
    _Bool _hideKeyboardInSearchMode;
    PSLocaleSelector *_localeSelector;
    NSArray *_filteredListContent;
    NSArray *_sections;
    NSArray *_regionsList;
    PSRegion *_currentRegion;
}

@property (retain, nonatomic) NSArray *filteredListContent;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *regionsList;
@property (retain, nonatomic) PSRegion *currentRegion;
@property (retain, nonatomic) PSLocaleSelector *localeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_mainContentView;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(_Bool)arg1;
- (void)loadRegions;
- (void)reloadSections;
- (void)updateChecked:(id)arg1;
- (id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2;

@end
