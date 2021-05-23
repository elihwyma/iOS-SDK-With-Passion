/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSCountedSet;

@interface SBSLockScreenServiceConnection : NSObject

{
    BSServiceConnection *_connection;
    struct os_unfair_lock_s _lock;
    NSCountedSet *_lock_preventPasscodeLockReasons;
    NSCountedSet *_lock_preventSpuriousScreenUndimReasons;
}

- (id)init;
- (void)dealloc;
- (void)launchEmergencyDialerWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)preventPasscodeLockWithReason:(id)arg1;
- (id)preventSpuriousScreenUndimWithReason:(id)arg1;

@end
