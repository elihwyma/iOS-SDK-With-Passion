/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class CSSearchableIndex, ICSelectorDelayer, NSArray, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface ICSearchIndexer : NSObject

{
    _Bool _disabled;
    _Bool _retryOnErrors;
    _Bool _observingChanges;
    unsigned long long _maxBytesPerIndexingBatch;
    NSObject<OS_dispatch_queue> *_indexingQueue;
    NSOperationQueue *_operationQueue;
    NSDictionary *_dataSourcesByIdentifier;
    CSSearchableIndex *_searchableIndex;
    ICSelectorDelayer *_changeProcessingDelayer;
    NSMutableDictionary *_retryTimers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) NSDictionary *dataSourcesByIdentifier;
@property (retain, nonatomic) CSSearchableIndex *searchableIndex;
@property (retain, nonatomic) ICSelectorDelayer *changeProcessingDelayer;
@property (nonatomic, getter=isObservingChanges) _Bool observingChanges;
@property (retain, nonatomic) NSMutableDictionary *retryTimers;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool retryOnErrors;
@property (nonatomic) unsigned long long maxBytesPerIndexingBatch;
@property (nonatomic, readonly) NSArray *dataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedIndexer;

- (id)init;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addDataSource:(id)arg1;
- (void)removeDataSource:(id)arg1;
- (void)dataSourceDidChange:(id)arg1;
- (void)startObservingChanges;
- (void)processChanges;
- (void)stopObservingChanges;
- (id)pendingReindexingOperation;
- (void)retrySelector:(SEL)arg1;
- (void)clearRetryForSelector:(SEL)arg1;
- (void)reindexAllSearchableItemsInIndex:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishRemainingOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearObjectIDsToProcess;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 inIndex:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reindexAllSearchableItemsInIndex;
- (id)objectsDictionaryForSearchableItems:(id)arg1 inContexts:(id)arg2;
- (id)objectsForSearchableItems:(id)arg1 inContexts:(id)arg2;
- (id)dataSourceWithIdentifier:(id)arg1;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (void)performBlockOnIndexingQueue:(CDUnknownBlockType)arg1;
- (id)newContextsForAllDataSources;
- (void)reindexAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelIndexingOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)objectForManagedObjectIDURI:(id)arg1 inContexts:(id)arg2;

@end
