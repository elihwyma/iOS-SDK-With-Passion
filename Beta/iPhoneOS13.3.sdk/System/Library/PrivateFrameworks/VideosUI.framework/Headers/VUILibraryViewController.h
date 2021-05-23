/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryStackViewController.h>

@class NSArray, NSDictionary, NSString, UIBarButtonItem, VUIDownloadDataSource, VUIDownloadViewController, VUILibraryBannerCollectionViewCell, VUILibraryListPopoverViewCell, VUILibraryMediaEntityShelvesViewModel, VUILibraryMenuItemViewCell, VUILibraryPopoverViewController, VUIMediaEntitiesFetchController, VUIMediaLibrary, _VUILibrarySeeAllController;

__attribute__((visibility("hidden")))
@interface VUILibraryViewController : VUILibraryStackViewController

{
    VUIDownloadViewController *_presentedDownloadViewController;
    _Bool _ppt_isLoaded;
    _Bool _appliedNavigationItem;
    _Bool _hasMenuItemFetchCompleted;
    _Bool _areLocalMediaItemsAvailable;
    _Bool _hasMediaEntitiesFetchCompleted;
    _Bool _hasDownloadFetchCompleted;
    _Bool _doesDeviceSupportHDR;
    _Bool _isIpad;
    UIBarButtonItem *_libraryBarButton;
    NSArray *_menuMediaItemEntityTypes;
    NSArray *_menuCells;
    VUILibraryMenuItemViewCell *_menuItemSizingCell;
    VUILibraryPopoverViewController *_popoverViewController;
    NSArray *_popoverDropdownCells;
    VUILibraryListPopoverViewCell *_sizingPopoverCell;
    long long _currentlySelectedPopoverCell;
    NSArray *_homeShares;
    VUIMediaLibrary *_currentHomeShareMediaLibrary;
    VUILibraryBannerCollectionViewCell *_bannerViewSizingCell;
    VUILibraryMediaEntityShelvesViewModel *_shelvesViewModel;
    NSDictionary *_shelfTypeByFetchRequestIdentifier;
    _VUILibrarySeeAllController *_currentSeeAllController;
    VUIMediaEntitiesFetchController *_rentalsUpdateFetchController;
    VUIDownloadDataSource *_downloadDataSource;
}

@property (nonatomic) _Bool appliedNavigationItem;
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton;
@property (nonatomic) _Bool hasMenuItemFetchCompleted;
@property (nonatomic) _Bool areLocalMediaItemsAvailable;
@property (retain, nonatomic) NSArray *menuMediaItemEntityTypes;
@property (retain, nonatomic) NSArray *menuCells;
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell;
@property (retain, nonatomic) VUILibraryPopoverViewController *popoverViewController;
@property (retain, nonatomic) NSArray *popoverDropdownCells;
@property (retain, nonatomic) VUILibraryListPopoverViewCell *sizingPopoverCell;
@property (nonatomic) long long currentlySelectedPopoverCell;
@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (retain, nonatomic) VUILibraryBannerCollectionViewCell *bannerViewSizingCell;
@property (retain, nonatomic) VUILibraryMediaEntityShelvesViewModel *shelvesViewModel;
@property (nonatomic) _Bool hasMediaEntitiesFetchCompleted;
@property (retain, nonatomic) NSDictionary *shelfTypeByFetchRequestIdentifier;
@property (retain, nonatomic) _VUILibrarySeeAllController *currentSeeAllController;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController;
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource;
@property (nonatomic) _Bool hasDownloadFetchCompleted;
@property (nonatomic) _Bool doesDeviceSupportHDR;
@property (nonatomic) _Bool isIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_localizedTitleForShelfType:(long long)arg1;
+ (CDUnknownBlockType)shelfTypesSortComparator;

- (void)dealloc;
- (void)start;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)_accountsChanged:(id)arg1;
- (void)_updateNavigationTitle;
- (void)_reparentNavigationItem:(id)arg1;
- (void)configureWithCollectionView:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)_deviceMediaLibrary;
- (void)_addMediaLibraryNotificationObservers;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (_Bool)vui_ppt_isLoading;
- (long long)popoverView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInPopoverView:(id)arg1;
- (id)popoverView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)popoverView:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)popoverView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)controller:(id)arg1 fetchDidCompleteWithResult:(id)arg2;
- (void)controller:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)fetchDidCompleteForMediaLibraryFetchControllerQueue:(id)arg1;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (void)seeAllButtonPressed:(id)arg1;
- (void)_deviceMediaLibraryUpdateStateDidChange:(id)arg1;
- (_Bool)_isDeviceMediaLibraryInitialUpdateInProgress;
- (void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_startMonitoringDeviceMediaLibraryInitialUpdate;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_addRentalsUpdateNotificationObserver;
- (void)_updateRentals;
- (void)_showHomeVideosIfNoRecentlyAddedContent;
- (void)_updateViewIfFetchComplete;
- (void)_startFetchControllers;
- (id)_localizedTitleForCellType:(long long)arg1;
- (void)_selectLibraryCellType:(long long)arg1 fromPopover:(_Bool)arg2;
- (id)_menuItemsAndPopoverMenuItems:(id *)arg1;
- (void)_reloadPopoverViewController;
- (void)_showContentOrNoContentView;
- (void)_configureShelfViewController:(id)arg1 withShelfType:(long long)arg2;
- (id)_popoverTitleForIndexPath:(id)arg1;
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 shelfTypeMap:(id *)arg2;
- (_Bool)_haveAllInitialFetchesCompleted;
- (void)_constructLibraryDataSourceAndUpdateActiveView;
- (_Bool)_shouldShowContentView;
- (_Bool)_shouldAutomaticallySelectHomeVideos;
- (id)_leftNavigationButtonWithTitle:(id)arg1;
- (void)_libraryPopoverPressed;
- (id)_viewControllerWithCellType:(long long)arg1 forPopover:(_Bool)arg2;
- (void)_updatePopoverStateWithCellType:(long long)arg1;
- (void)_updatePopoverSelectedItem;

@end
