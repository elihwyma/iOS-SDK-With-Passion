/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate, CKDPZone, CKDPZoneCapabilities, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable

{
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    CKDPZoneCapabilities *_capabilities;
    NSData *_clientChangeToken;
    NSData *_currentServerContinuationToken;
    int _deviceCount;
    CKDPZone *_targetZone;
    NSString *_zonePcsModificationDevice;
    CKDPDate *_zonePcsModificationTime;
    _Bool _zoneKeyRollAllowed;
    _Bool _zoneishPcsNeedsRolled;
    struct {
        unsigned int assetQuotaUsage:1;
        unsigned int metadataQuotaUsage:1;
        unsigned int deviceCount:1;
        unsigned int zoneKeyRollAllowed:1;
        unsigned int zoneishPcsNeedsRolled:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTargetZone;
@property (retain, nonatomic) CKDPZone *targetZone;
@property (nonatomic, readonly) _Bool hasCurrentServerContinuationToken;
@property (retain, nonatomic) NSData *currentServerContinuationToken;
@property (nonatomic, readonly) _Bool hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic) _Bool hasDeviceCount;
@property (nonatomic) int deviceCount;
@property (nonatomic) _Bool hasAssetQuotaUsage;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) _Bool hasMetadataQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;
@property (nonatomic, readonly) _Bool hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) _Bool hasZoneishPcsNeedsRolled;
@property (nonatomic) _Bool zoneishPcsNeedsRolled;
@property (nonatomic) _Bool hasZoneKeyRollAllowed;
@property (nonatomic) _Bool zoneKeyRollAllowed;
@property (nonatomic, readonly) _Bool hasZonePcsModificationTime;
@property (retain, nonatomic) CKDPDate *zonePcsModificationTime;
@property (nonatomic, readonly) _Bool hasZonePcsModificationDevice;
@property (retain, nonatomic) NSString *zonePcsModificationDevice;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
