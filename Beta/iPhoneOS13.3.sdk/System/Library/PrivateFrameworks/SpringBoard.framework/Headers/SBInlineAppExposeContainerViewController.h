/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSCornerRadiusConfiguration, NSArray, NSString, SBAsymmetricalCornerRadiusWrapperView, SBDeviceApplicationSceneViewController, SBFluidSwitcherViewController, SBHomeScreenBackdropViewBase, SBInlineAppExposeLiveContentOverlayCoordinator, SBInlineAppExposeRootSwitcherModifier, SBWallpaperEffectView, UIView;

@protocol SBInlineAppExposeContainerViewControllerDelegate;

@interface SBInlineAppExposeContainerViewController : UIViewController <Swift>

{
    NSString *_bundleIdentifier;
    _Bool _transitioningFromOverlay;
    SBAsymmetricalCornerRadiusWrapperView *_asymmetricalCornerRadiusWrapperView;
    NSArray *_appLayouts;
    SBFluidSwitcherViewController *_contentViewController;
    SBInlineAppExposeLiveContentOverlayCoordinator *_liveContentCoordinator;
    SBInlineAppExposeRootSwitcherModifier *_rootModifier;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBHomeScreenBackdropViewBase *_backdropView;
    UIView *_dimmingView;
    struct CGSize _contentReferenceSize;
    long long _contentInterfaceOrientation;
    _Bool _didPerformInitialSetup;
    _Bool _isRotating;
    _Bool _dragging;
    _Bool _overlay;
    _Bool _clipsToBounds;
    id <SBInlineAppExposeContainerViewControllerDelegate> _delegate;
    long long _layoutRole;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    unsigned long long _maskedCorners;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
}

@property (weak, nonatomic) id <SBInlineAppExposeContainerViewControllerDelegate> delegate;
@property (nonatomic) long long layoutRole;
@property (nonatomic, getter=isOverlay) _Bool overlay;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) _Bool clipsToBounds;
@property (retain, nonatomic) SBDeviceApplicationSceneViewController *deviceApplicationSceneViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isDragging) _Bool dragging;

- (void)dealloc;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)sourceView;
- (struct UIRectCornerRadii)cornerRadii;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (id)initWithBundleID:(id)arg1 layoutRole:(long long)arg2 overlay:(_Bool)arg3;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)switcherContentController:(id)arg1 setContentOrientation:(long long)arg2;
- (long long)shadowStyleForSwitcherContentController:(id)arg1;
- (void)switcherContentController:(id)arg1 setDimmingAlpha:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)switcherContentController:(id)arg1 setBackdropBlurProgress:(double)arg2 withAnimationMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)frameForInlineAppExposeItemAspectFill:(_Bool)arg1;
- (long long)sbActiveInterfaceOrientation;
- (void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3;
- (void)switcherContentController:(id)arg1 setContainerStatusBarHidden:(_Bool)arg2 animationDuration:(double)arg3;
- (_Bool)switcherContentControllerReloadsSnapshotsForActiveInterfaceOrientationChange:(id)arg1;
- (id)appLayoutsForSwitcherContentController:(id)arg1;
- (long long)backdropInterfaceStyleForContentController:(id)arg1;
- (void)switcherContentController:(id)arg1 handlePlusButtonActionForBundleIdentifier:(id)arg2;
- (void)switcherContentController:(id)arg1 setBackdropBlurType:(long long)arg2;
- (_Bool)switcherContentController:(id)arg1 shouldMorphToPiPForTransitionContext:(id)arg2;
- (id)switcherContentController:(id)arg1 transitionEventForLayoutState:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(_Bool)arg5;
- (id)switcherContentController:(id)arg1 transitionEventForContext:(id)arg2 identifier:(id)arg3 phase:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)switcherContentController:(id)arg1 performTransitionWithRequest:(id)arg2 gestureInitiated:(_Bool)arg3;
- (id)initialCornerRadiusConfiguration;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (id)initialDiffuseShadowFilters;
- (id)initialRimShadowFilters;
- (id)containerViewForBlurContentView;
- (long long)switcherInterfaceOrientationForContentController:(id)arg1;
- (id)_unfilteredAppLayoutsForBundleID:(id)arg1;
- (id)_inlineAppLayoutForDisplayItem:(id)arg1;
- (void)_addAppLayoutToFront:(id)arg1;
- (void)_insertAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3 modelMutation:(CDUnknownBlockType)arg4;
- (void)_updateContentViewControllerFrame;
- (id)_liveSceneIDsExcludingCurrentRole:(_Bool)arg1 matchingBundleIdentifier:(id)arg2 forTransitionContext:(id)arg3;
- (id)_newInlineDisplayItemFromSceneHandle:(id)arg1;
- (struct CGRect)_frameForInlineAppExposeItemAspectFill:(_Bool)arg1 referenceSize:(struct CGSize)arg2 interfaceOrientation:(long long)arg3 scale:(inout double *)arg4;
- (id)_inlineDisplayItemInLayoutState:(id)arg1;

@end
