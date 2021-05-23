/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDisableActiveInterfaceOrientationChangeAssertion;

@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction

{
    id <SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void)dealloc;
- (void)_begin;
- (void)_didComplete;
- (id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)_activateLockScreen;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;

@end
