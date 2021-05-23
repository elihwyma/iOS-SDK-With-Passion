/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSData.h>

@class CKDChainPCSData, CKDSharePCSData, CKDZonePCSData, CKEncryptedData, CKRecordID, CKRecordZoneID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDRecordPCSData : CKDPCSData

{
    CKRecordID *_recordID;
    NSString *_recordType;
    CKRecordID *_parentID;
    CKDRecordPCSData *_parentPCSData;
    NSData *_chainParentPublicKeyID;
    CKDZonePCSData *_zonePCSData;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPublicKeyID;
    CKDSharePCSData *_sharePCSData;
    CKRecordID *_shareID;
    CKDChainPCSData *_chainPCSData;
    CKEncryptedData *_encryptedPublicSharingKey;
}

@property (retain, nonatomic) CKRecordID *recordID;
@property (nonatomic, readonly) NSString *recordType;
@property (retain, nonatomic) CKRecordID *parentID;
@property (retain, nonatomic) CKDRecordPCSData *parentPCSData;
@property (retain, nonatomic) NSData *chainParentPublicKeyID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSData *zoneishPublicKeyID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;
@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDChainPCSData *chainPCSData;
@property (retain, nonatomic) CKEncryptedData *encryptedPublicSharingKey;

+ (_Bool)supportsSecureCoding;
+ (id)dataWithRecord:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemID;
- (id)CKPropertiesDescription;
- (id)initWithRecord:(id)arg1;
- (void)setPcs:(struct _OpaquePCSShareProtection *)arg1;
- (_Bool)shouldEncodePCSData;
- (id)initWithPCSData:(id)arg1 recordID:(id)arg2;

@end
