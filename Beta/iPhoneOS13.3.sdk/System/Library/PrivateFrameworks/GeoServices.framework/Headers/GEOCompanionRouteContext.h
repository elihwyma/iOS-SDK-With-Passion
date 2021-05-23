/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOCompanionRouteContext : PBCodable

{
    int _origin;
    unsigned int _timestamp;
    struct {
        unsigned int has_origin:1;
        unsigned int has_timestamp:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) _Bool hasOrigin;
@property (nonatomic) int origin;

+ (id)context;
+ (_Bool)isValid:(id)arg1;
+ (int)defaultOrigin;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)originAsString:(int)arg1;
- (int)StringAsOrigin:(id)arg1;
- (_Bool)isForeignOrigin;
- (_Bool)isStaleComparedToContext:(id)arg1;
- (id)simpleDescription;

@end
