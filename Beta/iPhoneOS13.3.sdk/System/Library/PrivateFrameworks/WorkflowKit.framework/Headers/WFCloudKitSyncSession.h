/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase, CKRecordID, CKRecordZoneID;

@interface WFCloudKitSyncSession : NSObject

{
    CKContainer *_container;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordID *_userRecordID;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKRecordZoneID *recordZoneID;
@property (nonatomic, readonly) CKRecordID *userRecordID;

+ (void)initialize;
+ (void)setSyncEnabled:(_Bool)arg1;
+ (void)setVoiceShortcutMigrationDidSync:(_Bool)arg1;
+ (_Bool)voiceShortcutMigrationDidSync;
+ (_Bool)voiceShortcutMigrationDidRun;
+ (void)setIgnoresUserDeletedZoneErrors:(_Bool)arg1;
+ (_Bool)ignoresUserDeletedZoneErrors;
+ (id)mergePreviousOrdering:(id)arg1 incomingOrdering:(id)arg2 outgoingOrdering:(id)arg3 sendOutgoingChange:(_Bool *)arg4 saveLocalChange:(_Bool *)arg5;
+ (id)checkForConflictsBetweenIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 outgoingChanges:(id)arg3 outgoingDeletes:(id)arg4 incomingOrderedWorkflowIDs:(id)arg5 outgoingOrderedWorkflowIDs:(id)arg6 detectingDuplicateWorkflowsInDatabase:(id)arg7 outWorkflowIDsToRename:(id *)arg8 outLocalWorkflowsToDelete:(id *)arg9;
+ (_Bool)isSyncEnabled;
+ (_Bool)isSyncOrderingEnabled;
+ (void)setVoiceShortcutMigrationDidRun:(_Bool)arg1;

- (id)init;
- (void)startSubscriptionForRemoteChanges;
- (void)syncDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2;
- (void)syncDatabase:(id)arg1 includingOrdering:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)fetchCurrentAccountInfo;
- (id)accountNameForSyncToken;
- (void)clearSyncStateForWorkflows:(id)arg1 inDatabase:(id)arg2;
- (_Bool)createRecordZoneIfNecessaryWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)fetchChangesFromCloudKitSinceChangeToken:(id)arg1 outChangedWorkflowRecords:(out id *)arg2 outDeleted:(out id *)arg3 outOrderedWorkflowIDs:(out id *)arg4 outNewServerChangeToken:(out id *)arg5 error:(id *)arg6;
- (void)pruneIncomingChanges:(id)arg1 deletes:(id)arg2 inDatabase:(id)arg3 outWorkflowsToReupload:(id *)arg4;
- (_Bool)buildOutgoingChangesFromDatabase:(id)arg1 sendAllChanges:(_Bool)arg2 outChangedWorkflows:(out id *)arg3 outPreSyncHashes:(out id *)arg4 outDeletedWorkflowIDs:(out id *)arg5 outOrderedWorkflowIDs:(out id *)arg6;
- (_Bool)saveIncomingChanges:(id)arg1 incomingDeletes:(id)arg2 conflicts:(id)arg3 mergedOrderedWorkflowIDs:(id)arg4 sentChanges:(id)arg5 sentDeletes:(id)arg6 sentOrdering:(_Bool)arg7 saveOrderingLocally:(_Bool)arg8 isOrderingEnabled:(_Bool)arg9 localWorkflowsToDelete:(id)arg10 workflowIDsToRename:(id)arg11 preSyncHashes:(id)arg12 serverChangeToken:(id)arg13 inDatabase:(id)arg14;
- (_Bool)pushChangesToCloudKit:(id)arg1 deletes:(id)arg2 ordering:(id)arg3 outSuccessfulChanges:(out id *)arg4 outSuccessfulDeletes:(out id *)arg5 outOrderingSaved:(_Bool *)arg6 database:(id)arg7 error:(id *)arg8;

@end
