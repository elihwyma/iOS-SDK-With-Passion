/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncSequenceRecord, NSArray, NSString, NSUUID;

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord

{
    HDCloudSyncSequenceRecord *_slotASequenceHeaderRecord;
    HDCloudSyncSequenceRecord *_slotBSequenceHeaderRecord;
    _Bool _active;
    NSString *_ownerIdentifier;
    NSString *_pendingOwner;
    NSUUID *_storeIdentifier;
    HDCloudSyncSequenceRecord *_tombstoneSequenceRecord;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (copy, nonatomic, readonly) NSString *ownerIdentifier;
@property (copy, nonatomic) NSString *pendingOwner;
@property (copy, nonatomic, readonly) NSUUID *storeIdentifier;
@property (nonatomic, readonly) HDCloudSyncSequenceRecord *sequenceRecord;
@property (copy, nonatomic, readonly) NSArray *orderedSequenceRecords;
@property (nonatomic, readonly) HDCloudSyncSequenceRecord *tombstoneSequenceRecord;
@property (nonatomic) long long supportedProtocolVersion;
@property (nonatomic) long long requiredProtocolVersion;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long deviceMode;

+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)hasFutureSchema:(id)arg1;
+ (_Bool)isStoreRecord:(id)arg1;
+ (_Bool)isStoreRecordID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithOwnerIdentifier:(id)arg1 storeIdentifier:(id)arg2 pendingOwner:(id)arg3 active:(_Bool)arg4 record:(id)arg5 schemaVersion:(long long)arg6;
- (id)activeSequenceHeaderRecord;
- (id)currentSequenceHeaderRecord;
- (id)oldSequenceHeaderRecord;
- (id)_indentedSequenceRecordDescription:(id)arg1;
- (id)initInSyncCircle:(id)arg1 ownerIdentifier:(id)arg2 storeIdentifier:(id)arg3;
- (id)clearCurrentSequenceHeaderRecord;
- (id)clearOldSequenceHeaderRecord;
- (id)clearTombstoneSequenceHeaderRecord;
- (id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)arg1 includedIdentifiers:(id)arg2;
- (id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)arg1;
- (void)addSequenceHeaderRecord:(id)arg1;
- (_Bool)hasActiveSequence;
- (_Bool)hasSequenceWithFutureProtocolVersion;
- (id)sequenceRecordWithRecordID:(id)arg1;

@end
