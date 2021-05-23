/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable

{
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    _Bool _isConnected;
    struct {
        unsigned int has_type:1;
        unsigned int has_isConnected:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasIsConnected;
@property (nonatomic) _Bool isConnected;
@property (nonatomic, readonly) _Bool hasPairedDeviceIdentifier;
@property (retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
