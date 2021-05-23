/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, SBFMobileKeyBagState;

@protocol OS_dispatch_queue;

@interface SBFMobileKeyBag : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_observerStateChangedCallbackBlocks;
    NSHashTable *_queue_observers;
    _Bool _queue_hasPasscodeSet;
    _Bool _queue_hasUnlockedSinceBoot;
    struct _MKBEvent *_mbkEvent;
}

@property (copy, nonatomic, readonly) SBFMobileKeyBagState *state;
@property (copy, nonatomic, readonly) SBFMobileKeyBagState *extendedState;
@property (nonatomic, readonly) _Bool hasBeenUnlockedSinceBoot;
@property (nonatomic, readonly) _Bool hasPasscodeSet;
@property (nonatomic, readonly) long long maxUnlockAttempts;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_queue_handleKeybagStatusChanged;
- (void)_queue_firstUnlockOccurred;
- (id)_queue_lockStateExtended:(_Bool)arg1;
- (void)_queue_setHasPasscodeIfNecessary:(id)arg1;
- (void)_queue_createStashBag:(id)arg1;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (_Bool)_queue_verifyExpectedStashState:(long long)arg1;
- (void)lockSkippingGracePeriod:(_Bool)arg1;
- (_Bool)unlockWithPasscode:(id)arg1 error:(id *)arg2;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)beginRecovery:(id)arg1 error:(id *)arg2;
- (void)waitForUnlockWithTimeout:(float)arg1;

@end
