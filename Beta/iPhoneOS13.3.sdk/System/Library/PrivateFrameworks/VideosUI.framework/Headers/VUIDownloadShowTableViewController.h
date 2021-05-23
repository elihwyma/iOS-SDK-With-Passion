/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

@class NSArray, NSMutableArray, NSString, UIBarButtonItem, UITableView, VUIDownloadShowTableHeaderView, VUIMediaEntitiesFetchController, VUIMediaEntity;

__attribute__((visibility("hidden")))
@interface VUIDownloadShowTableViewController : VUILibraryFetchControllerViewController

{
    VUIMediaEntity *_showEntity;
    UITableView *_downloadEntitiesTableView;
    VUIMediaEntitiesFetchController *_fetchController;
    NSArray *_episodesGroupedBySeason;
    VUIDownloadShowTableHeaderView *_sizingHeader;
    NSMutableArray *_episodesBySeason;
    UIBarButtonItem *_rightBarButtonItem;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    NSMutableArray *_assetControllersToRemove;
}

@property (retain, nonatomic) VUIMediaEntity *showEntity;
@property (retain, nonatomic) UITableView *downloadEntitiesTableView;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *fetchController;
@property (retain, nonatomic) NSArray *episodesGroupedBySeason;
@property (retain, nonatomic) VUIDownloadShowTableHeaderView *sizingHeader;
@property (retain, nonatomic) NSMutableArray *episodesBySeason;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)_cancelPressed;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)_loadDownloadedShows;
- (void)_editToggled;
- (void)_exitEditingMode;
- (void)_popIfNeeded;
- (id)_configureAlertControllerForIndexPath:(id)arg1;
- (void)downloadCellDidRequestCancelDownload:(id)arg1;
- (id)initWithMediaEntity:(id)arg1;

@end
