/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, RLMRealmConfiguration, RLMSchema;

@interface RLMRealm : NSObject

{
    shared_ptr_130f66cc _realm;
    struct RLMSchemaInfo _info;
    struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo>> _resultsSetInfo;
    NSHashTable *_collectionEnumerators;
    _Bool _sendingNotifications;
    _Bool _dynamic;
    RLMSchema *_schema;
    NSHashTable *_notificationHandlers;
}

@property (retain, nonatomic) NSHashTable *notificationHandlers;
@property (nonatomic, readonly) struct Group *group;
@property (nonatomic, readonly) _Bool dynamic;
@property (retain, nonatomic) RLMSchema *schema;
@property (nonatomic, readonly) _Bool inWriteTransaction;
@property (nonatomic, readonly) RLMRealmConfiguration *configuration;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic) _Bool autorefresh;

+ (id)defaultRealm;
+ (id)realmWithConfiguration:(id)arg1 error:(id *)arg2;
+ (_Bool)isCoreDebug;
+ (id)realmWithURL:(id)arg1;
+ (id)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)realmWithSharedRealm:(shared_ptr_130f66cc)arg1 schema:(id)arg2;
+ (id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id *)arg2;
+ (void)resetRealmState;
+ (unsigned long long)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
+ (_Bool)performMigrationForConfiguration:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)invalidate;
- (_Bool)compact;
- (id).cxx_construct;
- (_Bool)refresh;
- (void)deleteObject:(id)arg1;
- (id)initPrivate;
- (id)allObjects:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)deleteAllObjects;
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;
- (void)beginWriteTransaction;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (id)addNotificationBlock:(CDUnknownBlockType)arg1;
- (void)verifyNotificationsAreSupported:(_Bool)arg1;
- (void)verifyThread;
- (_Bool)commitWriteTransaction:(id *)arg1;
- (_Bool)transactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)detachAllEnumerators;
- (void)cancelWriteTransaction;
- (void)addOrUpdateObject:(id)arg1;
- (id)objects:(id)arg1 where:(id)arg2 args:(char *)arg3;
- (id)objects:(id)arg1 withPredicate:(id)arg2;
- (void)sendNotifications:(id)arg1;
- (void)commitWriteTransaction;
- (_Bool)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id *)arg2;
- (id)resolveThreadSafeReference:(id)arg1;
- (void)addOrUpdateObjects:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (id)objects:(id)arg1 where:(id)arg2;
- (id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2;
- (_Bool)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (void)registerEnumerator:(id)arg1;
- (void)unregisterEnumerator:(id)arg1;

@end
