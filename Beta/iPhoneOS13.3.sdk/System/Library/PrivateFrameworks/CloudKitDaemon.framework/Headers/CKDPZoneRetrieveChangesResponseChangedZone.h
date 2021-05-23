/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordZoneIdentifier, CKDPZoneCapabilities;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable

{
    CKDPZoneCapabilities *_capabilities;
    int _changeType;
    int _deleteType;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
    struct {
        unsigned int changeType:1;
        unsigned int deleteType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (nonatomic) _Bool hasChangeType;
@property (nonatomic) int changeType;
@property (nonatomic) _Bool hasDeleteType;
@property (nonatomic) int deleteType;
@property (nonatomic, readonly) _Bool hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsChangeType:(id)arg1;
- (id)deleteTypeAsString:(int)arg1;
- (int)StringAsDeleteType:(id)arg1;

@end
