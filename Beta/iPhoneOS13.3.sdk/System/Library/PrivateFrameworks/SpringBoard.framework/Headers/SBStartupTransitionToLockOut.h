/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition

{
    SBLockScreenManager *_lockScreenManager;
    SBFUserAuthenticationController *_authController;
}

@property (nonatomic, readonly) SBLockScreenManager *lockScreenManager;

- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;

@end
