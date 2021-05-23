/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueBuilding, GEOPDVenueContainer, GEOPDVenueDirectoryGroup, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeaturePOI : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDVenueBuilding *_building;
    GEOPDVenueDirectoryGroup *_directoryGroup;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_building:1;
        unsigned int read_directoryGroup:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_building:1;
        unsigned int wrote_directoryGroup:1;
        unsigned int wrote_levels:1;
        unsigned int wrote_venueContainer:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasVenueContainer;
@property (retain, nonatomic) GEOPDVenueContainer *venueContainer;
@property (nonatomic, readonly) _Bool hasBuilding;
@property (retain, nonatomic) GEOPDVenueBuilding *building;
@property (retain, nonatomic) NSMutableArray *levels;
@property (nonatomic, readonly) _Bool hasDirectoryGroup;
@property (retain, nonatomic) GEOPDVenueDirectoryGroup *directoryGroup;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)levelType;

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
- (void)_readBuilding;
- (void)_readLevels;
- (void)_addNoFlagsLevel:(id)arg1;
- (unsigned long long)levelsCount;
- (void)clearLevels;
- (id)levelAtIndex:(unsigned long long)arg1;
- (void)addLevel:(id)arg1;
- (void)_readDirectoryGroup;

@end
