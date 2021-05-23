/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBarsController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, PXActionPerformer, PXAssetActionManager, PXAssetCollectionActionManager, PXBarAppearance, PXExtendedTraitCollection, PXPhotoDetailsActionMenuController, PXPhotosDataSource, PXPhotosDetailsBarSpec, PXPhotosDetailsContext, PXPhotosDetailsUIViewController, PXPhotosDetailsViewModel, PXSectionedSelectionManager, UIView;

@interface PXPhotosDetailsBarsController : PXBarsController <Swift>

{
    struct {
        _Bool assetActionManager;
        _Bool assetCollectionActionManager;
    } _needsUpdateFlags;
    _Bool __showTitleView;
    _Bool _shouldAddActionButton;
    PXAssetActionManager *__assetActionManager;
    PXAssetCollectionActionManager *__assetCollectionActionManager;
    PXBarAppearance *__barAppearance;
    PXPhotosDetailsViewModel *__viewModel;
    PXSectionedSelectionManager *__selectionManager;
    PXActionPerformer *__activePerformer;
    PXActionPerformer *__lastActionPerformer;
    PXPhotoDetailsActionMenuController *__activeMenuController;
    UIView *__titleView;
    PXPhotosDetailsContext *__context;
    PXPhotosDataSource *__dataSource;
    PXExtendedTraitCollection *__extendedTraitCollection;
    NSMutableDictionary *__barButtonItemByActionType;
    NSMutableDictionary *__barButtonItemCacheByBarItemIdentifier;
}

@property (retain, nonatomic, setter=_setBarAppearance:) PXBarAppearance *_barAppearance;
@property (nonatomic, readonly) PXPhotosDetailsViewModel *_viewModel;
@property (retain, nonatomic, setter=_setSelectionManager:) PXSectionedSelectionManager *_selectionManager;
@property (nonatomic, readonly) PXAssetCollectionActionManager *_assetCollectionActionManager;
@property (nonatomic, readonly) PXAssetActionManager *_assetActionManager;
@property (retain, nonatomic, setter=_setActivePerformer:) PXActionPerformer *_activePerformer;
@property (weak, nonatomic, setter=_setLastActionPerformer:) PXActionPerformer *_lastActionPerformer;
@property (retain, nonatomic) PXPhotoDetailsActionMenuController *_activeMenuController;
@property (nonatomic, readonly) UIView *_titleView;
@property (nonatomic, setter=_setShowTitleView:) _Bool _showTitleView;
@property (nonatomic, readonly) PXPhotosDetailsContext *_context;
@property (nonatomic, readonly) PXPhotosDataSource *_dataSource;
@property (nonatomic, readonly) PXExtendedTraitCollection *_extendedTraitCollection;
@property (nonatomic, readonly) NSMutableDictionary *_barButtonItemByActionType;
@property (nonatomic, readonly) NSMutableDictionary *_barButtonItemCacheByBarItemIdentifier;
@property (nonatomic) _Bool shouldAddActionButton;
@property (retain, nonatomic) PXPhotosDetailsBarSpec *barSpec;
@property (weak, nonatomic) PXPhotosDetailsUIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)updateBars;
- (id)_assetCollection;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)actionMenu:(id)arg1 assetCollectionActionPerformer:(id)arg2 playMovieForAssetCollection:(id)arg3;
- (void)actionMenu:(id)arg1 actionPerformer:(id)arg2 didChangeState:(unsigned long long)arg3;
- (_Bool)actionMenu:(id)arg1 actionPerformer:(id)arg2 presentViewController:(id)arg3;
- (_Bool)actionMenu:(id)arg1 actionPerformer:(id)arg2 dismissViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_localizedSelectionTitle;
- (id)initWithContext:(id)arg1 viewModel:(id)arg2 extendedTraitCollection:(id)arg3;
- (void)_invalidateAssetCollectionActionManager;
- (void)_invalidateAssetActionManager;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (id)_barButtonItemsForBarItems:(id)arg1 placement:(unsigned long long)arg2;
- (id)_flexibleSpaceBarButtonItem;
- (id)_barButtonItemForBarItem:(id)arg1 placement:(unsigned long long)arg2;
- (_Bool)_shouldAddBarItemForBarItemIdentifier:(id)arg1;
- (_Bool)_shouldEnableActionWithBarItemIdentifier:(id)arg1;
- (id)createTitleView;
- (id)createAssetActionManager;
- (id)createAssetCollectionActionManager;
- (void)shouldShowTitleView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateTitleViewAlpha;
- (void)selectBarButtonItemTapped:(id)arg1;
- (void)cancelBarButtonItemTapped:(id)arg1;
- (void)doneBarButtonItemTapped:(id)arg1;
- (void)faceModeButtonItemTapped:(id)arg1;
- (void)actionMenuButtonItemTapped:(id)arg1;
- (void)removeActionButton;
- (id)_sourceBarButtonItemForActionType:(id)arg1;
- (_Bool)_dismissViewControllerIfSafeAnimated:(_Bool)arg1;

@end
