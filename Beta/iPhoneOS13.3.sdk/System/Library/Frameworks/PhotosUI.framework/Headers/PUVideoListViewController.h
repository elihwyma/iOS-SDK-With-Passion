/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUStorageManagementBaseController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSMutableArray, NSString, PHImageRequestOptions, PUOneUpPresentationHelper, PUVideoListContentUnavailableView, PXPhotoKitAssetsDataSourceManager, PXPhotosDataSource, PXPhotosDataSourceConfiguration, UIBarButtonItem, UITableView, UITableViewCell, UIViewController;

@interface PUVideoListViewController : PUStorageManagementBaseController <Swift>

{
    NSMutableArray *_selectedIndexPathForDelete;
    UIBarButtonItem *_editBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
    UIBarButtonItem *_cancelBarButtonItem;
    UITableViewCell *_videoCell;
    _Bool _needsUpdateCellConfiguration;
    _Bool __viewInSyncWithModel;
    _Bool __assetsFetchResultIsValid;
    PHImageRequestOptions *__imageRequestOptions;
    PUOneUpPresentationHelper *__oneUpPresentationHelper;
    PXPhotosDataSource *__dataSource;
    PXPhotosDataSourceConfiguration *__dataSourceManagerConfiguration;
    PXPhotoKitAssetsDataSourceManager *__photoKitDataSourceManager;
    UIViewController *__expungeActionSheet;
    UITableView *__mainTableView;
    NSIndexPath *__lastNavigatedAssetIndexPath;
    PUVideoListContentUnavailableView *__contentUnavailableView;
}

@property (retain, nonatomic, setter=_setOneUpPresentationHelper:) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *_dataSource;
@property (retain, nonatomic, setter=_setDataSourceManagerConfiguration:) PXPhotosDataSourceConfiguration *_dataSourceManagerConfiguration;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *_photoKitDataSourceManager;
@property (nonatomic, readonly) PHImageRequestOptions *_imageRequestOptions;
@property (weak, nonatomic, setter=_setExpungeActionSheet:) UIViewController *_expungeActionSheet;
@property (retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView;
@property (nonatomic, getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:) _Bool _viewInSyncWithModel;
@property (nonatomic, setter=_setAssetsFetchResultIsValid:) _Bool _assetsFetchResultIsValid;
@property (retain, nonatomic, setter=_setLastNavigatedAssetIndexPath:) NSIndexPath *_lastNavigatedAssetIndexPath;
@property (retain, nonatomic, setter=_setContentUnavailableView:) PUVideoListContentUnavailableView *_contentUnavailableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_cancelBarButtonItem;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)_needsUpdate;
- (id)_editBarButtonItem;
- (id)_deleteBarButtonItem;
- (void)deleteSelectedItems:(id)arg1;
- (void)_updateIfNeeded;
- (id)assetsInAssetCollection:(id)arg1;
- (id)assetCollectionsFetchResult;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)updateInterfaceLayoutIfNecessary;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_updateMainView;
- (void)_invalidatePreparedCellsConfiguration;
- (long long)oneUpPresentationHelper:(id)arg1 transitionTypeWithProposedTransitionType:(long long)arg2;
- (void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1;
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)_ensureOneUpPresentationHelper;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (long long)preferredAlertControllerStyleForDeletePhotosActionController:(id)arg1;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (id)photoCollectionAtIndex:(unsigned long long)arg1;
- (void)processDataSourceChange:(id)arg1;
- (void)_updateNavigationBarAnimated:(_Bool)arg1;
- (id)_videoCell;
- (void)actionPerformer:(id)arg1 excludeAssetsFromDataSource:(id)arg2;
- (void)actionPerformer:(id)arg1 stopExcludingAssetsFromDataSource:(id)arg2;
- (void)_reloadContentView;
- (void)_setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)_setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)_updateSubviewsOrderingAndVisibilityWithVideoCounts:(unsigned long long)arg1;
- (void)_installContentUnavailableView;
- (void)_installVideoListView;
- (void)_updatePreparedCellsConfiguration;
- (id)_tableViewCellContentViewAtIndexPath:(id)arg1;
- (void)selectVideoItems:(id)arg1;
- (void)_addIndexPathToDeleteSelection:(id)arg1;
- (unsigned long long)_numberOfSelectedCellsForDelete;
- (void)_removeIndexPathFromDeleteSelection:(id)arg1;
- (void)_clearAllIndexPathsForDeleteSelection;
- (void)cancelEditingMode:(id)arg1;
- (void)_deleteItemsAtSelectedIndexes:(id)arg1;
- (id)_headerViewForTableView:(id)arg1;
- (void)_configureTableView:(id)arg1;
- (id)_videoThumbnailViewForAssetAtIndexPath:(id)arg1;
- (void)_presentOneUpViewControllerForAssetAtInderxPath:(id)arg1;
- (void)_updateAssetsFetchResultIfNeeded;
- (_Bool)_shouldUpdateTableViewForDataSource:(id)arg1;
- (void)updateVideoListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(_Bool)arg3;

@end
