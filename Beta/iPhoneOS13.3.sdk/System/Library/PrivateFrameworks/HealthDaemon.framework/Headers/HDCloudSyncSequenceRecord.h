/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncRecord.h>

@class CKRecordID, HDSyncAnchorMap, NSSet;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord

{
    _Bool _active;
    int _protocolVersion;
    unsigned long long _changeIndex;
    long long _baselineEpoch;
    unsigned long long _childRecordCount;
    HDSyncAnchorMap *_syncAnchorMap;
    NSSet *_includedIdentifiers;
    long long _slot;
}

@property (nonatomic) long long slot;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly) unsigned long long changeIndex;
@property (nonatomic, readonly) long long baselineEpoch;
@property (nonatomic, readonly) unsigned long long childRecordCount;
@property (nonatomic, readonly) HDSyncAnchorMap *syncAnchorMap;
@property (copy, nonatomic, readonly) NSSet *includedIdentifiers;
@property (nonatomic, readonly) int protocolVersion;
@property (nonatomic, readonly) HDSyncAnchorMap *frozenSyncAnchorMap;
@property (copy, nonatomic) CKRecordID *firstUnfrozenChangeRecord;

+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)hasFutureSchema:(id)arg1;
+ (id)recordIDsWithZoneID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1 sequenceSlot:(long long)arg2;
+ (id)_recordNameForSequenceSlot:(long long)arg1;
+ (_Bool)isSequenceRecord:(id)arg1;
+ (_Bool)isSequenceRecordID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setProtocolVersion:(int)arg1;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 changeIndex:(unsigned long long)arg3 baselineEpoch:(long long)arg4 includedIdentifiers:(id)arg5 storeRecord:(id)arg6;
- (id)initForSequenceSlot:(long long)arg1 syncAnchorMap:(id)arg2 active:(_Bool)arg3 changeIndex:(unsigned long long)arg4 childRecordCount:(unsigned long long)arg5 baselineEpoch:(long long)arg6 includedIdentifiers:(id)arg7 protocolVersion:(int)arg8 storeRecordID:(id)arg9 record:(id)arg10 schemaVersion:(long long)arg11;
- (void)incrementChangeIndex;
- (void)resetChangeIndex:(unsigned long long)arg1;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)arg1;
- (void)incrementChildRecordCount;
- (void)decrementChildRecordCount:(unsigned long long)arg1;
- (void)_unitTest_setChildRecordCount:(unsigned long long)arg1;

@end
