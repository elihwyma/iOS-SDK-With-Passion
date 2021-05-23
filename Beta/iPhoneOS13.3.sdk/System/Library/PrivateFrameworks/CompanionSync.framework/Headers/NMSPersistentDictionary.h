/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString, _SYSharedServiceDB;

@protocol OS_dispatch_semaphore;

@interface NMSPersistentDictionary : NSObject

{
    Class _objectClass;
    NSString *_path;
    struct __CFString *_loggingFacility;
    NSObject<OS_dispatch_semaphore> *_lock;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3 *_db;
    struct sqlite3_stmt *_fetch;
    struct sqlite3_stmt *_insert;
    struct sqlite3_stmt *_reset;
    struct sqlite3_stmt *_remove;
    struct sqlite3_stmt *_removeAll;
    struct sqlite3_stmt *_byDate;
    struct sqlite3_stmt *_byEnqueueDate;
}

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)_prepareStatements;
- (void)_openDBForceRecreate:(_Bool)arg1;
- (void)_withDB:(CDUnknownBlockType)arg1;
- (void)_ensureDBSchema;
- (unsigned long long)_checkSchemaVersion;
- (id)_dataFromObject:(id)arg1;
- (id)_objectFromData:(id)arg1;
- (id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(struct __CFString *)arg3;
- (id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3;
- (void)resetObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateObjectsSortedByExpirationDate:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsSortedByEnqueueDate:(CDUnknownBlockType)arg1;

@end
