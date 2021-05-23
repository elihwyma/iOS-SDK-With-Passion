/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPShareIdentifier : PBCodable

{
    CKDPIdentifier *_value;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) CKDPIdentifier *value;
@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
