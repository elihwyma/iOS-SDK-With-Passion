/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class NSURL;

@protocol WFDatabaseBackingStore <Swift>

@property (nonatomic, readonly) NSURL *fileURL;

- (unsigned short)refresh;
- (unsigned short)performTransactionWithBlock:error: /* Error: Ran out of types for this method. */;
- (unsigned short)syncToken;
- (unsigned short)setSyncToken: /* Error: Ran out of types for this method. */;
- (unsigned short)accessStorageForDescriptor:usingBlock:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)moveReferenceFromIndex:toIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteReference:tombstone:error: /* Error: Ran out of types for this method. */;
- (unsigned short)workflowReferenceWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)createWorkflowWithOptions:error: /* Error: Ran out of types for this method. */;
- (unsigned short)duplicateReference:newName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)conflictingReferenceForReference: /* Error: Ran out of types for this method. */;
- (unsigned short)setConflictingReference:forReference: /* Error: Ran out of types for this method. */;
- (unsigned short)logRunOfWorkflow:withSource:triggerID: /* Error: Ran out of types for this method. */;
- (unsigned short)setOutcome:forRunEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)setTrustedToRunScripts:forReference:onDomain: /* Error: Ran out of types for this method. */;
- (unsigned short)isReference:allowedToRunOnDomain: /* Error: Ran out of types for this method. */;
- (unsigned short)currentPerWorkflowStateDataForAccessResourceWithIdentifier:forReference: /* Error: Ran out of types for this method. */;
- (unsigned short)setPerWorkflowStateData:forAccessResourceWithIdentifier:forReference: /* Error: Ran out of types for this method. */;
- (unsigned short)accessResourceStatesForReference: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllAccessResourceStateDataForReference: /* Error: Ran out of types for this method. */;
- (unsigned short)createTriggerWithRecord:workflow:error: /* Error: Ran out of types for this method. */;
- (unsigned short)descriptorsForResult:error: /* Error: Ran out of types for this method. */;
- (unsigned short)startObservingChangesForResult: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedVisibleWorkflowsWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedVisibleWorkflows;
- (unsigned short)sortedWorkflowsIncludingTombstonesAndConflicts;
- (unsigned short)sortedVisibleWorkflowsByName;
- (unsigned short)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)allConfiguredTriggers;
- (unsigned short)sortedRunEventsWithSource: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedRunEventsForTriggerID: /* Error: Ran out of types for this method. */;
- (unsigned short)latestRunEvent;
- (unsigned short)clearTombstonesAndSyncState;
- (unsigned short)setWorkflowOrdering: /* Error: Ran out of types for this method. */;
- (unsigned short)referencesForWorkflowName: /* Error: Ran out of types for this method. */;
- (unsigned short)deletedWorkflows;

@end
