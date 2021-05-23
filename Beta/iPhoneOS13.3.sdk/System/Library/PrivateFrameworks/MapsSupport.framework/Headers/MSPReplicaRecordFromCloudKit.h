/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

#import <MapsSupport/Swift-Protocol.h>

@class CKRecord, MSPVectorTimestamp, NSData, NSString, NSUUID;

@interface MSPReplicaRecordFromCloudKit : NSObject <Swift>

{
    CKRecord *_record;
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSUUID *_recordIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (retain, nonatomic) CKRecord *record;
@property (nonatomic, readonly, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
@property (nonatomic, readonly, getter=recordIdentifier) NSUUID *recordIdentifier;

+ (id)recordType;
+ (id)tombstoneWithRecordIdentifier:(id)arg1;
+ (id)recordFromInsertEdit:(id)arg1;

- (id)initWithCKRecord:(id)arg1;
- (id)tombstoneRecordRepresentation;
- (id)recordRepresentation;
- (id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2;
- (void)applyUpdateEdit:(id)arg1;
- (id)recordZoneName;
- (id)recordRepresentationWithType:(id)arg1 recordZoneID:(id)arg2;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 identifier:(id)arg3;

@end
