/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTFPredictedSpeed : PBCodable

{
    unsigned int _deltaMinutesInFuture;
    unsigned int _speed;
    struct {
        unsigned int has_deltaMinutesInFuture:1;
        unsigned int has_speed:1;
    } _flags;
}

@property (nonatomic) _Bool hasDeltaMinutesInFuture;
@property (nonatomic) unsigned int deltaMinutesInFuture;
@property (nonatomic) _Bool hasSpeed;
@property (nonatomic) unsigned int speed;

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
