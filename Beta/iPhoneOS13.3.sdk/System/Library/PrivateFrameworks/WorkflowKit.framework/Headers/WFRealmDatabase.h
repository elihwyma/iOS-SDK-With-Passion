/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, RLMRealm, RLMRealmConfiguration;

@protocol OS_dispatch_queue;

@interface WFRealmDatabase : NSObject

{
    _Bool _mainThreadOnly;
    RLMRealm *_inMemoryRealm;
    RLMRealmConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (retain, nonatomic) RLMRealm *inMemoryRealm;
@property (copy, nonatomic, readonly) RLMRealmConfiguration *configuration;
@property (nonatomic, readonly) _Bool mainThreadOnly;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *fileURL;

+ (id)visibleWorkflowsInRealm:(id)arg1;
+ (void)cleanOrphanedObjectsFromRealm:(id)arg1;
+ (_Bool)wf_createDataVaultAndMigrateToItIfNeeded;

- (_Bool)isEqual:(id)arg1;
- (void)refresh;
- (id)performOperation:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)syncToken;
- (void)setSyncToken:(id)arg1;
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
- (id)initWithConfiguration:(id)arg1 mainThreadOnly:(_Bool)arg2 error:(id *)arg3;
- (void)performAsynchronousOperation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)performOperation:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (id)performRealmOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)performRealmOperationWithBlock:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (id)performRealmTransactionWithBlock:(CDUnknownBlockType)arg1 withError:(id *)arg2;
- (id)realmWithError:(id *)arg1;
- (id)objectForDescriptor:(id)arg1 inRealm:(id)arg2;
- (id)collectionForResult:(id)arg1 inRealm:(id)arg2;
- (long long)suggestedSortOrderingInRealm:(id)arg1;
- (_Bool)migrateToCoreData:(id)arg1 error:(id *)arg2;

@end
