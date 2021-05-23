/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, UIBarButtonItem, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest;

@protocol UISplitViewControllerDelegate, UISplitViewControllerImpl;

@interface UISplitViewController : UIViewController

{
    id <UISplitViewControllerImpl> _impl;
}

@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (nonatomic) float gutterWidth;
@property (nonatomic) _Bool hidesMasterViewInPortrait;
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property (nonatomic, getter=_prefersOverlayInRegularWidthPhone, setter=_setPrefersOverlayInRegularWidthPhone:) _Bool prefersOverlayInRegularWidthPhone;
@property (nonatomic, getter=_usesDeviceOverlayPreferences, setter=_setUsesDeviceOverlayPreferences:) _Bool usesDeviceOverlayPreferences;
@property (nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id <UISplitViewControllerDelegate> delegate;
@property (nonatomic) _Bool presentsWithGesture;
@property (nonatomic, readonly, getter=isCollapsed) _Bool collapsed;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) UIBarButtonItem *displayModeButtonItem;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic, readonly) double primaryColumnWidth;
@property (nonatomic) long long primaryEdge;
@property (nonatomic) long long primaryBackgroundStyle;

+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (long long)_forcedImpl;
+ (_Bool)_devicePrefersOverlayInRegularWidth;
+ (_Bool)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
+ (void)_setForcedImpl:(long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)addChildViewController:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (long long)preferredLeadingStatusBarStyle;
- (long long)preferredTrailingStatusBarStyle;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)_optsOutOfPopoverControllerHierarchyCheck;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (_Bool)_handlesCounterRotationForPresentation;
- (long long)preferredInterfaceOrientationForPresentation;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldPersistViewWhenCoding;
- (id)childViewControllerForStatusBarStyle;
- (id)_allContainedViewControllers;
- (id)_additionalViewControllersToCheckForUserActivity;
- (long long)_preferredModalPresentationStyle;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)_updateChildContentMargins;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (id)detailViewController;
- (void)removeChildViewController:(id)arg1;
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (_Bool)_isRotating;
- (id)masterViewController;
- (_Bool)_usesPanelImpl;
- (_Bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (void)_animateToRequest:(id)arg1;
- (_Bool)_isCollapsed;
- (_Bool)_layoutPrimaryOnRight;
- (void)_willBeginSnapshotSession:(id)arg1;
- (void)_didEndSnapshotSession:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (id)_primaryDimmingView;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(_Bool)arg4;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)toggleMasterVisible:(id)arg1;
- (void)_updateScrollEdgeBehaviorForDetailNavigationContoller;
- (_Bool)_shouldUseNewStatusBarBehavior;
- (void)unloadViewForced:(_Bool)arg1;
- (double)_contentMarginForChildViewController:(id)arg1;
- (void)_didChangeToFirstResponder:(id)arg1;
- (id)_primaryContentResponder;
- (void)_enumerateAncestorViewControllersUntilStop:(_Bool *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)_super_sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_super_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_super_viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_super_preferredFocusedView;
- (id)_super_preferredFocusEnvironments;
- (_Bool)_super_shouldUpdateFocusInContext:(id)arg1;
- (_Bool)_shouldUseSeparateStatusBarStyles;
- (id)_super_childViewControllerForStatusBarStyle;
- (unsigned long long)_super_supportedInterfaceOrientations;
- (long long)_super_preferredInterfaceOrientationForPresentation;
- (void)_super_removeChildViewController:(id)arg1;
- (void)_super_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_super_childViewControllersToSendViewWillTransitionToSize;
- (id)_super_traitCollectionForChildEnvironment:(id)arg1;
- (_Bool)_super_disableAutomaticKeyboardBehavior;
- (id)_panelImpl;
- (void)_updateDisplayModeButtonItem;

@end
