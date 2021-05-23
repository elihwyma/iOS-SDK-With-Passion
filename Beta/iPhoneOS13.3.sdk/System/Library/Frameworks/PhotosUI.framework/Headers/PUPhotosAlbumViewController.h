/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSObject, NSString, PHAssetCollection, PHFetchResult, PUPhotosAlbumViewControllerSpec, PUPhotosPickerViewController, PXEditableNavigationTitleView;

@protocol PLAlbumProtocol;

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <Swift>

{
    struct {
        _Bool sectionHeadersEnabled;
    } _needsUpdateFlags;
    PUPhotosPickerViewController *_activePhotosPickerViewController;
    _Bool __isCountingAssetTypes;
    _Bool __hasAccurateCounts;
    PHAssetCollection *_assetCollection;
    struct NSObject *_album;
    PUPhotosAlbumViewControllerSpec *__albumSpec;
    PXEditableNavigationTitleView *_editableTitleView;
}

@property (nonatomic, setter=_setCountingAssetTypes:) _Bool _isCountingAssetTypes;
@property (nonatomic, setter=_setHasAccurateCounts:) _Bool _hasAccurateCounts;
@property (retain, nonatomic, setter=_setAlbumSpec:) PUPhotosAlbumViewControllerSpec *_albumSpec;
@property (nonatomic, readonly) PXEditableNavigationTitleView *editableTitleView;
@property (nonatomic, readonly) _Bool shouldShowSectionHeaders;
@property (nonatomic, readonly) NSString *globalFooterSubtitle;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *assetCollectionAssets;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *album;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)_collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (double)globalHeaderHeight;
- (_Bool)isCameraRoll;
- (void)_setNeedsUpdate;
- (void)setSessionInfo:(id)arg1;
- (void)editableNavigationTitleViewDidEndEditing:(id)arg1;
- (id)editableNavigationTitleView:(id)arg1 validateNewText:(id)arg2;
- (void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2;
- (_Bool)canDragOut;
- (_Bool)canDragIn;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAssetCollection:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (id)initWithSpec:(id)arg1;
- (id)newGridLayout;
- (void)didTapHeaderView:(id)arg1;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (_Bool)updateSpec;
- (void)_ensureEditableTitleView;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)setAlbum:(struct NSObject *)arg1 existingFetchResult:(id)arg2;
- (_Bool)wantsGlobalFooter;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (long long)cellFillMode;
- (long long)oneUpPresentationOrigin;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(_Bool *)arg2 locations:(id *)arg3 title:(id *)arg4 startDate:(id *)arg5 endDate:(id *)arg6;
- (id)initWithAlbumSpec:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject *)arg1;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (id)localizedTitleForAssets:(id)arg1;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (_Bool)canBeginStackCollapseTransition;
- (void)_invalideSectionHeaders;
- (void)_updateSectionHeadersIfNeeded;
- (void)updateLayoutMetrics;
- (id)_globalHeaderTitle;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureGlobalFooterView:(id)arg1;
- (void)updateTitle;
- (struct CGPoint)contentOffsetForPreheating;
- (_Bool)isTrashBinViewController;
- (_Bool)allowSelectAllButton;
- (unsigned long long)userEventSourceType;
- (unsigned long long)additionalOneUpViewControllerOptions;
- (void)_countAssetTypesIfNeeded;
- (void)setupScrubber;
- (void)handleAddFromAction;
- (_Bool)canHandleDropSession:(id)arg1;
- (void)_performAddDropWithSession:(id)arg1;
- (void)_performMoveDropWithCoordinator:(id)arg1;

@end
