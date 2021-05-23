/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSMutableDictionary, NSString, PSSearchResults, UITableView;

@protocol PSSearchResultsControllerDelegate;

@interface PSSearchResultsController : UIViewController

{
    UITableView *_tableView;
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    PSSearchResults *_searchResults;
    id <PSSearchResultsControllerDelegate> _delegate;
}

@property (retain, nonatomic) PSSearchResults *searchResults;
@property (weak, nonatomic) id <PSSearchResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)_removeIconViewForSection:(id)arg1;
- (void)_updateIconViews:(_Bool)arg1;

@end
