/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSString;

@interface NSCoreDataCoreSpotlightDelegate : NSObject

{
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    _Bool _enabled;
    _Bool _supportsPersistentHistory;
    _Bool _usesSharedCoordinatorStack;
    _Bool _usesPrivateIndex;
}

@property (nonatomic, readonly) NSManagedObjectContext *_context;

- (void)dealloc;
- (void)_invalidate;
- (id)domainIdentifier;
- (id)bundleIdentifier;
- (id)indexName;
- (id)protectionClass;
- (_Bool)usePrivateIndex;
- (id)_processedOidsForDictionary:(id)arg1;
- (id)attributeSetForObject:(id)arg1;
- (id)_searchableItemForObject:(id)arg1;
- (id)_retainedCurrentSearchableIndex;
- (void)_catchUpToCurrentTransaction;
- (void)_asyncContextBlock:(CDUnknownBlockType)arg1;
- (id)_processedOidsForSaveRequest:(id)arg1;
- (void)_updateSpotlightIndexForObjectsWithIDs:(id)arg1;
- (id)_processTransactionsStartingAt:(id)arg1;
- (void)_updateSpotlightClientStateForHistoryTracking:(id)arg1;
- (void)_reindexInstancesOf:(id)arg1 inIndex:(id)arg2;
- (void)_importObjectsUpdatedSinceTransaction:(id)arg1;
- (id)_spotlightClientStateForHistoryTracking;
- (void)_doFullReimport;
- (_Bool)_initialImportCompleted;
- (id)initForStoreWithDescription:(id)arg1 model:(id)arg2;
- (void)_updateSpotlightIndexFromSaveRequest:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)_initializePersistentStore;
- (id)_lastImportedTransaction;
- (id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;

@end
