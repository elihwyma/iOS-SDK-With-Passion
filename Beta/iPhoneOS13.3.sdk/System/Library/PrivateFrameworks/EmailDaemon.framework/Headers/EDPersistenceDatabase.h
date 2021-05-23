/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, EFSQLPropertyMapper, EFSQLSchema, NSString;

@interface EDPersistenceDatabase : NSObject

{
    _Bool _setupIsComplete;
    EFSQLSchema *_schema;
    EFSQLSchema *_protectedSchema;
    EFSQLPropertyMapper *_propertyMapper;
    EDPersistenceDatabaseConnectionPool *_connectionPool;
    EDProtectedDatabasePersistence *_protectedDatabasePersistence;
    NSString *_basePath;
    NSString *_databaseName;
    NSString *_fullPath;
}

@property (nonatomic, readonly) EDPersistenceDatabaseConnectionPool *connectionPool;
@property (nonatomic, readonly) EDProtectedDatabasePersistence *protectedDatabasePersistence;
@property (nonatomic, readonly) NSString *basePath;
@property (nonatomic, readonly) NSString *databaseName;
@property (nonatomic, readonly) NSString *fullPath;
@property (nonatomic, readonly) _Bool databaseIsCorrupt;
@property (nonatomic, readonly) _Bool enforceDataProtection;
@property _Bool setupIsComplete;
@property (nonatomic, readonly) _Bool isNestedDatabaseCall;
@property (nonatomic, readonly) _Bool writersAreWaiting;
@property (nonatomic, readonly) EFSQLSchema *schema;
@property (nonatomic, readonly) EFSQLSchema *protectedSchema;
@property (nonatomic, readonly) EFSQLPropertyMapper *propertyMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void)reconcileJournalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)performWriteBlock:(CDUnknownBlockType)arg1;
- (_Bool)performReadBlock:(CDUnknownBlockType)arg1;
- (id)openConnectionIsWriter:(_Bool)arg1;
- (void)closeAllConnections;
- (void)scheduleRecurringActivity;
- (void)performDatabaseWorkInBlockWithHighPriority:(CDUnknownBlockType)arg1;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (id)checkOutConnectionIsWriter:(_Bool)arg1;
- (void)checkInConnection:(id)arg1;
- (id)fileProtectionForDatabaseType:(long long)arg1;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2;
- (_Bool)performBlock:(CDUnknownBlockType)arg1 isWriter:(_Bool)arg2 useTransaction:(_Bool)arg3;
- (_Bool)performDatabaseSetupUsingTransaction:(_Bool)arg1 block:(CDUnknownBlockType)arg2;

@end
