/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SYSharedServiceDB : NSObject

{
    struct os_unfair_lock_s _lock;
    struct sqlite3 *_db;
    NSString *_name;
    struct NSMutableDictionary *_schemaSetupCallbacks;
}

@property (nonatomic, readonly, getter=_dbPath) NSString *dbPath;

+ (void)initialize;
+ (void)pairingStorePathWasReset;
+ (id)sharedInstanceForServiceName:(id)arg1;
+ (void)_releaseSharedInstanceForServiceName:(id)arg1;

- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (_Bool)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)_LOCKED_hasSchemaVersionForClient:(id)arg1;
- (long long)_LOCKED_getClientVersion:(id)arg1;
- (void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2;
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 *)arg1;
- (void)withDBRef:(CDUnknownBlockType)arg1;
- (_Bool)_ensureParentExists:(id)arg1 error:(id *)arg2;
- (_Bool)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id *)arg2;
- (void)_LOCKED_runSchemaUpdate:(CDUnknownBlockType)arg1 forClientNamed:(id)arg2;
- (_Bool)_LOCKED_ensureDBExists;
- (_Bool)_runTransactionBlock:(CDUnknownBlockType)arg1 exclusive:(_Bool)arg2;
- (void)_ensureSchemaVersionsTable;
- (long long)schemaVersionForClient:(id)arg1;
- (void)setSchemaVersion:(long long)arg1 forClient:(id)arg2;
- (void)updateSchemaForClient:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)inTransaction:(CDUnknownBlockType)arg1;
- (_Bool)inExclusiveTransaction:(CDUnknownBlockType)arg1;

@end
