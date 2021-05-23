/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitDecoderData : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_accessPoints;
    NSMutableArray *_artworks;
    NSMutableArray *_halls;
    NSMutableArray *_lines;
    NSMutableArray *_stations;
    NSMutableArray *_steps;
    NSMutableArray *_stops;
    NSMutableArray *_systems;
    NSMutableArray *_transitIncidentMessages;
    NSMutableArray *_transitIncidents;
    NSMutableArray *_walkings;
    NSMutableArray *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_accessPoints:1;
        unsigned int read_artworks:1;
        unsigned int read_halls:1;
        unsigned int read_lines:1;
        unsigned int read_stations:1;
        unsigned int read_steps:1;
        unsigned int read_stops:1;
        unsigned int read_systems:1;
        unsigned int read_transitIncidentMessages:1;
        unsigned int read_transitIncidents:1;
        unsigned int read_walkings:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_accessPoints:1;
        unsigned int wrote_artworks:1;
        unsigned int wrote_halls:1;
        unsigned int wrote_lines:1;
        unsigned int wrote_stations:1;
        unsigned int wrote_steps:1;
        unsigned int wrote_stops:1;
        unsigned int wrote_systems:1;
        unsigned int wrote_transitIncidentMessages:1;
        unsigned int wrote_transitIncidents:1;
        unsigned int wrote_walkings:1;
        unsigned int wrote_zilchPoints:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *stations;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (retain, nonatomic) NSMutableArray *walkings;
@property (retain, nonatomic) NSMutableArray *stops;
@property (retain, nonatomic) NSMutableArray *zilchPoints;
@property (retain, nonatomic) NSMutableArray *systems;
@property (retain, nonatomic) NSMutableArray *transitIncidents;
@property (retain, nonatomic) NSMutableArray *halls;
@property (retain, nonatomic) NSMutableArray *artworks;
@property (retain, nonatomic) NSMutableArray *transitIncidentMessages;
@property (retain, nonatomic) NSMutableArray *steps;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)systemType;
+ (_Bool)isValid:(id)arg1;
+ (Class)artworkType;
+ (Class)stepType;
+ (Class)lineType;
+ (Class)transitIncidentType;
+ (Class)stationType;
+ (Class)accessPointType;
+ (Class)walkingType;
+ (Class)stopType;
+ (Class)zilchPointsType;
+ (Class)hallType;
+ (Class)transitIncidentMessageType;

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
- (void)_readZilchPoints;
- (unsigned long long)stepsCount;
- (void)_readSteps;
- (void)_addNoFlagsStep:(id)arg1;
- (void)clearSteps;
- (id)stepAtIndex:(unsigned long long)arg1;
- (void)addStep:(id)arg1;
- (id)artworkFromIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)hallsCount;
- (id)hallAtIndex:(unsigned long long)arg1;
- (unsigned long long)stationsCount;
- (id)stationAtIndex:(unsigned long long)arg1;
- (unsigned long long)stopsCount;
- (unsigned long long)transitIncidentMessagesCount;
- (unsigned long long)artworksCount;
- (void)_readLines;
- (void)_addNoFlagsLine:(id)arg1;
- (void)_readSystems;
- (void)_addNoFlagsSystem:(id)arg1;
- (unsigned long long)linesCount;
- (void)clearLines;
- (id)lineAtIndex:(unsigned long long)arg1;
- (void)addLine:(id)arg1;
- (unsigned long long)systemsCount;
- (void)clearSystems;
- (id)systemAtIndex:(unsigned long long)arg1;
- (void)addSystem:(id)arg1;
- (void)addTransitIncident:(id)arg1;
- (unsigned long long)transitIncidentsCount;
- (void)clearTransitIncidents;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (id)transitIncidentMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (id)walkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)zilchPointsCount;
- (id)zilchPointsAtIndex:(unsigned long long)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (void)_readArtworks;
- (void)_addNoFlagsArtwork:(id)arg1;
- (void)clearArtworks;
- (void)addArtwork:(id)arg1;
- (void)_readStations;
- (void)_addNoFlagsStation:(id)arg1;
- (void)_readAccessPoints;
- (void)_addNoFlagsAccessPoint:(id)arg1;
- (void)_readWalkings;
- (void)_addNoFlagsWalking:(id)arg1;
- (void)_readStops;
- (void)_addNoFlagsStop:(id)arg1;
- (void)_addNoFlagsZilchPoints:(id)arg1;
- (void)_readTransitIncidents;
- (void)_addNoFlagsTransitIncident:(id)arg1;
- (void)_readHalls;
- (void)_addNoFlagsHall:(id)arg1;
- (void)_readTransitIncidentMessages;
- (void)_addNoFlagsTransitIncidentMessage:(id)arg1;
- (void)clearStations;
- (void)addStation:(id)arg1;
- (void)clearAccessPoints;
- (id)accessPointAtIndex:(unsigned long long)arg1;
- (void)addAccessPoint:(id)arg1;
- (unsigned long long)walkingsCount;
- (void)clearWalkings;
- (void)addWalking:(id)arg1;
- (void)clearStops;
- (void)addStop:(id)arg1;
- (void)clearZilchPoints;
- (void)addZilchPoints:(id)arg1;
- (void)clearHalls;
- (void)addHall:(id)arg1;
- (void)clearTransitIncidentMessages;
- (void)addTransitIncidentMessage:(id)arg1;

@end
