/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTransitArrivalInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _destinationLocation;
    struct {
        unsigned int has_destinationLocation:1;
    } _flags;
}

@property (nonatomic) _Bool hasDestinationLocation;
@property (nonatomic) int destinationLocation;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)destinationLocationAsString:(int)arg1;
- (int)StringAsDestinationLocation:(id)arg1;

@end
