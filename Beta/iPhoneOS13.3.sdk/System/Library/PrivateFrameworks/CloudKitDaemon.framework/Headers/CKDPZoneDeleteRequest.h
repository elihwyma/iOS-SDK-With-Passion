/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPZoneDeleteRequest : PBRequest

{
    CKDPDate *_lastMissingManateeIdentityErrorDate;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    _Bool _userPurge;
    struct {
        unsigned int userPurge:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) _Bool hasUserPurge;
@property (nonatomic) _Bool userPurge;
@property (nonatomic, readonly) _Bool hasLastMissingManateeIdentityErrorDate;
@property (retain, nonatomic) CKDPDate *lastMissingManateeIdentityErrorDate;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
