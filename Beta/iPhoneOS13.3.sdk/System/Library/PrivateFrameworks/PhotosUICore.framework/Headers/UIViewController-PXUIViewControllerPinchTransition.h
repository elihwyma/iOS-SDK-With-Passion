/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PXBarAppearance, PXExtendedTraitCollection, PXImageModulationManager, PXOneUpPresentation, UIToolbar;

@protocol PXUIViewControllerTransitionEndPoint;

@interface UIViewController (PXUIViewControllerPinchTransition)

@property (nonatomic, readonly) UIToolbar *px_footerToolbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PXBarAppearance *px_barAppearance;
@property (nonatomic, readonly) PXExtendedTraitCollection *px_extendedTraitCollection;
@property (nonatomic, readonly, getter=px_isVisible) _Bool px_visible;
@property (nonatomic, readonly) struct UIEdgeInsets px_safeAreaInsets;
@property (nonatomic, readonly) struct UIEdgeInsets px_layoutMargins;
@property (retain, nonatomic, setter=px_setPreviewActionMenus:) NSArray *px_previewActionMenus;
@property (nonatomic, readonly) UIViewController *px_topmostPresentedViewController;
@property (copy, nonatomic, setter=px_setSubtitle:) NSString *px_subtitle;
@property (nonatomic, readonly) UIViewController *px_previousViewControllerInNavigationController;
@property (nonatomic, readonly) UIViewController *px_nextViewControllerInNavigationController;
@property (nonatomic, readonly) PXImageModulationManager *px_imageModulationManager;
@property (nonatomic, readonly) double px_HDRFocus;
@property (nonatomic, readonly) double px_imageModulationIntensity;
@property (nonatomic, getter=px_isImageModulationEnabled, setter=px_setImageModulationEnabled:) _Bool px_imageModulationEnabled;
@property (nonatomic, readonly) double px_effectiveHDRFocus;
@property (nonatomic, readonly) double px_effectiveImageModulationIntensity;
@property (nonatomic, readonly) _Bool px_photosUICategoriesAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct UIEdgeInsets px_safeAreaInsets;
@property (nonatomic, readonly) struct UIEdgeInsets px_layoutMargins;
@property (nonatomic, readonly) struct CGSize px_referenceSize;
@property (nonatomic, readonly) _Bool px_isVisible;
@property (nonatomic, readonly) PXOneUpPresentation *px_oneUpPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool px_allowsTabSwitching;
@property (nonatomic, readonly) _Bool px_isSnapBackDestination;
@property (nonatomic, readonly) NSString *px_snapBackHistoryTitle;
@property (nonatomic, readonly) NSString *px_snapBackHistorySubtitle;
@property (retain, nonatomic, setter=px_setDefaultTransitionEndPoint:) id <PXUIViewControllerTransitionEndPoint> px_defaultTransitionEndPoint;

+ (id)px_viewControllerWithSettings:(id)arg1;
+ (id)px_viewControllerWithOutput:(CDUnknownBlockType)arg1;
+ (id)px_viewControllerWithAsynchronousOutputProducer:(CDUnknownBlockType)arg1;
+ (id)px_viewControllerWithContinuousOutputProducer:(CDUnknownBlockType)arg1;
+ (void)_px_prepareClassForNavigationBanner;
+ (void)_px_prepareClassForBarAppearance;
+ (void)px_preloadExtendedTraitCollection;
+ (void)_px_prepareClassForExtendedTraitCollection;
+ (void)_px_prepareClassForOneUpPresentation;

- (_Bool)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformPinchTransitionWithDetailViewController:(id)arg1;
- (id)_px_offersTableView;
- (void)px_insertFooterToolbarWithItems:(id)arg1;
- (void)px_removeFooterToolbar;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;
- (id)debugURLsForDiagnostics;
- (id)px_gridPresentation;
- (void)px_willTransitionBars;
- (void)px_didTransitionBars;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)px_navigateToStateAllowingTabSwitchingWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)px_canPerformCrossfadeTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformCrossfadeTransitionWithDetailViewController:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (_Bool)px_canPerformSwipeDownTransitionWithMasterViewController:(id)arg1;
- (void)_pxswizzled_navigationBanner_viewWillAppear:(_Bool)arg1;
- (void)_pxswizzled_navigationBanner_viewDidDisappear:(_Bool)arg1;
- (id)px_navigationBannerHelper;
- (void)px_enableNavigationBanner;
- (void)_px_dismiss:(id)arg1;
- (void)px_presentViewControllerInNavigationController:(id)arg1 animated:(_Bool)arg2 dimissButtonLocation:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_pxswizzled_barAppearance_viewWillAppear:(_Bool)arg1;
- (void)_pxswizzled_barAppearance_viewDidDisappear:(_Bool)arg1;
- (_Bool)_pxswizzled_barAppearance_prefersStatusBarHidden;
- (long long)_pxswizzled_barAppearance_preferredStatusBarUpdateAnimation;
- (void)px_enableBarAppearance;
- (void)_pxswizzled_viewControllerTraitCollection_didMoveToParentViewController:(id)arg1;
- (void)px_enableExtendedTraitCollection;
- (void)_pxswizzled_viewControllerTraitCollection_viewDidLoad;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillAppear:(_Bool)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillLayoutSubviews;
- (void)_pxswizzled_viewControllerTraitCollection_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_pxswizzled_viewControllerTraitCollection_traitCollectionDidChange:(id)arg1;
- (void)_pxswizzled_viewControllerTraitCollection_viewSafeAreaInsetsDidChange;
- (void)_pxswizzled_viewControllerTraitCollection_viewLayoutMarginsDidChange;
- (_Bool)px_isDescendantOfViewController:(id)arg1;
- (void)px_enumerateDescendantViewControllersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)px_presentOverTopmostPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)px_canPresentViewControllerAnimated:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillAppear:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewWillDisappear:(_Bool)arg1;
- (void)_pxswizzled_imageModulation_viewDidDisappear:(_Bool)arg1;
- (void)_px_viewAppearanceDidChange;
- (void)px_enableImageModulation;
- (_Bool)_px_windowMatchesImageModulationManager:(id)arg1;
- (void)px_setNeedsHDRFocusUpdate;
- (void)px_setNeedsImageModulationIntensityUpdate;
- (double)_px_imageModulationMixFactorWithPresentedViewController:(id)arg1;
- (_Bool)px_canPerformSwipeDownTransitionWithDetailViewController:(id)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillAppear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidAppear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewWillDisappear:(_Bool)arg1;
- (void)_pxswizzled_oneUpPresentation_viewDidDisappear:(_Bool)arg1;
- (void)px_enableOneUpPresentation;
- (void)px_enableOneUpPresentationFromViewController:(id)arg1;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (id)_nextExistingViewControllerOnRouteToDestination:(id)arg1;
- (void)_px_prepareNavigationFromViewController:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)px_splitViewController;

@end
