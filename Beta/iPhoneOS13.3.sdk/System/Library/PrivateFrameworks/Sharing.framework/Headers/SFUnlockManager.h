/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFUnlockManager : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_stateRequestTimer;
}

+ (id)sharedUnlockManager;

- (id)init;
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(_Bool)arg2 withPasscode:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)establishStashBagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)establishStashBagWithManifest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelStateRequestTimer;
- (id)timerWithBlock:(CDUnknownBlockType)arg1;
- (void)unlockStateForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableUnlockWithDevice:(id)arg1;

@end
