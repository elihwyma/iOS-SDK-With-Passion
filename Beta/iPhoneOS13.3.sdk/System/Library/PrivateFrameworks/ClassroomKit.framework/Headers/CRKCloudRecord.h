/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CKRecord, CKRecordZoneID, CRKCloudAssetStore, NSMutableSet;

@interface CRKCloudRecord : NSObject

{
    NSMutableSet *_assetIdentifiers;
    CRKCloudAssetStore *_assetStore;
    CKRecord *_record;
    CKRecordZoneID *_zoneId;
}

@property (retain, nonatomic) NSMutableSet *assetIdentifiers;
@property (retain, nonatomic) CRKCloudAssetStore *assetStore;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) CKRecordZoneID *zoneId;

+ (id)new;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)recordName;
- (void)setReference:(id)arg1;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (id)initWithRecord:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
- (void)setAssetData:(id)arg1 forKey:(id)arg2;
- (id)assetDataForKey:(id)arg1;
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2;
- (id)encryptedObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 isEncrypted:(_Bool)arg3;
- (id)objectForKey:(id)arg1 isEncrypted:(_Bool)arg2;
- (_Bool)validCloudObject:(id)arg1;
- (id)filterEmptyArray:(id)arg1;
- (id)referenceRecordNameForKey:(id)arg1;

@end
