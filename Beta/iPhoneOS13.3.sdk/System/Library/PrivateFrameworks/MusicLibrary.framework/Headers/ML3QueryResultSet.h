/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3Query, ML3QueryResultSet_BackingStore, NSMutableArray;

@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject

{
    ML3QueryResultSet_BackingStore *_backingStore;
    ML3Query *_query;
    long long _revision;
    long long _localRevision;
    _Bool _supportsIncrementalUpdate;
    NSMutableArray *_updateToLibraryCurrentRevisionCompletionBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fixedPriorityQueue;
}

@property (nonatomic, readonly) ML3Query *query;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly) long long localRevision;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuery:(id)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)entityLimit;
- (_Bool)updateToLibraryCurrentRevision;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
- (id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(_Bool)arg2;
- (void)_onQueueAddUpdateFinishedBlock:(CDUnknownBlockType)arg1;
- (_Bool)_updateToLibraryCurrentRevision;
- (void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(_Bool)arg1;
- (void)_loadCurrentFullResults;
- (void)_mergeChangesWithFromNewPIDs:(const vector_bbba3654 *)arg1 changedPIDs:(unordered_set_da619913 *)arg2;

@end
