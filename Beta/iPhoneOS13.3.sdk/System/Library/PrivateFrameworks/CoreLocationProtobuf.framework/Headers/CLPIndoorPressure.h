/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@interface CLPIndoorPressure : PBCodable

{
    double _timestamp;
    float _pressure;
    float _temperature;
    struct {
        unsigned int timestamp:1;
        unsigned int pressure:1;
        unsigned int temperature:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasPressure;
@property (nonatomic) float pressure;
@property (nonatomic) _Bool hasTemperature;
@property (nonatomic) float temperature;

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
