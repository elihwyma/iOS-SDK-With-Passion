/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSZeroingWeakReference, NSHashTable;

@protocol OS_dispatch_queue;

@interface BSPowerMonitor : NSObject

{
    struct IONotificationPort *_notificationPort;
    unsigned int _notifier;
    BSZeroingWeakReference *_weakSelfWrapper;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_lock_observers;
    unsigned int _rootDomainConnect;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
