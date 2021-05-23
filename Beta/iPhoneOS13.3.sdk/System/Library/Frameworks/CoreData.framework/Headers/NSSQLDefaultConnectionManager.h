/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLConnectionManager.h>

@class NSArray, NSMutableArray, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager

{
    NSMutableArray *_availableConnections;
    NSArray *_allConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    int _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (void)setExclusiveLockingMode:(_Bool)arg1;
- (_Bool)handleStoreRequest:(id)arg1;
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;
- (void)scheduleConnectionsBarrier:(CDUnknownBlockType)arg1;
- (void)_initializeConnectionsWithSeed:(id)arg1;
- (id)_checkoutConnectionOfType:(unsigned long long)arg1;
- (void)_checkinConnection:(id)arg1;

@end
