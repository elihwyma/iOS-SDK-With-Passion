/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class BSSqliteDatabaseConnection, NSString, NSURL;

@protocol FBApplicationDataStoreRepositoryDelegate, FBApplicationDataStoreRepositoryReadingDelegate, OS_dispatch_queue;

@interface FBSqliteApplicationDataStoreRepository : NSObject

{
    NSURL *_storeURL;
    id <FBApplicationDataStoreRepositoryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BSSqliteDatabaseConnection *_dbQueue_dbConnection;
    unsigned long long _dbQueue_batchDepth;
    int _dbQueue_firstUnlockToken;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FBApplicationDataStoreRepositoryReadingDelegate> delegate;

+ (_Bool)_objectRequiresSerialization:(id)arg1;
+ (id)_generateParameterizedQuery:(id)arg1 forKeyList:(id)arg2 outBindings:(id *)arg3;
+ (id)_objectForResultRow:(id)arg1 index:(unsigned long long)arg2;

- (void)dealloc;
- (void)close;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (id)allObjectsForKeys:(id)arg1;
- (void)flushSynchronously;
- (id)applicationIdentifiersWithState;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
- (void)removeAllObjectsForApplication:(id)arg1;
- (_Bool)_isEligibleForSaving:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
- (id)keysForApplication:(id)arg1;
- (_Bool)containsKey:(id)arg1 forApplication:(id)arg2;
- (void)beginBatchedUpdate;
- (void)endBatchedUpdate;
- (id)initWithStorePath:(id)arg1;
- (void)_dbQueue_load;
- (id)_dbQueue_applicationIdentifiersWithState;
- (id)_dbQueue_keysForApplication:(id)arg1;
- (_Bool)_dbQueue_containsKey:(id)arg1 forApplication:(id)arg2;
- (id)_dbQueue_objectForKey:(id)arg1 forApplication:(id)arg2;
- (id)_dbQueue_objectsForKeys:(id)arg1;
- (_Bool)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(CDUnknownBlockType)arg3;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;
- (void)_dbQueue_performWithSavepoint:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;
- (_Bool)_dbQueue_loadDatabase;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (_Bool)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(CDUnknownBlockType)arg3 error:(out id *)arg4;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;
- (_Bool)_preserveFileAtURL:(id)arg1;
- (id)_dbQueue_openDatabase;
- (_Bool)_inAlternateSystemApp;
- (_Bool)_dbQueue_databaseIntegrityCheck;
- (_Bool)_dbQueue_tryPreserveDamagedDatabase;
- (_Bool)_dbQueue_truncateDamagedDatabase;
- (long long)_dbQueue_databaseVersion;
- (void)_dbQueue_createTables;

@end
