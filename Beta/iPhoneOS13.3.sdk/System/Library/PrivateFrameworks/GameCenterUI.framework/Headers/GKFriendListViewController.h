/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UISearchController;

@protocol GKFriendListViewControllerDelegate;

@interface GKFriendListViewController : UITableViewController

{
    _Bool _needsShowMoreFooter;
    id <GKFriendListViewControllerDelegate> _delegate;
    NSMutableArray *_friendPlayers;
    NSMutableArray *_recentPlayers;
    NSMutableArray *_allPlayers;
    NSArray *_friendsForDisplay;
    NSArray *_recentsForDisplay;
    NSArray *_allPlayersForDisplay;
    UISearchController *_searchController;
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) NSMutableArray *friendPlayers;
@property (retain, nonatomic) NSMutableArray *recentPlayers;
@property (retain, nonatomic) NSMutableArray *allPlayers;
@property (retain, nonatomic) NSArray *friendsForDisplay;
@property (retain, nonatomic) NSArray *recentsForDisplay;
@property (retain, nonatomic) NSArray *allPlayersForDisplay;
@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) _Bool needsShowMoreFooter;
@property (nonatomic) id <GKFriendListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)didDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)loadData;
- (void)setupSearchController;
- (void)showLoadingIndicator;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addFriends:(id)arg1;
- (void)setupNavBar;
- (_Bool)tableViewHasFooter:(long long)arg1;
- (void)loadMoreFriends;
- (id)getPlayerAtIndexPath:(id)arg1;
- (void)reportPlayerAtIndexPath:(id)arg1;
- (void)deletePlayerAtIndexPath:(id)arg1;

@end
