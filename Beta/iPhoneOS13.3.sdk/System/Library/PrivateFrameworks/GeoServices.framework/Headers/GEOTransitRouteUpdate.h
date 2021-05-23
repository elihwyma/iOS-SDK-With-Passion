/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTransitRouteDisplayStrings, GEOTransitRouteIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdate : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alerts;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitRouteIdentifier *_routeIdentifier;
    NSMutableArray *_stepUpdates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alerts:1;
        unsigned int read_displayStrings:1;
        unsigned int read_routeIdentifier:1;
        unsigned int read_stepUpdates:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alerts:1;
        unsigned int wrote_displayStrings:1;
        unsigned int wrote_routeIdentifier:1;
        unsigned int wrote_stepUpdates:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasRouteIdentifier;
@property (retain, nonatomic) GEOTransitRouteIdentifier *routeIdentifier;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) _Bool hasDisplayStrings;
@property (retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (retain, nonatomic) NSMutableArray *stepUpdates;
@property (retain, nonatomic) NSMutableArray *alerts;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)alertType;
+ (Class)stepUpdateType;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)_logDescription;
- (void)_readDisplayStrings;
- (void)_readRouteIdentifier;
- (void)_readStepUpdates;
- (void)_addNoFlagsStepUpdate:(id)arg1;
- (void)_readAlerts;
- (void)_addNoFlagsAlert:(id)arg1;
- (unsigned long long)stepUpdatesCount;
- (void)clearStepUpdates;
- (id)stepUpdateAtIndex:(unsigned long long)arg1;
- (void)addStepUpdate:(id)arg1;
- (unsigned long long)alertsCount;
- (void)clearAlerts;
- (id)alertAtIndex:(unsigned long long)arg1;
- (void)addAlert:(id)arg1;

@end
