/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPOrderedReplica.h>

@class NSArray, NSData, NSString;

@interface MSPFavoritesReplica : MSPOrderedReplica

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
@property (copy, nonatomic, readonly) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (void)switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditPosition:(CDUnknownBlockType)arg4 caseIsRemoveTombstone:(CDUnknownBlockType)arg5;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(CDUnknownBlockType)arg2;
- (Class)replicaRecordClass;
- (id)changesMergingCloudChanges:(id)arg1 withReplica:(id)arg2 lastSyncDate:(id)arg3;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)mergeOptionsWithLastSyncDate:(id)arg1;

@end
