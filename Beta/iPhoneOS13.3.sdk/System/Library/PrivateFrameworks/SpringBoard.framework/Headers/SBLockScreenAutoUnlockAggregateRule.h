/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAutoUnlockComposableRule.h>

@class SBFUserAuthenticationController, SBSyncController;

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule

{
    SBFUserAuthenticationController *_userAuthenticationController;
    SBSyncController *_syncController;
}

@property (retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController;
@property (nonatomic, readonly) SBFUserAuthenticationController *userAuthenticationController;

- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (id)_initWithUserAuthenticationController:(id)arg1 syncController:(id)arg2;
- (id)initWithUserAuthenticationController:(id)arg1;

@end
