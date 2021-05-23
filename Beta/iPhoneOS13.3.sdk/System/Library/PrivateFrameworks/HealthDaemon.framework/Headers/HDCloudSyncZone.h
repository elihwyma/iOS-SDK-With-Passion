/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CKShare, HDCloudSyncDataUploadRequestRecord, HDCloudSyncMasterRecord, HDCloudSyncRepository, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZoneIdentifier, NSArray, NSMutableArray, NSUUID;

@interface HDCloudSyncZone : NSObject

{
    NSMutableArray *_sequenceRecords;
    NSMutableArray *_records;
    _Bool _hasFutureSchemaRecord;
    _Bool _validatedForSharing;
    HDCloudSyncRepository *_repository;
    HDCloudSyncZoneIdentifier *_zoneIdentifier;
    long long _zoneType;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncMasterRecord *_masterRecord;
    HDCloudSyncStore *_store;
    long long _purpose;
    CKShare *_zoneShare;
    HDCloudSyncDataUploadRequestRecord *_dataUploadRequestRecord;
}

@property (weak, nonatomic, readonly) HDCloudSyncRepository *repository;
@property (copy, nonatomic, readonly) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (nonatomic, readonly) long long zoneType;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) _Bool hasOrphanedSequenceRecords;
@property (copy, nonatomic, readonly) NSUUID *storeIdentifier;
@property (copy, nonatomic, readonly) NSArray *recordNames;
@property (nonatomic, readonly) long long recordCount;
@property (nonatomic, readonly) HDCloudSyncStoreRecord *storeRecord;
@property (nonatomic, readonly) HDCloudSyncMasterRecord *masterRecord;
@property (nonatomic) _Bool hasFutureSchemaRecord;
@property (retain, nonatomic) HDCloudSyncStore *store;
@property (nonatomic) long long purpose;
@property (retain, nonatomic) CKShare *zoneShare;
@property (nonatomic) _Bool validatedForSharing;
@property (nonatomic, readonly) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord;

- (id)description;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
- (_Bool)_addSubscriptionRecord:(id)arg1 error:(id *)arg2;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3;

@end
