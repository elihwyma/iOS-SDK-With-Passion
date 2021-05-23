/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore, CNIndexClientState;

@protocol CNCSSearchableIndex, CNSpotlightIndexingLogger;

@interface CNIndexRequestHandler : NSObject

{
    _Bool _isFullSyncNeeded;
    CNContactStore *_contactStore;
    id <CNCSSearchableIndex> _index;
    id <CNSpotlightIndexingLogger> _logger;
    unsigned long long _batchSize;
    CNIndexClientState *_clientState;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) id <CNCSSearchableIndex> index;
@property (nonatomic, readonly) id <CNSpotlightIndexingLogger> logger;
@property (nonatomic, readonly) unsigned long long batchSize;
@property (nonatomic) _Bool isFullSyncNeeded;
@property (retain, nonatomic) CNIndexClientState *clientState;

- (_Bool)beginIndexBatch;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 searchableIndex:(id)arg2 logger:(id)arg3 batchSize:(unsigned long long)arg4;
- (void)_performIndexingWithForcedReindexing:(_Bool)arg1;
- (id)searchableItemsForContactIdentifiers:(id)arg1;
- (_Bool)indexSearchableItems:(id)arg1;
- (void)registerForChangeHistory;
- (id)fetchChangeHistory;
- (void)fetchAndCheckLastClientState;
- (_Bool)prepareForFullSync:(id)arg1;
- (_Bool)fullSyncContacts;
- (_Bool)deltaSyncContacts:(id)arg1;
- (void)consumeChangeHistory:(id)arg1;
- (id)fetchChangeHistoryWithError:(id *)arg1;
- (_Bool)fetchLastClientState;
- (_Bool)deleteAllSearchableItems;
- (_Bool)batchIndexUpdatingItems:(id)arg1 fullSyncOffset:(long long)arg2 fullSyncDone:(_Bool)arg3;
- (_Bool)batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2;
- (_Bool)deleteSearchableItemsWithIdentifiers:(id)arg1;
- (_Bool)endIndexBatchWithClientState;
- (_Bool)_batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2 fullSyncOffset:(id)arg3 fullSyncDone:(id)arg4;
- (id)fetchSearchableItemsIndexedByContactIdentifierWithError:(id *)arg1;
- (id)_futureForFetchLastClientState;
- (id)_futureForEndIndexBatchWithClientState:(id)arg1;
- (id)_futureForIndexSearchableItems:(id)arg1;
- (id)_futureForDeleteSearchableItemsWithIdentifiers:(id)arg1;
- (id)_futureForDeleteAllSearchableItems;
- (void)performIndexing;
- (void)reindexAllSearchableItems;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (id)verifyIndexLoggingSummary:(_Bool)arg1 error:(id *)arg2;

@end
