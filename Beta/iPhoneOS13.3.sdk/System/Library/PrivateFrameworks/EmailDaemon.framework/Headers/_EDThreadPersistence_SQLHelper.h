/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection, _EDThreadPersistence_StatementCache;

@interface _EDThreadPersistence_SQLHelper : NSObject

{
    EDPersistenceDatabaseConnection *_connection;
    _EDThreadPersistence_StatementCache *_cache;
}

@property (nonatomic, readonly) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly) _EDThreadPersistence_StatementCache *cache;

- (id)initWithCache:(id)arg1;
- (int)executeUpdateSQL:(id)arg1 bindings:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (long long)executeUpsertSQL:(id)arg1 bindings:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (_Bool)executeSelectSQL:(id)arg1 bindings:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3 rowHandler:(CDUnknownBlockType)arg4;
- (_Bool)executeSQL:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (_Bool)executeSQL:(id)arg1 indexBindings:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
