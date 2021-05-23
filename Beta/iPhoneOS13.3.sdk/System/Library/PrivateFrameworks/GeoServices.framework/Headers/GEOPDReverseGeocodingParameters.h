/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReverseGeocodingParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_extendedLocations;
    NSMutableArray *_locations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeTypeLimit;
    _Bool _preserveOriginalLocation;
    struct {
        unsigned int has_placeTypeLimit:1;
        unsigned int has_preserveOriginalLocation:1;
        unsigned int read_unknownFields:1;
        unsigned int read_extendedLocations:1;
        unsigned int read_locations:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_extendedLocations:1;
        unsigned int wrote_locations:1;
        unsigned int wrote_placeTypeLimit:1;
        unsigned int wrote_preserveOriginalLocation:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (nonatomic) _Bool hasPlaceTypeLimit;
@property (nonatomic) int placeTypeLimit;
@property (nonatomic) _Bool hasPreserveOriginalLocation;
@property (nonatomic) _Bool preserveOriginalLocation;
@property (retain, nonatomic) NSMutableArray *extendedLocations;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)locationType;
+ (Class)extendedLocationType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (id)placeTypeLimitAsString:(int)arg1;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (void)addLocation:(id)arg1;
- (unsigned long long)locationsCount;
- (void)clearLocations;
- (id)locationAtIndex:(unsigned long long)arg1;
- (void)_readLocations;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)_readExtendedLocations;
- (void)_addNoFlagsExtendedLocation:(id)arg1;
- (unsigned long long)extendedLocationsCount;
- (void)clearExtendedLocations;
- (id)extendedLocationAtIndex:(unsigned long long)arg1;
- (void)addExtendedLocation:(id)arg1;

@end
