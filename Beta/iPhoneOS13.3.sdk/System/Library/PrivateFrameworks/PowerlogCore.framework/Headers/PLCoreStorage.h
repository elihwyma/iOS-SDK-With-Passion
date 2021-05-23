/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, PLCFNotificationOperatorComposition, PLKQueue, PLNSNotificationOperatorComposition, PLSQLiteConnection, PLStorageOperator, PLTimer, PLXPCResponderOperatorComposition;

@protocol OS_dispatch_queue;

@interface PLCoreStorage : NSObject

{
    _Bool _storageReady;
    _Bool _storageLocked;
    PLSQLiteConnection *_connection;
    NSString *_uuid;
    PLKQueue *_profileDefaultsKQueue;
    PLTimer *_dailyTaskTimer;
    PLTimer *_flushCachesTimer;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLCFNotificationOperatorComposition *_flushCachesCFNotification;
    PLCFNotificationOperatorComposition *_blockingFlushCachesCFNotification;
    PLCFNotificationOperatorComposition *_keybagFirstUnlockNotification;
    PLXPCResponderOperatorComposition *_safeFileResponder;
    PLXPCResponderOperatorComposition *_XPCFlushCacheResponder;
    PLXPCResponderOperatorComposition *_blPathResponder;
    PLXPCResponderOperatorComposition *_archivesResponder;
    PLXPCResponderOperatorComposition *_quarantineResponder;
    PLStorageOperator *_storageOperator;
    NSMutableSet *_safeCopyInProgress;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSMutableDictionary *_processIDCache;
}

@property (nonatomic) _Bool storageLocked;
@property (retain) PLKQueue *profileDefaultsKQueue;
@property (retain) PLTimer *dailyTaskTimer;
@property (retain) PLTimer *flushCachesTimer;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLCFNotificationOperatorComposition *flushCachesCFNotification;
@property (retain) PLCFNotificationOperatorComposition *blockingFlushCachesCFNotification;
@property (retain) PLCFNotificationOperatorComposition *keybagFirstUnlockNotification;
@property (retain) PLXPCResponderOperatorComposition *safeFileResponder;
@property (retain) PLXPCResponderOperatorComposition *XPCFlushCacheResponder;
@property (retain) PLXPCResponderOperatorComposition *blPathResponder;
@property (retain) PLXPCResponderOperatorComposition *archivesResponder;
@property (retain) PLXPCResponderOperatorComposition *quarantineResponder;
@property (retain) PLStorageOperator *storageOperator;
@property (retain) NSMutableSet *safeCopyInProgress;
@property (retain) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain) NSObject<OS_dispatch_queue> *utilityQueue;
@property (retain, nonatomic) NSMutableDictionary *processIDCache;
@property (retain) PLSQLiteConnection *connection;
@property _Bool storageReady;
@property (retain) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)logMessage:(id)arg1 fromFile:(id)arg2 fromFunction:(id)arg3 fromLineNumber:(long long)arg4;
+ (id)storageQueueNameForClass:(Class)arg1;
+ (id)additionalTables;
+ (id)storageQueueNameForEntryKey:(id)arg1;
+ (id)allOperatorTablesToTrimConditionsForTrimDate:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)willSwitchUser;
- (id)entriesForKey:(id)arg1 withComparisons:(id)arg2;
- (void)logMessage:(id)arg1 fromFile:(id)arg2 fromFunction:(id)arg3 fromLineNumber:(long long)arg4;
- (void)initOperatorDependancies;
- (id)lastEntryForKey:(id)arg1;
- (id)lastEntryForKey:(id)arg1 withFilters:(id)arg2;
- (id)processIDEntryForPid:(int)arg1;
- (void)updateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)lastEntryForKey:(id)arg1 withComparisons:(id)arg2 isSingleton:(_Bool)arg3;
- (id)lastEntryForKey:(id)arg1 withSubEntryKey:(id)arg2;
- (id)entriesForKey:(id)arg1;
- (void)blockingFlushCachesWithReason:(id)arg1;
- (id)entriesForKey:(id)arg1 withQuery:(id)arg2;
- (void)cacheProcessIDEntry:(id)arg1;
- (long long)countOfEntriesForKey:(id)arg1;
- (void)enumerateProcessIDCacheWithBlock:(CDUnknownBlockType)arg1;
- (id)lastEntriesForKey:(id)arg1 count:(long long)arg2 withFilters:(id)arg3;
- (void)flushCachesWithReason:(id)arg1;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (id)entryForKey:(id)arg1 withID:(long long)arg2;
- (id)aggregateEntriesForKey:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange)arg3;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange)arg2 withFilters:(id)arg3;
- (void)writeEntries:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)writeEntry:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)deleteEntry:(id)arg1;
- (void)deleteEntryForKey:(id)arg1 WithRowID:(long long)arg2;
- (void)deleteAllEntriesForKey:(id)arg1;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2 withFilters:(id)arg3;
- (id)entriesForKey:(id)arg1 before:(_Bool)arg2 timeInterval:(double)arg3 count:(long long)arg4 withFilters:(id)arg5;
- (void)writeAggregateEntry:(id)arg1;
- (void)dailyTasks;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (id)entriesForKey:(id)arg1 startingFromRowID:(long long)arg2 count:(long long)arg3 withFilters:(id)arg4;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange)arg2 withCountOfEntriesBefore:(long long)arg3 withCountOfEntriesAfter:(long long)arg4 withFilters:(id)arg5;
- (void)writeProportionateAggregateEntry:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)startStorage;
- (void)stopStorage;
- (void)setupStorageForOperator:(id)arg1;
- (long long)writeEntry:(id)arg1;
- (_Bool)setFileProtectionForPath:(id)arg1 withLevel:(id)arg2;
- (short)verifySchemaVersionOfTable:(id)arg1 matchesExpectedVersion:(double)arg2;
- (void)handleSchemaMismatchForTable:(id)arg1 expectedVersion:(double)arg2 schemaMatch:(short)arg3;
- (void)cleanupTmp;
- (void)removeOldPowerlogFiles;
- (void)addAggdModeKeys;
- (void)cleanupQuarantine;
- (void)setupStorageForEntryKey:(id)arg1;
- (void)setupTableName:(id)arg1 withEntryKeyConfig:(id)arg2 withKeyOrder:(id)arg3 isDynamic:(_Bool)arg4 withShouldIndexFKID:(_Bool)arg5;
- (void)setupArrayForTableName:(id)arg1 forColumnNamed:(id)arg2 withValueType:(short)arg3 withShouldIndexFKID:(_Bool)arg4;
- (long long)generalEntryCacheSizeLimit;
- (void)blockingFlushQueues:(id)arg1;
- (void)checkCacheSizeForFlush;
- (void)dispatchAsyncForEntryKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_updateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)flushCachesIfRequiredForEntryKey:(id)arg1;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)dispatchSyncForEntryKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeProcessIDCacheForPidNumber:(id)arg1;
- (void)setupCoveringIndexOnTable:(id)arg1 withColumns:(id)arg2;
- (void)setupStorageForOperatorName:(id)arg1;
- (void)setupStorageForOperatorClass:(Class)arg1;
- (void)removeStorageForEntryKey:(id)arg1;
- (long long)blockingWriteEntry:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)blockingUpdateEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deleteAllEntriesForKey:(id)arg1 beforeTimestamp:(id)arg2;
- (void)processEntriesForKey:(id)arg1 withProperties:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)firstEntryForKey:(id)arg1;
- (id)lastEntryForKey:(id)arg1 withIDLessThan:(long long)arg2;
- (void)removeProcessIDCacheForPid:(int)arg1;

@end
