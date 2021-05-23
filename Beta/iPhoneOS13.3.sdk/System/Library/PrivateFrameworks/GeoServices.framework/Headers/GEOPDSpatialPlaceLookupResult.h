/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_places;
    int _statusCode;
    CDStruct_ade9d5f7 _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)placeType;
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
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (unsigned long long)placesCount;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)arg1;

@end
