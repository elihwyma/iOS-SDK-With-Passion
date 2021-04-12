//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudZone.h>

@class CKRecordID, NSUUID;

@interface HMDCloudLegacyZone : HMDCloudZone
{
    NSUUID *_metadataObjectID;
    CKRecordID *_metadataRecordID;
    NSUUID *_homeDataObjectID;
    CKRecordID *_homeDataRecordID;
    NSUUID *_homeDataV3ObjectID;
    CKRecordID *_homeDataV3RecordID;
}

+ (void)createLegacyZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
+ (id)zoneSubscriptionName:(id)arg1;
+ (id)zoneRootRecordName;
// - (void).cxx_destruct;
- (void)setServerChangeToken:(id)arg1;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)arg1;
- (void)dropCachedRecords;
- (id)createCloudRecordWithObjectID:(id)arg1 recordName:(id)arg2;
- (id)homeDataV3ModelWithPushDataPush:(id)arg1;
- (id)homeDataModelWithPushDataPush:(id)arg1;
- (id)metadataModelWithPushDataPush:(id)arg1;
@property(readonly, nonatomic, getter=isHomeDataV3RecordAvailable) BOOL homeDataV3RecordAvailable;
@property(readonly, nonatomic) CKRecordID *homeDataV3RecordID; // @synthesize homeDataV3RecordID=_homeDataV3RecordID;
@property(readonly, nonatomic) NSUUID *homeDataV3ObjectID; // @synthesize homeDataV3ObjectID=_homeDataV3ObjectID;
@property(readonly, nonatomic, getter=isHomeDataRecordAvailable) BOOL homeDataRecordAvailable;
@property(readonly, nonatomic) CKRecordID *homeDataRecordID; // @synthesize homeDataRecordID=_homeDataRecordID;
@property(readonly, nonatomic) NSUUID *homeDataObjectID; // @synthesize homeDataObjectID=_homeDataObjectID;
@property(readonly, nonatomic, getter=isMetadataRecordAvailable) BOOL metadataRecordAvailable;
@property(readonly, nonatomic) CKRecordID *metadataRecordID; // @synthesize metadataRecordID=_metadataRecordID;
@property(readonly, nonatomic) NSUUID *metadataObjectID; // @synthesize metadataObjectID=_metadataObjectID;
- (BOOL)doesProcessChangeEvenIfDecryptionFails;

@end

