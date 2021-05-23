/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@protocol PSSpotlightSearchResultsControllerDelegate;

@interface PSSpotlightSearchResultsController : UITableViewController

{
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    long long _deviceOrientation;
    double originalInset;
    NSArray *_results;
    id <PSSpotlightSearchResultsControllerDelegate> _delegate;
    NSMutableArray *_tableData;
}

@property (retain, nonatomic) NSMutableArray *tableData;
@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id <PSSpotlightSearchResultsControllerDelegate> delegate;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)_removeIconViewForSection:(id)arg1;
- (void)_updateIconViews:(_Bool)arg1;
- (id)_itemForIndexPath:(id)arg1;
- (double)iconWidth;
- (void)_selectIndexPath:(id)arg1;
- (void)showSelectedSearchResult;
- (void)searchQueryStarted;
- (void)searchQueryFoundItems:(id)arg1;
- (void)searchQueryCompleted;

@end
