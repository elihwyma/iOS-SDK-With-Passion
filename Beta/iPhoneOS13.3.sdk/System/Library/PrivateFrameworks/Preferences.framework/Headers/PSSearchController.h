/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString, PSListController, PSSearchResultsController, UISearchBar, UISearchController;

@protocol PSSearchControllerDelegate;

@interface PSSearchController : NSObject

{
    UISearchController *_searchController;
    PSSearchResultsController *_resultsController;
    _Bool _searchEnabled;
    int _notifyToken;
    PSListController *_listController;
    id <PSSearchControllerDelegate> _delegate;
    CDUnknownBlockType _iconForSearchEntryHandler;
}

@property (copy, nonatomic) CDUnknownBlockType iconForSearchEntryHandler;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (weak, nonatomic, readonly) PSListController *listController;
@property (weak, nonatomic) id <PSSearchControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isActive;
- (void)setActive:(_Bool)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)_reloadSettings:(_Bool)arg1;
- (id)initWithListController:(id)arg1;
- (id)rootSpecifiersForSearchModel:(id)arg1;
- (Class)rootSearchControllerClassForSearchModel:(id)arg1;
- (void)searchModel:(id)arg1 updatedWithNewResults:(id)arg2 forQuery:(id)arg3;
- (void)searchModelWillBeginIndexing:(id)arg1;
- (void)searchModelDidFinishIndexing:(id)arg1;
- (void)_buildSearchUIIfNecessary;
- (_Bool)_setBoolValue:(_Bool)arg1 forIvar:(_Bool *)arg2;
- (void)_updateListControllerHeaderView:(_Bool)arg1;
- (void)_updateSearchResultsWithText:(id)arg1;
- (void)searchResultsController:(id)arg1 didSelectSearchEntry:(id)arg2;
- (_Bool)searchResultsController:(id)arg1 shouldShowSwitchForSearchEntry:(id)arg2;
- (id)searchResultsController:(id)arg1 switchActionForSearchEntry:(id)arg2;
- (id)searchResultsController:(id)arg1 iconForSearchEntry:(id)arg2;
- (void)setSearchBarVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)activateWithInitialText:(id)arg1 animated:(_Bool)arg2;
- (void)addRootSpecifiers:(id)arg1;
- (void)reloadRootSpecifiers:(id)arg1;
- (void)removeRootSpecifiers:(id)arg1;

@end
