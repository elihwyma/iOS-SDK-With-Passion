/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class UNSKeyedObservable;

@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject

{
    long long _contentProtectionState;
    _Bool _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNSKeyedObservable *_observable;
}

- (id)init;
- (void)dealloc;
- (_Bool)deviceUnlockedSinceBoot;
- (_Bool)isProtectedDataAvailable;
- (id)classDStrategy;
- (id)classCStrategy;
- (void)addContentProtectionObserver:(id)arg1;
- (long long)_queue_keyBagLockState;
- (void)_queue_adjustContentProtectionStateWithBlock:(CDUnknownBlockType)arg1;
- (long long)_queue_observedState;
- (long long)observedState;
- (id)contentProtectionStrategyForMinimumProtection:(id)arg1;
- (void)removeContentProtectionObserver:(id)arg1;

@end
