/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSString;

@protocol OS_dispatch_queue;

@interface ICBaseSearchIndexerDataSource : NSObject

{
    _Bool _observingChanges;
    _Bool _needsReindexing;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableOrderedSet *_objectIDsToProcess;
    NSMutableOrderedSet *_objectIDsBeingProcessed;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableOrderedSet *objectIDsToProcess;
@property (retain, nonatomic) NSMutableOrderedSet *objectIDsBeingProcessed;
@property (nonatomic, getter=isObservingChanges) _Bool observingChanges;
@property _Bool needsReindexing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isAccountReindexedForMigration:(id)arg1;
+ (id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1;
+ (void)markAccountReindexedForMigration:(id)arg1;

- (id)init;
- (id)persistentStoreCoordinator;
- (void)loadState;
- (void)saveState;
- (id)dataSourceIdentifier;
- (void)startObservingChanges;
- (id)newManagedObjectContext;
- (void)stageForReindexing;
- (void)stopObservingChanges;
- (void)clearObjectIDsToProcess;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
- (id)searchableItemForObject:(id)arg1;
- (void)contextWillSave:(id)arg1;
- (void)resetContextObservers;
- (_Bool)shouldIndexableObjectExistInIndexing:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrder;
- (id)indexableObjectIDsWithURIs:(id)arg1;
- (id)stateDefaultsKey;
- (void)clearObjectIDsToIgnoreAndStageForReindexing;
- (unsigned long long)indexingPriority;
- (id)objectIDsNeedingIndexing;
- (id)objectIDURIsToBeDeleted;
- (id)searchableItemsForObjectIDs:(id)arg1;
- (void)searchIndexerWillIndexObjectIDs:(id)arg1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
- (void)stageObjectIDURIsForIndexing:(id)arg1;
- (id)objectIDsFromSearchableItems:(id)arg1;

@end
