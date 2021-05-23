/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@protocol REMXPCStorePerformer

- (unsigned short)executeFetchRequest:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchReplicaManagerForAccountID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchReplicaManagersForAccountID:bundleID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performInvocation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performSwiftInvocation:withParametersData:storages:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAccountStorages:listStorages:reminderStorages:changedKeys:replicaManagers:author:mode:synchronously:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchShareForObjectWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)createShareForObjectWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateShare:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopShare:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptShareWithMetadata:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)compressedDistributedEvaluationDataWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptCalDAVShareWithCalendarURL:acAccountID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectCalDAVShareWithCalendarURL:acAccountID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyOfInteractionWithPeople:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyOfUserInterestInSiriSuggestedReminder:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAccountsAndFetchMigrationState:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAccountWithACAccountID:restartDA:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeOrphanedAccountWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestToDeleteSyncDataWithAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestToDeleteLocalDataWithCompletion: /* Error: Ran out of types for this method. */;

@end
