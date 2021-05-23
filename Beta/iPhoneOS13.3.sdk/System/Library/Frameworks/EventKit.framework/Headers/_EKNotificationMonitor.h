/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore, EKTimedEventStorePurger, NSArray, NSDate, NSMutableArray, NSTimer, PCPersistentTimer;

@protocol OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject

{
    CDUnknownBlockType _eventStoreGetter;
    _Bool _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    double _lastChangedTimestamp;
    _Bool _changedIDsValid;
    NSMutableArray *_changedIDs;
    int _ignoreSyncTimer;
    _Bool _initialCheck;
    _Bool _shouldInstallPersistentTimer;
    _Bool _useSyncIdleTimer;
    _Bool _registerForDarwinNotifications;
    _Bool _filteredByShowsNotificationsFlag;
    _Bool _computeChangedNotificationSet;
    _Bool _automaticallyFaultNotifications;
    NSArray *_notificationReferences;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    EKTimedEventStorePurger *_eventStorePurger;
    EKEventStore *_eventStore;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) EKTimedEventStorePurger *eventStorePurger;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (nonatomic, readonly) NSArray *notificationReferences;

+ (id)logHandle;
+ (id)requestedDarwinNotifications;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(long long)arg1;
- (void)stop;
- (void)start;
- (void)_timerFired;
- (void)_syncDidStart;
- (id)_eventStore;
- (void)_eventStoreChanged;
- (void)attemptReload;
- (void)adjust;
- (id)initWithOptions:(long long)arg1 eventStore:(id)arg2;
- (void)_eventStoreChangedNotification:(id)arg1;
- (id)_initWithOptions:(long long)arg1 eventStore:(id)arg2 eventStoreGetter:(CDUnknownBlockType)arg3;
- (void)_killSyncTimer:(id)arg1;
- (void)_resetTimer;
- (void)killTimer;
- (void)attemptReloadSynchronously:(_Bool)arg1;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)arg1;
- (void)_addRemovedOrAddedObjectIDsTo:(id)arg1 oldNotifications:(id)arg2 newNotifications:(id)arg3;
- (void)_syncDidEnd:(id)arg1;
- (void)_notificationCountChangedExternally;
- (void)_alertPrefChanged;
- (void)_databaseChanged;
- (void)trackChangesInEventStore;
- (void)_syncTimerFired:(id)arg1;
- (void)_resetSyncTimer;
- (id)initWithOptions:(long long)arg1 eventStoreGetter:(CDUnknownBlockType)arg2;
- (void)handleDarwinNotification:(id)arg1;

@end
