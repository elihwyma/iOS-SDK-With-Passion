/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSProgress, NSString, PTUISettingsController, PXInfoUpdater, PXSettingsIndex, PXSettingsIndexer, UISearchBar;

@interface PXSettingsSearchViewController : UITableViewController

{
    PTUISettingsController *_settingsController;
    UISearchBar *_searchBar;
    PXSettingsIndexer *_indexer;
    NSProgress *_indexingProgress;
    PXSettingsIndex *_index;
    PXInfoUpdater *_resultsInfoUpdater;
    NSArray *_searchResults;
}

@property (nonatomic, readonly) UISearchBar *searchBar;
@property (retain, nonatomic) PXSettingsIndexer *indexer;
@property (retain, nonatomic) NSProgress *indexingProgress;
@property (retain, nonatomic) PXSettingsIndex *index;
@property (nonatomic, readonly) PXInfoUpdater *resultsInfoUpdater;
@property (copy, nonatomic) NSArray *searchResults;
@property (nonatomic, readonly) PTUISettingsController *settingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)initWithSettingsController:(id)arg1;
- (void)_indexerDidComplete;
- (void)_handleCancelItem:(id)arg1;

@end
