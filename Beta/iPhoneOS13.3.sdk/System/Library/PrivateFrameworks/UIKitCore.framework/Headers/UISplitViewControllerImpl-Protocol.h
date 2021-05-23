/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString;

@protocol UISplitViewControllerDelegate;

@protocol UISplitViewControllerImpl <Swift>

@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id <UISplitViewControllerDelegate> delegate;
@property (nonatomic) _Bool presentsWithGesture;
@property (nonatomic, readonly, getter=isCollapsed) _Bool collapsed;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) long long primaryEdge;
@property (nonatomic) float gutterWidth;
@property (nonatomic) _Bool hidesMasterViewInPortrait;
@property (nonatomic) _Bool prefersOverlayInRegularWidthPhone;
@property (nonatomic) _Bool usesDeviceOverlayPreferences;
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property (nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) _Bool usesExtraWidePrimaryColumn;
@property (nonatomic) long long primaryBackgroundStyle;

- (unsigned short)encodeWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)_initWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)_commonInit;
- (unsigned short)loadView;
- (unsigned short)traitCollectionDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldUpdateFocusInContext: /* Error: Ran out of types for this method. */;
- (unsigned short)preferredFocusEnvironments;
- (unsigned short)preferredFocusedView;
- (unsigned short)willTransitionToTraitCollection:withTransitionCoordinator: /* Error: Ran out of types for this method. */;
- (unsigned short)viewWillAppear: /* Error: Ran out of types for this method. */;
- (unsigned short)viewWillDisappear: /* Error: Ran out of types for this method. */;
- (unsigned short)viewWillTransitionToSize:withTransitionCoordinator: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedInterfaceOrientations;
- (unsigned short)viewDidLayoutSubviews;
- (unsigned short)viewDidAppear: /* Error: Ran out of types for this method. */;
- (unsigned short)viewDidDisappear: /* Error: Ran out of types for this method. */;
- (unsigned short)_getRotationContentSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)_traitCollectionForChildEnvironment: /* Error: Ran out of types for this method. */;
- (unsigned short)_updateLayoutForStatusBarAndInterfaceOrientation;
- (unsigned short)preferredLeadingStatusBarStyle;
- (unsigned short)preferredTrailingStatusBarStyle;
- (unsigned short)encodeRestorableStateWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)decodeRestorableStateWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)_didUpdateFocusInContext:withAnimationCoordinator: /* Error: Ran out of types for this method. */;
- (unsigned short)_optsOutOfPopoverControllerHierarchyCheck;
- (unsigned short)_frameForChildContentContainer: /* Error: Ran out of types for this method. */;
- (unsigned short)sizeForChildContentContainer:withParentContainerSize: /* Error: Ran out of types for this method. */;
- (unsigned short)_handlesCounterRotationForPresentation;
- (unsigned short)preferredInterfaceOrientationForPresentation;
- (unsigned short)_edgeInsetsForChildViewController:insetsAreAbsolute: /* Error: Ran out of types for this method. */;
- (unsigned short)_hasPreferredInterfaceOrientationForPresentation;
- (unsigned short)shouldAutorotateToInterfaceOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)willRotateToInterfaceOrientation:duration: /* Error: Ran out of types for this method. */;
- (unsigned short)willAnimateRotationToInterfaceOrientation:duration: /* Error: Ran out of types for this method. */;
- (unsigned short)didRotateFromInterfaceOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldPersistViewWhenCoding;
- (unsigned short)childViewControllerForStatusBarStyle;
- (unsigned short)_allContainedViewControllers;
- (unsigned short)_additionalViewControllersToCheckForUserActivity;
- (unsigned short)_disableAutomaticKeyboardBehavior;
- (unsigned short)_updateChildContentMargins;
- (unsigned short)showViewController:sender: /* Error: Ran out of types for this method. */;
- (unsigned short)_childViewControllersToSendViewWillTransitionToSize;
- (unsigned short)_marginInfoForChild:leftMargin:rightMargin: /* Error: Ran out of types for this method. */;
- (unsigned short)detailViewController;
- (unsigned short)_popoverController:willChangeToVisible: /* Error: Ran out of types for this method. */;
- (unsigned short)_popoverController:didChangeFromVisible: /* Error: Ran out of types for this method. */;
- (unsigned short)_contentSizeForChildViewController:inPopoverController: /* Error: Ran out of types for this method. */;
- (unsigned short)_isRotating;
- (unsigned short)masterViewController;
- (unsigned short)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (unsigned short)_isCollapsed;
- (unsigned short)_layoutPrimaryOnRight;
- (unsigned short)initWithSplitViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)displayMode;
- (unsigned short)displayModeButtonItem;
- (unsigned short)primaryColumnWidth;
- (unsigned short)showDetailViewController:sender: /* Error: Ran out of types for this method. */;
- (unsigned short)_primaryDimmingView;
- (unsigned short)_descendantWillPresentViewController:modalSourceViewController:presentationController:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)_willShowCollapsedDetailViewController:inTargetController: /* Error: Ran out of types for this method. */;
- (unsigned short)_willBeginSnapshotSession;
- (unsigned short)_didEndSnapshotSession;
- (unsigned short)toggleMasterVisible: /* Error: Ran out of types for this method. */;
- (unsigned short)unloadViewForced: /* Error: Ran out of types for this method. */;
- (unsigned short)_contentMarginForChildViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)_didChangeToFirstResponder: /* Error: Ran out of types for this method. */;
- (unsigned short)_primaryContentResponder;
- (unsigned short)_displayModeBarButtonItemWasUsedForFirstTime: /* Error: Ran out of types for this method. */;

@end
