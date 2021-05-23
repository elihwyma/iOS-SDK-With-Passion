/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSHashTable;

@interface STKIncomingCallUIStateMonitor : NSObject

{
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observersLock_observers;
    BSTimer *_fallbackTimer;
    struct os_unfair_lock_s _lock;
    _Bool _lock_showingIncomingCallUI;
    int _inCallAlertVisibleNotifyToken;
    _Bool _isShowingIncomingCallUI;
}

@property (nonatomic) _Bool isShowingIncomingCallUI;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_refreshState;
- (void)_setIncomingCallUIState:(_Bool)arg1 forReason:(id)arg2;
- (double)_fallbackTimerDuration;

@end
