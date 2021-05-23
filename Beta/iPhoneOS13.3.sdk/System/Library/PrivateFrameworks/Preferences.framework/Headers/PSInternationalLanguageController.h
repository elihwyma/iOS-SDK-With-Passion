/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSString, PSLanguage, PSLanguageSelector, PSLocaleSelector, UISearchBar, UITableView, UIView;

@interface PSInternationalLanguageController

{
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UIView *_contentView;
    _Bool _searchIsActive;
    PSLanguageSelector *_languageSelector;
    PSLocaleSelector *_localeSelector;
    PSLanguage *_checkedLanguage;
    NSArray *_deviceLanguages;
    NSArray *_filteredDeviceLanguages;
    NSString *_savedSearchTerm;
}

@property (retain, nonatomic) PSLanguage *checkedLanguage;
@property (retain, nonatomic) NSArray *deviceLanguages;
@property (retain, nonatomic) NSArray *filteredDeviceLanguages;
@property (retain, nonatomic) NSString *savedSearchTerm;
@property (nonatomic) _Bool searchIsActive;
@property (retain, nonatomic) PSLanguageSelector *languageSelector;
@property (retain, nonatomic) PSLocaleSelector *localeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)capitalizeLanguageNames;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadData;
- (void)cancelButtonTapped;
- (void)updateNavigationItem;
- (void)generateLanguageCells;
- (id)_mainContentView;
- (void)doneButtonTapped;
- (id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2;
- (void)reloadDataAndScrollToCheckedLanguageWithAnimation:(_Bool)arg1;

@end
