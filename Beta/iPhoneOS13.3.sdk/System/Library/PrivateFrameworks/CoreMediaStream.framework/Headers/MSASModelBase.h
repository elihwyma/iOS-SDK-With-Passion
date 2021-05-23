/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface MSASModelBase : NSObject

{
    _Bool _dbWasRecreated;
    struct sqlite3 *_db;
    NSString *_personID;
    struct __CFDictionary *_statements;
    NSObject<OS_dispatch_queue> *_statementQueue;
    NSObject<OS_dispatch_queue> *_dbQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue;
@property (nonatomic) struct __CFDictionary *statements;
@property (nonatomic, readonly) struct sqlite3 *dbQueueDB;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) _Bool dbWasRecreated;

- (void)beginTransaction;
- (void)endTransaction;
- (struct sqlite3 *)db;
- (void)shutDownForDestruction:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)persistentObjectForKey:(id)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 currentVersion:(int)arg3;
- (void)dbQueueInitializeDatabasePath:(id)arg1 currentVersion:(int)arg2;
- (struct sqlite3_stmt *)statementForString:(id)arg1;
- (id)persistentStringForKey:(id)arg1;
- (void)setPersistentString:(id)arg1 forKey:(id)arg2;
- (void)deletePersistentValueWithKey:(id)arg1;
- (id)dbQueuePersistentDataForKey:(id)arg1;
- (id)dbQueuePersistentStringForKey:(id)arg1;
- (id)dbQueuePersistentObjectForKey:(id)arg1;
- (void)dbQueueSetPersistentData:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentString:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)dbQueueDeletePersistentValueWithKey:(id)arg1;
- (void)dbQueueBeginTransaction;
- (void)dbQueueEndTransaction;
- (void)dbQueueRollbackTransaction;

@end
