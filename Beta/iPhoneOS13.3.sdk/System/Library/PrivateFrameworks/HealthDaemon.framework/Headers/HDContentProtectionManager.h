/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface HDContentProtectionManager : NSObject

{
    _Atomic int _contentProtectionState;
    _Atomic _Bool _shouldIgnoreUnlockedState;
    _Atomic _Bool _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMapTable *_observers;
    double _beganObservingTime;
    double _lastNotificationTime;
    double _lastRecheckTime;
}

@property (nonatomic) _Bool shouldIgnoreUnlockedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isProtectedDataAvailableWithState:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)deviceUnlockedSinceBoot;
- (_Bool)isProtectedDataAvailable;
- (id)diagnosticDescription;
- (long long)observedState;
- (void)removeContentProtectionObserver:(id)arg1;
- (void)addContentProtectionObserver:(id)arg1 withQueue:(id)arg2;
- (void)recheckContentProtectionState;
- (void)setContentProtectionState:(long long)arg1;
- (id)initWithNotifications:(_Bool)arg1 initialState:(long long)arg2 unlockedSinceBoot:(_Bool)arg3;
- (long long)_keyBagLockState;
- (void)_observationQueue_adjustContentProtectionStateWithBlock:(CDUnknownBlockType)arg1;

@end
