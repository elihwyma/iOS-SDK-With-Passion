/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, SBFMutableMobileKeyBagState;

@protocol OS_dispatch_queue;

@interface SBFShamMobileKeyBag : NSObject

{
    float _timeScaleFactor;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_queue_correctPasscode;
    SBFMutableMobileKeyBagState *_queue_state;
    unsigned long long _queue_escrowState;
    float _queue_escrowCountTotal;
    float _queue_escrowCountDelta;
    NSData *_queue_trialPasscode;
}

+ (id)shamKeyBagWithRecoveryRequired:(_Bool)arg1 correctPasscode:(id)arg2;
+ (id)shamKeyBagWithRecoveryRequired:(_Bool)arg1 recoveryPossible:(_Bool)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;

- (void)lock;
- (id)state;
- (id)extendedState;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)beginRecovery:(id)arg1 error:(id *)arg2;
- (void)waitForUnlockWithTimeout:(float)arg1;
- (id)initWithRecoveryRequired:(_Bool)arg1 correctPasscode:(id)arg2;
- (id)initWithRecoveryRequired:(_Bool)arg1 recoveryPossible:(_Bool)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;
- (void)_queue_initializeSecretChangeMachine:(id)arg1;
- (long long)_simplifiedLockStateForLockState:(long long)arg1;
- (void)_queue_stepSecretChangeMachine;

@end
