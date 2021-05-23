/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPIdentifier, FCCKPRecordZoneIdentifier;

@interface FCCKPRecordIdentifier : PBCodable <Swift>

{
    FCCKPIdentifier *_value;
    FCCKPRecordZoneIdentifier *_zoneIdentifier;
}

@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) FCCKPIdentifier *value;
@property (nonatomic, readonly) _Bool hasZoneIdentifier;
@property (retain, nonatomic) FCCKPRecordZoneIdentifier *zoneIdentifier;

- (void)dealloc;
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
