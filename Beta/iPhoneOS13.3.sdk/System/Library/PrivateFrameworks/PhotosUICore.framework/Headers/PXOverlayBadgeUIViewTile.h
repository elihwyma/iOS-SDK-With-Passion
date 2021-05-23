/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXAssetBadgeManager, PXImageRequester, PXUIAssetBadgeView;

@interface PXOverlayBadgeUIViewTile : UIView <Swift>

{
    struct {
        _Bool badgeView;
    } _needsUpdateFlags;
    PXAssetBadgeManager *_badgeManager;
    PXImageRequester *_imageRequester;
    unsigned long long __badgeOptions;
    PXUIAssetBadgeView *__badgeView;
}

@property (nonatomic, setter=_setBadgeOptions:) unsigned long long _badgeOptions;
@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager;
@property (nonatomic, readonly) UIView *view;

+ (void)preloadResources;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_updateBadgeViewIfNeeded;
- (void)_invalidateBadgeView;

@end
