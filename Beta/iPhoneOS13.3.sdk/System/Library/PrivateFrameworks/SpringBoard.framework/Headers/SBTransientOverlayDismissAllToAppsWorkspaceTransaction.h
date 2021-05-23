/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class NSArray, SBAutoPiPWorkspaceTransaction;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction

{
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    _Bool _isUsingSwitcherAnimation;
}

- (void)dealloc;
- (void)_begin;
- (void)_didComplete;
- (id)_setupAnimation;
- (id)initWithTransitionRequest:(id)arg1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_handleDismissOverlaysCompletion;
- (_Bool)_shouldResignActiveForAnimation;
- (void)_performDismissal;
- (_Bool)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)arg1;
- (_Bool)_shouldAnimateTransition;

@end
