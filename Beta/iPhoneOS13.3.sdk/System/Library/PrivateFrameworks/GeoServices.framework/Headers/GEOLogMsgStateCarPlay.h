/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOCarInfo;

@interface GEOLogMsgStateCarPlay : PBCodable

{
    GEOCarInfo *_carInfo;
    _Bool _isConnected;
    struct {
        unsigned int has_isConnected:1;
    } _flags;
}

@property (nonatomic) _Bool hasIsConnected;
@property (nonatomic) _Bool isConnected;
@property (nonatomic, readonly) _Bool hasCarInfo;
@property (retain, nonatomic) GEOCarInfo *carInfo;

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

@end
