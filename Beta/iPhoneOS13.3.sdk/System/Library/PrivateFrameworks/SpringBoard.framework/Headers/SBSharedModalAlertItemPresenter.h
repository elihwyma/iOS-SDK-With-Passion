/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAlertItem, SBBarSwipeAffordanceView, SBFWindow, SBHomeGestureArbiter, SBHomeGestureParticipant, SBModalViewControllerStack, SBSystemGestureManager;

@protocol SBFLockOutStatusProvider;

@interface SBSharedModalAlertItemPresenter : NSObject <Swift>

{
    id <SBFLockOutStatusProvider> _lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBModalViewControllerStack *_modalViewControllerStack;
    SBFWindow *_window;
}

@property (retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack;
@property (nonatomic, readonly) SBAlertItem *currentlyPresentedAlertItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissControllerBlock:(CDUnknownBlockType)arg3;
- (void)alertControllerDidDisappear:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)handleReachabilityYOffsetDidChange;
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 homeGestureArbiter:(id)arg3;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)presentAlertItem:(id)arg1 isLocked:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)arg1;
- (void)_updateBarSwipeViewWithAlertController:(id)arg1;
- (void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(_Bool)arg3;
- (void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2;

@end
