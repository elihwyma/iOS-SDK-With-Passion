/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKContainerID, CKRecordZoneID, CKReference, CKServerChangeToken, NSArray, NSData, NSDate, NSString;

@interface CKRecordZone : NSObject

{
    _Bool _needsZoneishPCSRolled;
    _Bool _zoneKeyRollAllowed;
    _Bool _serializeProtectionData;
    int _deviceCount;
    CKRecordZoneID *_zoneID;
    unsigned long long _capabilities;
    CKContainerID *_containerID;
    CKReference *_share;
    CKServerChangeToken *_currentServerChangeToken;
    NSData *_clientChangeToken;
    NSData *_protectionData;
    NSString *_protectionEtag;
    NSData *_zoneishProtectionData;
    NSDate *_zonePCSModificationDate;
    NSString *_zonePCSLastModifierDevice;
    NSData *_pcsKeyID;
    NSData *_zoneishKeyID;
    NSString *_previousProtectionEtag;
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    NSArray *_invitedKeysToRemove;
}

@property (copy, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) CKReference *share;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) int deviceCount;
@property (nonatomic, readonly) NSData *currentServerContinuationToken;
@property (retain, nonatomic) CKServerChangeToken *currentServerChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (retain, nonatomic) NSData *protectionData;
@property (retain, nonatomic) NSString *protectionEtag;
@property (retain, nonatomic) NSData *zoneishProtectionData;
@property (nonatomic) _Bool needsZoneishPCSRolled;
@property (nonatomic) _Bool zoneKeyRollAllowed;
@property (retain, nonatomic) NSDate *zonePCSModificationDate;
@property (retain, nonatomic) NSString *zonePCSLastModifierDevice;
@property (retain, nonatomic) NSData *pcsKeyID;
@property (retain, nonatomic) NSData *zoneishKeyID;
@property (retain, nonatomic) NSString *previousProtectionEtag;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;
@property (nonatomic) _Bool serializeProtectionData;
@property (retain, nonatomic) NSArray *invitedKeysToRemove;

+ (_Bool)supportsSecureCoding;
+ (id)defaultRecordZone;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2;

@end
