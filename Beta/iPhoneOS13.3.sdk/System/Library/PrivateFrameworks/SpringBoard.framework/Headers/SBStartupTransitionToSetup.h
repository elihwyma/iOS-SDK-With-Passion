/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBApplicationController, SBBulletinWindowController, SBFUserAuthenticationController, SBInitialRestartState, SBLockScreenManager, SBSetupManager;

@interface SBStartupTransitionToSetup : SBBaseStartupTransition

{
    SBBulletinWindowController *_bulletinWindowController;
    SBFUserAuthenticationController *_authController;
    SBApplicationController *_appController;
    SBSetupManager *_setupManager;
    SBLockScreenManager *_lockScreenManager;
    SBInitialRestartState *_initialRestartState;
}

- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2 initialRestartState:(id)arg3;
- (void)_activateSetupWithCompletion:(CDUnknownBlockType)arg1 underLock:(_Bool)arg2 fromSnapshot:(_Bool)arg3;

@end
