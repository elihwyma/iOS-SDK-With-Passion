/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOPDAmenities : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct GEOPDAmenityValue *_amenitys;
    unsigned long long _amenitysCount;
    unsigned long long _amenitysSpace;
}

@property (nonatomic, readonly) unsigned long long amenitysCount;
@property (nonatomic, readonly) struct GEOPDAmenityValue *amenitys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)amentiesForPlaceData:(id)arg1;

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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (_Bool)hasAmenityType:(int)arg1;
- (_Bool)valueForAmenityType:(int)arg1;
- (void)clearAmenitys;
- (struct GEOPDAmenityValue)amenityAtIndex:(unsigned long long)arg1;
- (void)addAmenity:(struct GEOPDAmenityValue)arg1;
- (void)setAmenitys:(struct GEOPDAmenityValue *)arg1 count:(unsigned long long)arg2;

@end
