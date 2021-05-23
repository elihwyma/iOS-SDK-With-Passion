/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString, SBSLockScreenServiceConnection;

@interface SBSLockScreenService : NSObject

{
    struct os_unfair_lock_s _lock;
    SBSLockScreenServiceConnection *_lock_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)launchEmergencyDialerWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)preventPasscodeLockWithReason:(id)arg1;
- (id)preventSpuriousScreenUndimWithReason:(id)arg1;

@end
