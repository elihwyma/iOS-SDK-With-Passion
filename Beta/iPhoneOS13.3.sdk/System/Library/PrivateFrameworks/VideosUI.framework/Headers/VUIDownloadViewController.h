/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

@class NSMutableArray, NSString, UIBarButtonItem, UITableView, VUIDownloadDataSource, VUIDownloadEntityTableViewCell;

__attribute__((visibility("hidden")))
@interface VUIDownloadViewController : VUILibraryFetchControllerViewController

{
    UITableView *_downloadEntitiesTableView;
    VUIDownloadDataSource *_downloadManager;
    NSMutableArray *_downloadEntities;
    VUIDownloadEntityTableViewCell *_sizingCell;
    UIBarButtonItem *_rightBarButtonItem;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    NSMutableArray *_assetControllersToRemove;
}

@property (retain, nonatomic) UITableView *downloadEntitiesTableView;
@property (retain, nonatomic) VUIDownloadDataSource *downloadManager;
@property (retain, nonatomic) NSMutableArray *downloadEntities;
@property (retain, nonatomic) VUIDownloadEntityTableViewCell *sizingCell;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)_cancelPressed;
- (id)initWithMediaLibrary:(id)arg1;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (void)_editToggled;
- (void)_exitEditingMode;
- (id)_configureAlertControllerForIndexPath:(id)arg1;
- (void)downloadCellDidRequestCancelDownload:(id)arg1;
- (void)_updateMediaEntitiesWithNewDownloads:(id)arg1;

@end
