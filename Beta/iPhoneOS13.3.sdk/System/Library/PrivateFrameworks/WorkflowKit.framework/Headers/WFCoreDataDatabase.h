/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer, NSString, NSURL;

@interface WFCoreDataDatabase : NSObject

{
    _Bool _transactionInProgress;
    NSPersistentContainer *_container;
    NSManagedObjectContext *_context;
}

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (nonatomic) _Bool transactionInProgress;
@property (nonatomic, readonly) NSPersistentContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *fileURL;

- (_Bool)isEqual:(id)arg1;
- (void)refresh;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)syncToken;
- (void)setSyncToken:(id)arg1;
- (id)_syncToken;
- (void)accessStorageForDescriptor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 withError:(id *)arg3;
- (void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (_Bool)deleteReference:(id)arg1 tombstone:(_Bool)arg2 error:(id *)arg3;
- (id)workflowReferenceWithName:(id)arg1;
- (id)createWorkflowWithOptions:(id)arg1 error:(id *)arg2;
- (id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id *)arg3;
- (id)conflictingReferenceForReference:(id)arg1;
- (void)setConflictingReference:(id)arg1 forReference:(id)arg2;
- (id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3;
- (void)setOutcome:(long long)arg1 forRunEvent:(id)arg2;
- (void)setTrustedToRunScripts:(_Bool)arg1 forReference:(id)arg2 onDomain:(id)arg3;
- (_Bool)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2;
- (id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg1 forReference:(id)arg2;
- (void)setPerWorkflowStateData:(id)arg1 forAccessResourceWithIdentifier:(id)arg2 forReference:(id)arg3;
- (id)accessResourceStatesForReference:(id)arg1;
- (void)deleteAllAccessResourceStateDataForReference:(id)arg1;
- (id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id *)arg3;
- (id)descriptorsForResult:(id)arg1 error:(id *)arg2;
- (_Bool)startObservingChangesForResult:(id)arg1;
- (id)sortedVisibleWorkflowsWithType:(id)arg1;
- (id)sortedVisibleWorkflows;
- (id)sortedWorkflowsIncludingTombstonesAndConflicts;
- (id)sortedVisibleWorkflowsByName;
- (id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1;
- (id)allConfiguredTriggers;
- (id)sortedRunEventsWithSource:(id)arg1;
- (id)sortedRunEventsForTriggerID:(id)arg1;
- (id)latestRunEvent;
- (void)clearTombstonesAndSyncState;
- (void)setWorkflowOrdering:(id)arg1;
- (id)referencesForWorkflowName:(id)arg1;
- (id)deletedWorkflows;
- (id)initWithStoreDescription:(id)arg1 error:(id *)arg2;
- (_Bool)saveIfNecessary:(id *)arg1;
- (id)objectForDescriptor:(id)arg1;
- (id)visiblePredicate;
- (id)objectOfClass:(Class)arg1 withIdentifier:(id)arg2 forKey:(id)arg3;

@end
