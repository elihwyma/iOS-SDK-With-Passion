/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>

@class CAShapeLayer, NSMutableArray, NSMutableDictionary, NSString, SBAppLayout, SBAppSwitcherSettings, SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, SBMedusaSettings, SBOrientationTransformWrapperView, SBSwitcherSnapshotImageView, UIView, UIViewController;

@protocol SBAppSwitcherReusableSnapshotViewDelegate;

@interface SBAppSwitcherReusableSnapshotView : SBSwitcherWallpaperPageContentView

{
    SBOrientationTransformWrapperView *_firstOrientationWrapper;
    SBOrientationTransformWrapperView *_secondOrientationWrapper;
    SBSwitcherSnapshotImageView *_firstImageView;
    SBSwitcherSnapshotImageView *_secondImageView;
    UIViewController *_containerViewController;
    id <SBAppSwitcherReusableSnapshotViewDelegate> _delegate;
    NSMutableDictionary *_snapshotViewStateByRole;
    NSMutableDictionary *_lockoutViewControllerByRole;
    CAShapeLayer *_medusaDividerLayer;
    UIView *_solidColorBackstopView;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppSwitcherSettings *_settings;
    SBMedusaSettings *_medusaSettings;
    _Bool _shouldUseBrightMaterial;
    _Bool _showingIconOverlayView;
    NSMutableArray *_deferredSnapshotCrossfadeQueue;
    _Bool _active;
    _Bool _visible;
    SBAppLayout *_appLayout;
}

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) _Bool shouldUseBrightMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) _Bool contentRequiresGroupOpacity;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isVisible) _Bool visible;

- (void)invalidate;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setShowingIconOverlayView:(_Bool)arg1;
- (void)_handleInstalledAppsChanged:(id)arg1;
- (void)didUpdateCacheEntry:(id)arg1;
- (id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutVCProvider:(id)arg3 containerViewController:(id)arg4;
- (id)_cacheEntryForRole:(long long)arg1;
- (id)_imageViewForRole:(long long)arg1;
- (void)_updateCornerRadiusIfNecessaryForSnapshotImageView:(id)arg1 cacheEntry:(id)arg2;
- (void)_updateCornerRadiusIfNecessaryForLockoutView:(id)arg1 matchingSnapshotImage:(id)arg2;
- (void)_updateContentOrientationForRole:(long long)arg1;
- (void)_setSceneHandle:(id)arg1 forRole:(long long)arg2;
- (void)_configureSnapshotImageView:(id)arg1 cacheEntry:(id)arg2;
- (void)_addAppLockoutOverlayIfNecessaryForRole:(long long)arg1;
- (void)_removeAppLockoutOverlayForRole:(long long)arg1;
- (void)_requestFreshImages;
- (struct CGRect)_frameForBackstopLayer;
- (struct CGRect)_snapshotImageFrameForCacheEntry:(id)arg1;
- (id)_orientationWrapperForRole:(long long)arg1;
- (void)_updateDivider;
- (void)_setCacheEntry:(id)arg1 forRole:(long long)arg2;
- (void)_setAnimatingTransition:(_Bool)arg1 forRole:(long long)arg2;
- (void)_updateTranslucency;
- (void)_updateToNewSnapshotImageUsingCacheEntry:(id)arg1;
- (id)_applicationForRole:(long long)arg1;
- (id)_sceneHandleForRole:(long long)arg1;
- (struct CGRect)_frameInLayoutSpaceForRole:(long long)arg1 inAppLayout:(id)arg2 inOrientation:(long long)arg3;
- (long long)_contentOrientationForSnapshotOrientation:(long long)arg1;
- (_Bool)_isAnimatingTransitionForRole:(long long)arg1;
- (void)_performDeferredSnapshotUpdatesIfNecessaryForRole:(long long)arg1;

@end
