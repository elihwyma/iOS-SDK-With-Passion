/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRMutableDeviceCollection, NRPBDeviceCollectionHistory, NRSwitchRecordCollection, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet;

@interface NRDeviceCollectionHistory : NSObject <Swift>

{
    NSMutableOrderedSet *_observers;
    long long _maxHistoryDepth;
    _Atomic _Bool _atomicDirty;
    struct os_unfair_lock_s _observerLock;
    struct os_unfair_lock_s _cacheLock;
    NRMutableDeviceCollection *_deviceCollection;
    unsigned long long _startIndex;
    NSMutableArray *_history;
    NRSwitchRecordCollection *_switchRecords;
    NSMutableDictionary *_historyStateCache;
    NSMutableArray *_historyStateCacheMRU;
    NSMutableArray *_historyStateCacheIndex;
}

@property (nonatomic) unsigned long long startIndex;
@property (retain, nonatomic) NSMutableArray *history;
@property (retain, nonatomic) NRSwitchRecordCollection *switchRecords;
@property (retain, nonatomic) NSMutableDictionary *historyStateCache;
@property (retain, nonatomic) NSMutableArray *historyStateCacheMRU;
@property (retain, nonatomic) NSMutableArray *historyStateCacheIndex;
@property (nonatomic, readonly) NRMutableDeviceCollection *deviceCollection;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned long long nextIndex;
@property (nonatomic, readonly) _Bool dirty;
@property (nonatomic, readonly) unsigned int switchIndex;
@property (nonatomic, readonly) NRPBDeviceCollectionHistory *protobuf;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)stateAtIndex:(unsigned long long)arg1;
- (id)applyDiff:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (void)_createIndex;
- (void)_truncateHistory;
- (id)_mostRecentStateBefore:(id)arg1;
- (void)_updateHistoryCachesWithIndex:(id)arg1;
- (unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2;
- (void)pruneStateCacheItems:(unsigned long long)arg1;
- (id)switchDeviceIDFromDiff:(id)arg1;
- (void)notifyHistoryObserversWithEntry:(id)arg1;
- (id)historyEntryAtIndex:(unsigned long long)arg1;
- (_Bool)isEqualToHistory:(id)arg1;

@end
