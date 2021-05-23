/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplica.h>

@class NSArray, NSData, NSString;

@interface MSPHistoryReplica : MSPReplica

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *propertyListDataRepresentation;
@property (nonatomic, readonly) id propertyListRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)allowedEditClasses;
+ (void)switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditModificationDate:(CDUnknownBlockType)arg4 caseIsDeleteTombstone:(CDUnknownBlockType)arg5;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(CDUnknownBlockType)arg2;
- (Class)replicaRecordClass;
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id *)arg2;
- (id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)mergeOptionsWithLastSyncDate:(id)arg1;

@end
