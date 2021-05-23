/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetUIViewController.h>

@class NSString, PUSessionInfo, PXNavigationListDataSectionManager, UIBarButtonItem, UINavigationController;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController

{
    UIBarButtonItem *_navigationDisplayModeButtonItem;
    PXNavigationListDataSectionManager *_navigationListDataSourceManager;
    PUSessionInfo *_sessionInfo;
    UIBarButtonItem *_plusButtonItem;
}

@property (retain, nonatomic) UIBarButtonItem *plusButtonItem;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *navigationTitle;
@property (nonatomic, readonly) NSString *navigationIdentifier;
@property (retain, nonatomic) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *navigationListDataSourceManager;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateNavigationBar;
- (void)selectNavigationListItem:(id)arg1 hintIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureSectionHeader:(id)arg1;
- (long long)scrollAnimationIdentifier;
- (id)px_gridPresentation;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2;
- (_Bool)canNavigateToCollection:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleDoneButton:(id)arg1;
- (id)_navigableGadgetForCollection:(id)arg1;
- (id)_newAlbumActionWithSpec:(id)arg1;
- (id)_newSmartAlbumActionWithSpec:(id)arg1;
- (id)_newFolderActionWithSpec:(id)arg1;
- (id)_newSharedAlbumActionWithSpec:(id)arg1;
- (void)_presentNewActionAlertControllerIncludeNewFolderAction:(_Bool)arg1;
- (void)_handlePlusButton:(id)arg1;
- (void)_handlePlusButtonLongPress:(id)arg1;
- (void)_pushViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
