/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface PLStorageCache : NSObject

{
    long long _lastEntryCacheSize;
    long long _stagingEntryCacheSize;
    NSMutableDictionary *_lastEntryCache;
    NSMutableDictionary *_stagingEntryCache;
    NSMutableDictionary *_stagingAggregateEntryCache;
    NSDate *_lastCacheFlushDate;
    NSMutableDictionary *_countWarnings;
    NSMutableDictionary *_countSafetyDrop;
}

@property (retain) NSMutableDictionary *lastEntryCache;
@property (retain) NSMutableDictionary *stagingEntryCache;
@property (retain) NSMutableDictionary *stagingAggregateEntryCache;
@property (retain, nonatomic) NSDate *lastCacheFlushDate;
@property (retain) NSMutableDictionary *countWarnings;
@property (retain) NSMutableDictionary *countSafetyDrop;
@property long long lastEntryCacheSize;
@property long long stagingEntryCacheSize;

+ (id)sharedStorageCache;
+ (void)syncAndDispatchForEntryCache:(id)arg1 forEntryKey:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (void)logSizeOfStagingEntryCache;
- (void)dumpStagingEntryCache;
- (void)logSizeOfEntryCache:(id)arg1;
- (void)dumpEntryCache:(id)arg1;
- (id)lastEntryCacheForEntryKey:(id)arg1;
- (id)stagingEntryCacheForEntryKey:(id)arg1 withID:(long long)arg2;
- (id)lastEntryCacheForEntryKey:(id)arg1 withSubEntryKey:(id)arg2;
- (void)enumerateEntryCache:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStagingEntryCacheForEntryKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)entryIDForNewEntry:(id)arg1;
- (void)insertIntoStagingEntryCache:(id)arg1;
- (void)addToLastEntryCache:(id)arg1;
- (void)addToLastEntryCacheSubKey:(id)arg1;
- (int)limitOfType:(id)arg1 forEntryKey:(id)arg2;
- (void)setNextEntryIDForEntryKey:(id)arg1 toEntryID:(long long)arg2;
- (id)getQueryForAggregateEntryKey:(id)arg1 withMatchingKeyToValue:(id)arg2;
- (id)getEntryFromDBForEntryKey:(id)arg1 withMatchingKeyToValue:(id)arg2;
- (id)matchingPairs:(id)arg1;
- (void)logSizeOfLastEntryCache;
- (void)logFullLastEntryCacheForEntryKey:(id)arg1;
- (void)logStagingEntryCacheForEntryKey:(id)arg1;
- (void)dumpLastEntryCache;
- (id)cachedEntryForEntryKey:(id)arg1 withEntryID:(long long)arg2;
- (void)clearLastEntryCacheForEntryKey:(id)arg1;
- (void)lastEntryCachePruneToDate:(id)arg1;
- (id)stagingEntryCacheIDsForEntryKey:(id)arg1;
- (long long)stagingEntryCacheSizeForEntryKey:(id)arg1;
- (id)stagingEntryCacheForEntryKey:(id)arg1;
- (id)stagingEntryCacheForEntryKey:(id)arg1 withIDLessThan:(long long)arg2;
- (id)stagingEntryCacheForEntryKey:(id)arg1 withComparisons:(id)arg2 isSingleton:(_Bool)arg3;
- (long long)addToStagingEntryCache:(id)arg1;
- (void)updateStagingEntryCacheWithEntry:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)flushStagingEntryCacheToDatabase;
- (void)enumerateStagingEntryCacheWithBlock:(CDUnknownBlockType)arg1;
- (void)flushStagingAggregateEntryCacheToDatabase;
- (void)addToStagingAggregateEntryCache:(id)arg1;

@end
