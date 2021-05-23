/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLConnectionManager.h>

@class NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager

{
    NSSQLiteConnection *_connection;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (id)initializationConnection;
- (void)setExclusiveLockingMode:(_Bool)arg1;
- (_Bool)handleStoreRequest:(id)arg1;
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;
- (void)scheduleConnectionsBarrier:(CDUnknownBlockType)arg1;
- (_Bool)routeStoreRequest:(id)arg1;

@end
