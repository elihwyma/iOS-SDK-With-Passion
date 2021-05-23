/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEOWiFiAP : PBCodable

{
    NSString *_uniqueID;
    unsigned int _channel;
    int _origin;
    int _rssi;
    struct {
        unsigned int has_channel:1;
        unsigned int has_origin:1;
        unsigned int has_rssi:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) _Bool hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) _Bool hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) _Bool hasOrigin;
@property (nonatomic) int origin;

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
- (void)readAll:(_Bool)arg1;
- (id)originAsString:(int)arg1;
- (int)StringAsOrigin:(id)arg1;

@end
