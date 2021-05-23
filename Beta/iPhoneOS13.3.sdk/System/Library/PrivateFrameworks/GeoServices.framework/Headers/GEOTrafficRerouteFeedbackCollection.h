/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficRerouteFeedbackCollection : PBCodable

{
    PBDataReader *_reader;
    NSData *_directionResponseID;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    NSData *_reroutedRouteID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _oldRouteHistoricTravelTime;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    unsigned int _reroutedRouteTravelTime;
    _Bool _oldRouteBlocked;
    struct {
        unsigned int has_oldRouteHistoricTravelTime:1;
        unsigned int has_oldRouteTravelTime:1;
        unsigned int has_reroutedRouteHistoricTravelTime:1;
        unsigned int has_reroutedRouteTravelTime:1;
        unsigned int has_oldRouteBlocked:1;
        unsigned int read_directionResponseID:1;
        unsigned int read_oldRouteID:1;
        unsigned int read_oldRouteIncidents:1;
        unsigned int read_reroutedRouteID:1;
        unsigned int wrote_directionResponseID:1;
        unsigned int wrote_oldRouteID:1;
        unsigned int wrote_oldRouteIncidents:1;
        unsigned int wrote_reroutedRouteID:1;
        unsigned int wrote_oldRouteHistoricTravelTime:1;
        unsigned int wrote_oldRouteTravelTime:1;
        unsigned int wrote_reroutedRouteHistoricTravelTime:1;
        unsigned int wrote_reroutedRouteTravelTime:1;
        unsigned int wrote_oldRouteBlocked:1;
    } _flags;
}

@property (nonatomic) _Bool hasOldRouteTravelTime;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) _Bool hasReroutedRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (nonatomic) _Bool hasOldRouteHistoricTravelTime;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic) _Bool hasReroutedRouteHistoricTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic) _Bool hasOldRouteBlocked;
@property (nonatomic) _Bool oldRouteBlocked;
@property (retain, nonatomic) NSMutableArray *oldRouteIncidents;
@property (nonatomic, readonly) _Bool hasDirectionResponseID;
@property (retain, nonatomic) NSData *directionResponseID;
@property (nonatomic, readonly) _Bool hasOldRouteID;
@property (retain, nonatomic) NSData *oldRouteID;
@property (nonatomic, readonly) _Bool hasReroutedRouteID;
@property (retain, nonatomic) NSData *reroutedRouteID;

+ (_Bool)isValid:(id)arg1;
+ (Class)oldRouteIncidentsType;

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
- (void)_readOldRouteIncidents;
- (void)_addNoFlagsOldRouteIncidents:(id)arg1;
- (void)_readOldRouteID;
- (void)_readReroutedRouteID;
- (unsigned long long)oldRouteIncidentsCount;
- (void)clearOldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (void)addOldRouteIncidents:(id)arg1;
- (void)_readDirectionResponseID;

@end
