/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class CSSearchableIndex, FPXDomainContext, NSData, NSOperation, NSOperationQueue, NSString;

@protocol NSFileProviderEnumerator, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FPXSpotlightIndexer : NSObject

{
    NSString *_indexName;
    NSString *_domainID;
    NSString *_providerIdentifier;
    CSSearchableIndex *_index;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSOperation *_currentOperation;
    NSData *_lastIndexState;
    unsigned long long _clientState;
    _Bool _isCanceled;
    id <NSFileProviderEnumerator> _vendorEnumerator;
    NSObject<OS_dispatch_semaphore> *_clientStateSemaphore;
    _Bool _indexing;
    FPXDomainContext *_domainContext;
}

@property (weak, readonly) FPXDomainContext *domainContext;
@property (readonly) id <NSFileProviderEnumerator> vendorEnumerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSData *lastIndexState;
@property (nonatomic, getter=isIndexing) _Bool indexing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)invalidateAsync;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchCurrentIndexingAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropIndexWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpStateTo:(id)arg1;
- (void)learnNewIndexState:(id)arg1;
- (id)_fetchClientStateIfNeeded;
- (void)_indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_fetchCurrentIndexingAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropIndexInQueue:(id)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithIndexName:(id)arg1 domainID:(id)arg2 context:(id)arg3;
- (void)dropIndexAndInvalidateWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
