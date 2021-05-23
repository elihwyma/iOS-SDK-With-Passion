/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAssetActionManager, PUAssetReference, PUBrowsingViewModel, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <Swift>

{
    _Bool __performingChanges;
    _Bool __needsUpdateBadgeView;
    _Bool __isOverContent;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetReference *_assetReference;
    PUAssetActionManager *_actionManager;
    PXUIAssetBadgeView *__badgeView;
}

@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) _Bool _performingChanges;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) _Bool _needsUpdateBadgeView;
@property (nonatomic, setter=_setOverContent:) _Bool _isOverContent;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (retain, nonatomic) PUAssetActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_configureBadgeView:(id)arg1 isOverContent:(_Bool)arg2 isLivePhotoDisabled:(_Bool)arg3;
+ (struct CGSize)badgeTileSize;

- (void)prepareForReuse;
- (id)loadView;
- (void)viewDidLoad;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)_disableLivePhotosSelectionManager;
- (id)_reviewActionManager;

@end
