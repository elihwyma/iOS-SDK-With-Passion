/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplica.h>

@interface MSPOrderedReplica : MSPReplica

+ (id)allowedEditClasses;
+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditPosition:(CDUnknownBlockType)arg4 caseIsRemoveTombstone:(CDUnknownBlockType)arg5;

- (id)orderedReplicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (_Bool)_containerSerializationRequiresTrackingPositionEdits;

@end
