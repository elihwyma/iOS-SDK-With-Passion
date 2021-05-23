/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSMutableArray, NSString, PBDataReader;

@interface GEORPDetails : PBCodable

{
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSMutableArray *_places;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _directionsType;
    int _displayStyle;
    int _mapType;
    struct {
        unsigned int has_directionsType:1;
        unsigned int has_displayStyle:1;
        unsigned int has_mapType:1;
        unsigned int read_displayRegion:1;
        unsigned int read_label:1;
        unsigned int read_localizedDescription:1;
        unsigned int read_localizedTitle:1;
        unsigned int read_places:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_label:1;
        unsigned int wrote_localizedDescription:1;
        unsigned int wrote_localizedTitle:1;
        unsigned int wrote_places:1;
        unsigned int wrote_directionsType:1;
        unsigned int wrote_displayStyle:1;
        unsigned int wrote_mapType:1;
    } _flags;
}

@property (nonatomic) _Bool hasDisplayStyle;
@property (nonatomic) int displayStyle;
@property (nonatomic, readonly) _Bool hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (nonatomic, readonly) _Bool hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;
@property (nonatomic, readonly) _Bool hasDisplayRegion;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) GEORPUpdatedLabel *label;
@property (nonatomic) _Bool hasDirectionsType;
@property (nonatomic) int directionsType;
@property (nonatomic) _Bool hasMapType;
@property (nonatomic) int mapType;

+ (Class)placeType;
+ (_Bool)isValid:(id)arg1;

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
- (void)_readDisplayRegion;
- (unsigned long long)placesCount;
- (id)mapTypeAsString:(int)arg1;
- (int)StringAsMapType:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (id)placeAtIndex:(unsigned long long)arg1;
- (void)_readLocalizedTitle;
- (void)_readLocalizedDescription;
- (void)_readPlaces;
- (void)_addNoFlagsPlace:(id)arg1;
- (void)_readLabel;
- (id)displayStyleAsString:(int)arg1;
- (int)StringAsDisplayStyle:(id)arg1;
- (id)directionsTypeAsString:(int)arg1;
- (int)StringAsDirectionsType:(id)arg1;

@end
