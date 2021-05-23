/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncRecord.h>

@class CKRecordID, HDSyncAnchorRangeMap, NSNumber, NSURL;

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord

{
    NSNumber *_options;
    int _protocolVersion;
    NSURL *_changesetArchiveFileURL;
    unsigned long long _changeIndex;
    HDSyncAnchorRangeMap *_decodedSyncAnchorRangeMap;
}

@property (copy, nonatomic, readonly) NSURL *changesetArchiveFileURL;
@property (nonatomic, readonly) unsigned long long changeIndex;
@property (nonatomic, readonly) int protocolVersion;
@property (nonatomic, readonly) _Bool finalForSequence;
@property (nonatomic, readonly) HDSyncAnchorRangeMap *decodedSyncAnchorRangeMap;
@property (copy, nonatomic, readonly) NSNumber *changeSize;
@property (copy, nonatomic, readonly) CKRecordID *sequenceRecordID;

+ (id)assetKeys;
+ (id)recordWithCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)hasFutureSchema:(id)arg1;
+ (id)_assetForCKRecord:(id)arg1 error:(id *)arg2;
+ (_Bool)isChangeRecord:(id)arg1;
+ (_Bool)isChangeRecord:(id)arg1 inSequence:(id)arg2;
+ (long long)bytesPerChangeRecordAssetThreshold;
+ (long long)bytesPerChangeRecordAssetThresholdHardLimit;
+ (id)nonAssetKeys;
+ (id)changesetArchiveContentDataForCKRecord:(id)arg1 error:(id *)arg2;
+ (id)changesetArchiveURLForCKRecord:(id)arg1 error:(id *)arg2;

- (id)description;
- (long long)compare:(id)arg1;
- (_Bool)shouldFetchAssetContentInMemory;
- (id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(_Bool)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4 protocolVersion:(int)arg5;
- (id)initWithSyncAnchorRangeMapData:(id)arg1 changeIndex:(unsigned long long)arg2 changesetAsset:(id)arg3 changeSize:(id)arg4 protocolVersion:(int)arg5 options:(id)arg6 sequenceRecordID:(id)arg7 record:(id)arg8 schemaVersion:(long long)arg9;
- (id)_decodedSyncAnchorRangeMapForAnchorRangeData:(id)arg1;
- (id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(_Bool)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4;

@end
