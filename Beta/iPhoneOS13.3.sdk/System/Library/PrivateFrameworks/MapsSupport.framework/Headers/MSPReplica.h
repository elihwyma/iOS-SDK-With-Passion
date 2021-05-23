/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSUUID;

@interface MSPReplica : NSObject

{
    NSUUID *_clientIdentifier;
    NSDictionary *_records;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *clientIdentifier;
@property (nonatomic, readonly) NSDictionary *records;

+ (id)allowedEditClasses;
+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3;

- (id)init;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2;
- (Class)replicaRecordClass;
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (id)editsToMergeWithReplica:(id)arg1;
- (_Bool)_containerSerializationRequiresTrackingPositionEdits;
- (id)editsToInsertOrUpdateRecords:(id)arg1;
- (id)editsToRemoveRecordsWithIdentifiers:(id)arg1;
- (id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (id)tombstoneRecordForRecord:(id)arg1;
- (id)mergeOptionsWithLastSyncDate:(id)arg1;

@end
