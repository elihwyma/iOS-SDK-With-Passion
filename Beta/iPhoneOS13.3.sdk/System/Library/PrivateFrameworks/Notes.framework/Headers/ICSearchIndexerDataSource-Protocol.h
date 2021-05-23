/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol ICSearchIndexerDataSource <Swift>

- (MISSING_TYPE *)persistentStoreCoordinator;
- (MISSING_TYPE *)dataSourceIdentifier;
- (MISSING_TYPE *)isObservingChanges;
- (MISSING_TYPE *)startObservingChanges;
- (MISSING_TYPE *)newManagedObjectContext;
- (MISSING_TYPE *)stageForReindexing;
- (MISSING_TYPE *)stopObservingChanges;
- (MISSING_TYPE *)needsReindexing;
- (MISSING_TYPE *)clearObjectIDsToProcess;
- (MISSING_TYPE *)objectForSearchableItem:context: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)objectForManagedObjectIDURI:context: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)allIndexableObjectIDsInReversedReindexingOrder;
- (MISSING_TYPE *)indexableObjectIDsWithURIs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)indexingPriority;
- (MISSING_TYPE *)objectIDsNeedingIndexing;
- (MISSING_TYPE *)objectIDURIsToBeDeleted;
- (MISSING_TYPE *)searchableItemsForObjectIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)searchIndexerWillIndexObjectIDs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)searchIndexerDidFinishIndexingObjectIDs:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)stageObjectIDURIsForIndexing: /* Error: Ran out of types for this method. */;

@end
