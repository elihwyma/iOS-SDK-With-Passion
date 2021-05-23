/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PUAssetViewModel, PXUIAssetBadgeView;

__attribute__((visibility("hidden")))
@interface PUBadgeTileViewController : PUTileViewController

{
    _Bool __needsUpdateBadgeInfo;
    _Bool __needsUpdateBadgeView;
    _Bool __isOverContent;
    _Bool __shouldAnimateNextBadgeViewUpdate;
    PUAssetViewModel *_assetViewModel;
    PXUIAssetBadgeView *__badgeView;
    double __contentWidth;
    struct PXAssetBadgeInfo __badgeInfo;
}

@property (nonatomic, setter=_setNeedsUpdateBadgeInfo:) _Bool _needsUpdateBadgeInfo;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) _Bool _needsUpdateBadgeView;
@property (nonatomic, setter=_setBadgeInfo:) struct PXAssetBadgeInfo _badgeInfo;
@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, setter=_setOverContent:) _Bool _isOverContent;
@property (nonatomic, setter=_setContentWidth:) double _contentWidth;
@property (nonatomic, setter=_setShouldAnimateNextBadgeViewUpdate:) _Bool _shouldAnimateNextBadgeViewUpdate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo)arg2 isOverContent:(_Bool)arg3 contentWidth:(double)arg4 animated:(_Bool)arg5;
+ (struct CGSize)badgeTileSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2;
+ (struct CGSize)_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo)arg1 contentWidth:(double)arg2;
+ (id)badgeSizeCacheKeyValueFromBadgeInfo:(struct PXAssetBadgeInfo)arg1 contentWidth:(double)arg2;

- (void)prepareForReuse;
- (id)loadView;
- (void)viewDidLoad;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_invalidateBadgeInfo;
- (void)_updateBadgeInfoIfNeeded;
- (void)toggleOverCaptureBadgeAppearance;

@end
