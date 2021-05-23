/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLCoreDataChangeMerger;

@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject

{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSPersistentHistoryToken *_lastToken;
    int _notifyToken;
}

- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2;
- (void)startObservingRemoteNotifications;
- (void)_inq_startObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;
- (void)_inq_stopObservingRemoteNotifications;
- (void)distributeNewTransactionsSinceLastToken;
- (id)fetchTransactionsSinceLastToken;
- (id)makeManagedObjectContext;
- (void)forceUserInterfaceReload;
- (void)distributeTransactions:(id)arg1;
- (id)localEventFromTransactions:(id)arg1;

@end
