/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLCoreDispatchManager : NSObject

{
    NSSQLCore *_sqlCore;
    NSMutableArray *_connectionManagers;
}

- (void)dealloc;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (void)setExclusiveLockingMode:(_Bool)arg1;
- (void)scheduleBarrierBlock:(CDUnknownBlockType)arg1;
- (_Bool)routeStoreRequest:(id)arg1;

@end
