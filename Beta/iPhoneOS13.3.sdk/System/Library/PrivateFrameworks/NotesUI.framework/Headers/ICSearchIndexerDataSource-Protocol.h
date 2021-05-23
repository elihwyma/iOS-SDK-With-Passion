/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@protocol ICSearchIndexerDataSource <Swift>

- (unsigned short)persistentStoreCoordinator;
- (unsigned short)dataSourceIdentifier;
- (unsigned short)isObservingChanges;
- (unsigned short)startObservingChanges;
- (unsigned short)newManagedObjectContext;
- (unsigned short)stageForReindexing;
- (unsigned short)stopObservingChanges;
- (unsigned short)needsReindexing;
- (unsigned short)clearObjectIDsToProcess;
- (unsigned short)objectForSearchableItem:context: /* Error: Ran out of types for this method. */;
- (unsigned short)objectForManagedObjectIDURI:context: /* Error: Ran out of types for this method. */;
- (unsigned short)allIndexableObjectIDsInReversedReindexingOrder;
- (unsigned short)indexableObjectIDsWithURIs: /* Error: Ran out of types for this method. */;
- (unsigned short)indexingPriority;
- (unsigned short)objectIDsNeedingIndexing;
- (unsigned short)objectIDURIsToBeDeleted;
- (unsigned short)searchableItemsForObjectIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)searchIndexerWillIndexObjectIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)searchIndexerDidFinishIndexingObjectIDs:error: /* Error: Ran out of types for this method. */;
- (unsigned short)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs: /* Error: Ran out of types for this method. */;
- (unsigned short)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:error: /* Error: Ran out of types for this method. */;
- (unsigned short)stageObjectIDURIsForIndexing: /* Error: Ran out of types for this method. */;

@end
