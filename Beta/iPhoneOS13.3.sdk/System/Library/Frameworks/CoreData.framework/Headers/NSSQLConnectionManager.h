/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLConnectionManager : NSObject

{
    NSSQLCore *_sqlCore;
    CDUnknownBlockType _filter;
}

@property (copy, nonatomic) CDUnknownBlockType filter;

- (void)dealloc;
- (id)sqlCore;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (_Bool)willHandleStoreRequest:(id)arg1;
- (id)initializationConnection;
- (void)setExclusiveLockingMode:(_Bool)arg1;
- (_Bool)handleStoreRequest:(id)arg1;
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;
- (void)scheduleConnectionsBarrier:(CDUnknownBlockType)arg1;

@end
