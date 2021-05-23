/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBarsController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXActionPerformer, PXAssetActionManager, PXBarAppearance, PXCuratedLibraryViewModel, UILabel;

@interface PXCuratedLibraryBarsController : PXBarsController <Swift>

{
    PXAssetActionManager *_assetActionManager;
    UILabel *_selectModeCaptionLabel;
    PXCuratedLibraryViewModel *_viewModel;
    PXActionPerformer *_activeActionPerformer;
    PXActionPerformer *_lastActionPerformer;
}

@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXBarAppearance *barAppearance;
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager;
@property (nonatomic, readonly) UILabel *selectModeCaptionLabel;
@property (retain, nonatomic) PXActionPerformer *activeActionPerformer;
@property (retain, nonatomic) PXActionPerformer *lastActionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)updateBars;
- (id)leftBarButtonItemIdentifiers;
- (id)rightBarButtonItemIdentifiers;
- (id)toolbarItemIdentifiers;
- (id)barButtonItemForIdentifier:(id)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCuratedLibraryViewController:(id)arg1 viewModel:(id)arg2;
- (id)createAssetActionManagerForAssetReference:(id)arg1;
- (void)_updateSelectModeCaptionLabel;
- (id)curatedLibraryViewController;
- (id)_identifierForActionType:(id)arg1;
- (void)_applyZoomLevel:(long long)arg1;
- (void)handleSelectBarButtonItem:(id)arg1;
- (void)handleCancelBarButtonItem:(id)arg1;
- (void)_invalidateToolbarItems;
- (id)_defaultToolbarItemIdentifiers;

@end
