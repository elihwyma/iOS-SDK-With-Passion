/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class PUModalTransition, PUNavigationTransition, PUToolbarViewModel, PUViewModel, UIToolbar;

@protocol PUDisplayAsset;

@interface UIViewController (PHViewControllerChrome)

@property (nonatomic, readonly) unsigned long long ph_preferredChrome;
@property (nonatomic, readonly) long long ph_preferredChromeAnimation;
@property (nonatomic, readonly) long long pu_preferredBarStyle;
@property (nonatomic, readonly) _Bool pu_shouldActAsTabRootViewController;
@property (nonatomic, readonly) PUToolbarViewModel *pu_toolbarViewModel;
@property (nonatomic, setter=pu_debugSetTransient:) _Bool pu_debugIsTransient;
@property (retain, nonatomic, setter=pu_setModalTransition:) PUModalTransition *pu_modalTransition;
@property (retain, nonatomic, setter=pu_setNavigationTransition:) PUNavigationTransition *pu_navigationTransition;
@property (nonatomic, readonly) PUModalTransition *pu_currentInteractiveModalTransition;
@property (nonatomic, readonly) PUNavigationTransition *pu_currentInteractiveNavigationTransition;
@property (nonatomic, readonly) id <PUDisplayAsset> pu_debugCurrentAsset;
@property (nonatomic, readonly) PUViewModel *pu_debugCurrentViewModel;
@property (nonatomic, readonly) UIToolbar *pu_footerToolbar;
@property (nonatomic, readonly) _Bool pu_wantsNavigationBarVisible;
@property (nonatomic, readonly) _Bool pu_wantsToolbarVisible;
@property (nonatomic, readonly) _Bool pu_wantsTabBarVisible;
@property (nonatomic, readonly) long long pu_preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) _Bool pu_isPresenting;

+ (void)pu_copyAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_pu_ensureLocalAssets:(id)arg1 forReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)pu_currentViewControllerStack;

- (void)ph_prepareForTransition;
- (void)ph_enableChromeManagement;
- (_Bool)ph_isPreparedForTransition;
- (_Bool)pu_handleSecondTabTap;
- (_Bool)pu_scrollToInitialPositionAnimated:(_Bool)arg1;
- (id)px_sharePresentation;
- (double)px_effectiveImageModulationIntensityWithProposedValue:(double)arg1;
- (void)_ph_updateBarAppearanceAnimated:(_Bool)arg1;
- (void)ph_setNeedsChromeUpdate;
- (_Bool)ph_isTransitionOverlayView:(id)arg1;
- (_Bool)ph_viewContainsTransitionSourcePlaceholderView;
- (void)ph_loadTransitionSourcePlaceholderViewUsingFactory:(CDUnknownBlockType)arg1;
- (struct CGRect)ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1 withInfo:(id)arg2;
- (struct CGRect)ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1;
- (id)pu_navigationController;
- (void)ppt_performBlockAfterNextNavigationAnimation:(CDUnknownBlockType)arg1;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)pu_removeNavigationTransition;
- (void)pu_restoreNavigationTransition;
- (void)pu_presentViewController:(id)arg1 transition:(id)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)pu_dismissViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_pu_offersTableView;
- (void)pu_insertFooterToolbarWithItems:(id)arg1;
- (void)pu_removeFooterToolbar;
- (void)_pu_setTabBarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setToolbarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;
- (void)_pu_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (_Bool)pu_isForceTouchEnabled;
- (void)pu_setupInitialBarsVisibilityOnViewWillAppearAnimated:(_Bool)arg1;
- (void)pu_copyAssets:(id)arg1;
- (void)pu_ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1 isStatusBarHidden:(_Bool)arg2;
- (void)_pu_updateStatusBarVisibilityWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)_pu_setNavigationBarVisible:(_Bool)arg1 withAnimationSettings:(struct PUBarAnimationSettings)arg2;

@end
