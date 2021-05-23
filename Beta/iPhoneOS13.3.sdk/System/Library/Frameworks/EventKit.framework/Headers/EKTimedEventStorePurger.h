/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTimedEventStorePurger : NSObject

{
    _Bool _ignoreLowLevelDatabaseChangedNotifications;
    _Bool _internalPurgingAllowed;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _internalTimeout;
    CDUnknownBlockType _internalCreationBlock;
    CDUnknownBlockType _internalChangedBlock;
    EKEventStore *_internalStore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double internalTimeout;
@property (copy, nonatomic) CDUnknownBlockType internalCreationBlock;
@property (copy, nonatomic) CDUnknownBlockType internalChangedBlock;
@property (nonatomic) _Bool ignoreLowLevelDatabaseChangedNotifications;
@property (nonatomic) _Bool internalPurgingAllowed;
@property (retain, nonatomic) EKEventStore *internalStore;
@property (copy, nonatomic) CDUnknownBlockType creationBlock;
@property (copy, nonatomic) CDUnknownBlockType changedBlock;
@property (nonatomic) _Bool purgingAllowed;
@property (nonatomic) double timeout;

- (id)init;
- (void)dealloc;
- (id)acquireCachedEventStoreOrCreate:(_Bool)arg1;
- (void)_addPersistentNotificationObservers;
- (void)_uninstallTimer;
- (void)_removePersistentNotificationObservers;
- (void)_removeTransientEventStoreChangeObserver;
- (void)_resetIdleTimer;
- (void)_eventStoreChangedNotification:(id)arg1;
- (void)_fireChangedBlock;
- (void)_databaseChangedExternally;

@end
