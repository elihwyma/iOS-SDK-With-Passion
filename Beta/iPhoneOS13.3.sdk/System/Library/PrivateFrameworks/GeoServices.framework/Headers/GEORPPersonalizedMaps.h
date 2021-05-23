/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPAddress;

@interface GEORPPersonalizedMaps : PBCodable

{
    GEORPAddress *_address;
    int _addressType;
    int _placeType;
    CDStruct_2d9f5d20 _flags;
}

@property (nonatomic) _Bool hasAddressType;
@property (nonatomic) int addressType;
@property (nonatomic) _Bool hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEORPAddress *address;

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
- (id)addressTypeAsString:(int)arg1;
- (int)StringAsAddressType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
- (int)StringAsPlaceType:(id)arg1;

@end
