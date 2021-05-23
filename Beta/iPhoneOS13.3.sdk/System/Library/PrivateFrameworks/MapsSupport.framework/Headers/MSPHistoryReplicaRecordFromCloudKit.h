/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaRecordFromCloudKit.h>

@class CKRecord, MSPVectorTimestamp, NSData, NSDate, NSString, NSUUID;

@interface MSPHistoryReplicaRecordFromCloudKit : MSPReplicaRecordFromCloudKit

{
    NSDate *_modificationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *contents;
@property (copy, nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;
@property (copy, nonatomic, readonly) NSDate *modificationDate;
@property (retain, nonatomic) CKRecord *record;
@property (nonatomic, readonly, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
@property (nonatomic, readonly, getter=recordIdentifier) NSUUID *recordIdentifier;

+ (id)tombstoneWithRecordIdentifier:(id)arg1;
+ (id)recordFromInsertEdit:(id)arg1;

- (id)initWithCKRecord:(id)arg1;
- (id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2;
- (void)applyUpdateEdit:(id)arg1;
- (void)applyUpdateModificationDateEdit:(id)arg1;
- (void)applyDeleteTombstoneEdit:(id)arg1;

@end
