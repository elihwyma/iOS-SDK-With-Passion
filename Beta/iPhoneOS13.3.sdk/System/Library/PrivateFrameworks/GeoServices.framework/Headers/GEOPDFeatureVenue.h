/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueContainer, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureVenue : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buildings;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_buildings:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buildings:1;
        unsigned int wrote_levels:1;
        unsigned int wrote_venueContainer:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasVenueContainer;
@property (retain, nonatomic) GEOPDVenueContainer *venueContainer;
@property (retain, nonatomic) NSMutableArray *buildings;
@property (retain, nonatomic) NSMutableArray *levels;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)levelType;
+ (Class)buildingType;

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
- (void)_readVenueContainer;
- (void)_readLevels;
- (void)_addNoFlagsLevel:(id)arg1;
- (unsigned long long)levelsCount;
- (void)clearLevels;
- (id)levelAtIndex:(unsigned long long)arg1;
- (void)addLevel:(id)arg1;
- (void)_readBuildings;
- (void)_addNoFlagsBuilding:(id)arg1;
- (unsigned long long)buildingsCount;
- (void)clearBuildings;
- (id)buildingAtIndex:(unsigned long long)arg1;
- (void)addBuilding:(id)arg1;

@end
