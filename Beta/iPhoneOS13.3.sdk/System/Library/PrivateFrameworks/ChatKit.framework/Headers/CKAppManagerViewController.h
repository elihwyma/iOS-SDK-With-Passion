/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKAppSearchResultsTableViewController, NSArray, NSString, UIBarButtonItem, UISearchController, UITableView;

@protocol CKAppManagerViewControllerDelegate;

@interface CKAppManagerViewController : UIViewController <Swift>

{
    UITableView *_tableView;
    UIBarButtonItem *_dismissButton;
    id <CKAppManagerViewControllerDelegate> _delegate;
    NSArray *_favoritePlugins;
    NSArray *_plugins;
    UISearchController *_searchController;
    CKAppSearchResultsTableViewController *_searchResultsController;
}

@property (weak, nonatomic) id <CKAppManagerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *favoritePlugins;
@property (retain, nonatomic) NSArray *plugins;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) CKAppSearchResultsTableViewController *searchResultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)didDismissSearchController:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)appCell:(id)arg1 wasToggledOn:(_Bool)arg2;
- (void)updateEditDoneButton;
- (id)balloonPluginManager;
- (_Bool)allowEnablingDisabledApps;
- (void)reloadPluginsImmediately;
- (_Bool)togglePluginAtIndex:(unsigned long long)arg1 enabled:(_Bool)arg2;

@end
