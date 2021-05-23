/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitRoutingIncidentMessage, GEOTransitEngineDebugData, GEOTransitRouteDisplayStrings, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSuggestedRoute : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _routeBadges;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitEngineDebugData *_engineDebugData;
    NSData *_routeHandle;
    NSMutableArray *_routePlanningArtworks;
    NSMutableArray *_sectionOptions;
    NSMutableArray *_sections;
    NSMutableArray *_steps;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _rank;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    _Bool _supportsRouteUpdates;
    struct {
        unsigned int has_absEndTime:1;
        unsigned int has_absStartTime:1;
        unsigned int has_rank:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int has_supportsRouteUpdates:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeBadges:1;
        unsigned int read_displayStrings:1;
        unsigned int read_engineDebugData:1;
        unsigned int read_routeHandle:1;
        unsigned int read_routePlanningArtworks:1;
        unsigned int read_sectionOptions:1;
        unsigned int read_sections:1;
        unsigned int read_steps:1;
        unsigned int read_transitIncidentMessage:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeBadges:1;
        unsigned int wrote_displayStrings:1;
        unsigned int wrote_engineDebugData:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_routePlanningArtworks:1;
        unsigned int wrote_sectionOptions:1;
        unsigned int wrote_sections:1;
        unsigned int wrote_steps:1;
        unsigned int wrote_transitIncidentMessage:1;
        unsigned int wrote_absEndTime:1;
        unsigned int wrote_absStartTime:1;
        unsigned int wrote_rank:1;
        unsigned int wrote_travelTimeAggressiveEstimate:1;
        unsigned int wrote_travelTimeConservativeEstimate:1;
        unsigned int wrote_supportsRouteUpdates:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isWalkingOnlyRoute) _Bool walkingOnlyRoute;
@property (nonatomic) _Bool hasAbsStartTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) _Bool hasAbsEndTime;
@property (nonatomic) unsigned int absEndTime;
@property (retain, nonatomic) NSMutableArray *steps;
@property (nonatomic, readonly) _Bool hasRouteHandle;
@property (retain, nonatomic) NSData *routeHandle;
@property (nonatomic) _Bool hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic, readonly) _Bool hasTransitIncidentMessage;
@property (retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property (retain, nonatomic) NSMutableArray *routePlanningArtworks;
@property (nonatomic, readonly) _Bool hasDisplayStrings;
@property (retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (nonatomic, readonly) unsigned long long routeBadgesCount;
@property (nonatomic, readonly) int *routeBadges;
@property (retain, nonatomic) NSMutableArray *sectionOptions;
@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) _Bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) _Bool hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, readonly) _Bool hasEngineDebugData;
@property (retain, nonatomic) GEOTransitEngineDebugData *engineDebugData;
@property (nonatomic) _Bool hasSupportsRouteUpdates;
@property (nonatomic) _Bool supportsRouteUpdates;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)stepsType;
+ (Class)routePlanningArtworkType;
+ (Class)sectionOptionType;
+ (Class)sectionType;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)addSection:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readSections;
- (unsigned long long)sectionsCount;
- (void)clearSections;
- (unsigned long long)stepsCount;
- (id)stepsAtIndex:(unsigned long long)arg1;
- (void)_readRouteHandle;
- (void)_readTransitIncidentMessage;
- (void)_readSteps;
- (void)clearSteps;
- (unsigned long long)sectionOptionsCount;
- (id)sectionOptionAtIndex:(unsigned long long)arg1;
- (void)_readDisplayStrings;
- (id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1;
- (void)_addNoFlagsSteps:(id)arg1;
- (void)_readRoutePlanningArtworks;
- (void)_addNoFlagsRoutePlanningArtwork:(id)arg1;
- (void)_readRouteBadges;
- (void)_addNoFlagsRouteBadge:(int)arg1;
- (void)_readSectionOptions;
- (void)_addNoFlagsSectionOption:(id)arg1;
- (void)_addNoFlagsSection:(id)arg1;
- (void)_readEngineDebugData;
- (void)addSteps:(id)arg1;
- (unsigned long long)routePlanningArtworksCount;
- (void)clearRoutePlanningArtworks;
- (id)routePlanningArtworkAtIndex:(unsigned long long)arg1;
- (void)addRoutePlanningArtwork:(id)arg1;
- (void)clearRouteBadges;
- (int)routeBadgeAtIndex:(unsigned long long)arg1;
- (void)addRouteBadge:(int)arg1;
- (void)clearSectionOptions;
- (void)addSectionOption:(id)arg1;
- (void)setRouteBadges:(int *)arg1 count:(unsigned long long)arg2;
- (id)routeBadgesAsString:(int)arg1;
- (int)StringAsRouteBadges:(id)arg1;

@end
