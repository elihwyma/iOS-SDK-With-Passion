/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBBestAppSuggestion;

@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@protocol SBSwitcherContentViewControlling <Swift>

@property (weak, nonatomic) id <SBSwitcherContentViewControllerDelegate> delegate;
@property (weak, nonatomic) id <SBSwitcherContentViewControllerDataSource> dataSource;
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, getter=isLiveContentRasterizationDisabled) _Bool liveContentRasterizationDisabled;

- (unsigned short)isUserInteractionEnabled;
- (unsigned short)minimumHomeScreenScale;
- (unsigned short)handleGestureDidBegin: /* Error: Ran out of types for this method. */;
- (unsigned short)handleGestureDidEnd: /* Error: Ran out of types for this method. */;
- (unsigned short)animationControllerForTransitionRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)acquiredViewController:forTransientOverlayAppLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)relinquishTransientOverlayViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAcceleratedHomeButtonPressBegin;
- (unsigned short)shouldRubberbandHomeGrabberView;
- (unsigned short)noteKeyboardFocusDidChangeToSceneID: /* Error: Ran out of types for this method. */;
- (unsigned short)handleGestureDidUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotScaleForSceneHandle: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAddAppLayoutToFront:forTransitionWithContext:transitionCompleted: /* Error: Ran out of types for this method. */;
- (unsigned short)isWindowVisible;
- (unsigned short)respondToInAppStatusBarRequestedHiddenUpdateAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)isStatusBarHiddenForAppLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAnimateInsertionOfAppLayouts:atIndexes: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareAnimatedInsertionOfAppLayouts:atIndexes: /* Error: Ran out of types for this method. */;
- (unsigned short)noteModelDidMutateForInsertionOfAppLayouts:atIndexes:willAnimate: /* Error: Ran out of types for this method. */;
- (unsigned short)performAnimatedInsertionOfAppLayouts:atIndexes:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAndReturnTetheredInsertionEventWithID:phase: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAnimateRemovalOfAppLayout:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareAnimatedRemovalOfAppLayout:forReason: /* Error: Ran out of types for this method. */;
- (unsigned short)noteModelDidMutateForRemovalOfAppLayout:forReason:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)performAnimatedRemovalOfAppLayout:forReason:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchAndReturnTetheredRemovalEventWithID:phase: /* Error: Ran out of types for this method. */;
- (unsigned short)handleModifierAction: /* Error: Ran out of types for this method. */;
- (unsigned short)noteAppLayoutsDidChange;
- (unsigned short)enterAppExposeForBundleID: /* Error: Ran out of types for this method. */;

@end
