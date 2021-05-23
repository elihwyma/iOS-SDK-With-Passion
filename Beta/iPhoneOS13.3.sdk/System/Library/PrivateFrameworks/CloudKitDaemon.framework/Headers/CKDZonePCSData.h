/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPCSData.h>

@class CKDSharePCSData, CKRecordID, CKRecordZoneID, NSData;

__attribute__((visibility("hidden")))
@interface CKDZonePCSData : CKDPCSData

{
    struct _OpaquePCSShareProtection *_zoneishPCS;
    CKRecordZoneID *_zoneID;
    NSData *_zoneishPCSData;
    NSData *_zoneishPublicKeyID;
    CKDSharePCSData *_sharePCSData;
    CKRecordID *_shareID;
}

@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSData *zoneishPublicKeyID;
@property (nonatomic) struct _OpaquePCSShareProtection *zoneishPCS;
@property (copy, nonatomic) NSData *zoneishPCSData;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

+ (_Bool)supportsSecureCoding;
+ (id)dataWithZone:(id)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemID;
- (id)initWithZone:(id)arg1;

@end
