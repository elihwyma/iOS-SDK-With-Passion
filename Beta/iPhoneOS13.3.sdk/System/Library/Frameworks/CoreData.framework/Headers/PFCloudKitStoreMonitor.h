/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSPersistentStore, NSPersistentStoreCoordinator, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreMonitor : NSObject

{
    NSObject<OS_dispatch_group> *_monitorGroup;
    struct os_unfair_lock_s _aliveLock;
    _Bool _storeIsAlive;
    _Bool _declaredDead;
    int _retryCount;
    int _timeoutSeconds;
    NSPersistentStoreCoordinator *_monitoredCoordinator;
    NSPersistentStore *_monitoredStore;
    NSString *_storeIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *monitorGroup;
@property (weak, nonatomic, readonly) NSPersistentStoreCoordinator *monitoredCoordinator;
@property (weak, nonatomic, readonly) NSPersistentStore *monitoredStore;
@property (nonatomic, readonly) int retryCount;
@property (nonatomic, readonly) int timeoutSeconds;
@property (nonatomic, readonly) _Bool declaredDead;
@property (nonatomic, readonly) _Bool storeIsAlive;
@property (nonatomic, readonly) NSString *storeIdentifier;

- (void)dealloc;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initForStore:(id)arg1;
- (id)newBackgroundContextForMonitoredCoordinator;
- (id)retainedMonitoredCoordinator;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)declareStoreDead;
- (void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
- (id)instantiateNewBackgroundContext;

@end
