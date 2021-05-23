/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaRecordFromCloudKit.h>

#import <MapsSupport/Swift-Protocol.h>

@class CKRecord, MSPPosition, MSPVectorTimestamp, NSData, NSString, NSUUID;

@interface MSPOrderedReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit <Swift>

{
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;
@property (retain, nonatomic) CKRecord *record;
@property (nonatomic, readonly, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
@property (nonatomic, readonly, getter=recordIdentifier) NSUUID *recordIdentifier;

+ (id)recordType;
+ (id)recordFromInsertEdit:(id)arg1;

- (id)initWithCKRecord:(id)arg1;
- (id)recordRepresentation;
- (id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2;
- (void)applyUpdatePositionEdit:(id)arg1;
- (id)recordZoneName;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 identifier:(id)arg5;

@end
