/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class FPXDomainContext, FPXIndexState, FPXSpotlightIndexer, NSArray, NSData, NSError;

__attribute__((visibility("hidden")))
@interface FPXFetchOneBatchFromWorkingSetOperation

{
    FPXSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    FPXIndexState *_indexState;
    _Bool _hasMore;
    NSArray *_updatedItems;
    NSArray *_deletedItemIDs;
    NSData *_nextAnchor;
    NSError *_error;
}

@property (retain, nonatomic) NSArray *updatedItems;
@property (retain, nonatomic) NSArray *deletedItemIDs;
@property (retain, nonatomic) NSData *nextAnchor;
@property (nonatomic) _Bool hasMore;
@property (retain, nonatomic) NSError *error;

- (void)main;
- (id)initWithIndexer:(id)arg1 queue:(id)arg2;
- (void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(_Bool)arg3 state:(id)arg4 error:(id)arg5;
- (id)observerItemID;
- (void)_indexOnePageFromPage:(id)arg1;
- (void)_indexOneChangesBatchFromChangeToken:(id)arg1;

@end
