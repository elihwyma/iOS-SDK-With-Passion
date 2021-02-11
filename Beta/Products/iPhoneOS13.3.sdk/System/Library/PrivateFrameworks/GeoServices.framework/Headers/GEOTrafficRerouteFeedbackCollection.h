/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {
    NSData * _directionResponseID;
    struct { 
        unsigned int has_oldRouteHistoricTravelTime : 1; 
        unsigned int has_oldRouteTravelTime : 1; 
        unsigned int has_reroutedRouteHistoricTravelTime : 1; 
        unsigned int has_reroutedRouteTravelTime : 1; 
        unsigned int has_oldRouteBlocked : 1; 
        unsigned int read_directionResponseID : 1; 
        unsigned int read_oldRouteID : 1; 
        unsigned int read_oldRouteIncidents : 1; 
        unsigned int read_reroutedRouteID : 1; 
        unsigned int wrote_directionResponseID : 1; 
        unsigned int wrote_oldRouteID : 1; 
        unsigned int wrote_oldRouteIncidents : 1; 
        unsigned int wrote_reroutedRouteID : 1; 
        unsigned int wrote_oldRouteHistoricTravelTime : 1; 
        unsigned int wrote_oldRouteTravelTime : 1; 
        unsigned int wrote_reroutedRouteHistoricTravelTime : 1; 
        unsigned int wrote_reroutedRouteTravelTime : 1; 
        unsigned int wrote_oldRouteBlocked : 1; 
    }  _flags;
    bool  _oldRouteBlocked;
    unsigned int  _oldRouteHistoricTravelTime;
    NSData * _oldRouteID;
    NSMutableArray * _oldRouteIncidents;
    unsigned int  _oldRouteTravelTime;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _reroutedRouteHistoricTravelTime;
    NSData * _reroutedRouteID;
    unsigned int  _reroutedRouteTravelTime;
}

@property (nonatomic, retain) NSData *directionResponseID;
@property (nonatomic, readonly) bool hasDirectionResponseID;
@property (nonatomic) bool hasOldRouteBlocked;
@property (nonatomic) bool hasOldRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasOldRouteID;
@property (nonatomic) bool hasOldRouteTravelTime;
@property (nonatomic) bool hasReroutedRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasReroutedRouteID;
@property (nonatomic) bool hasReroutedRouteTravelTime;
@property (nonatomic) bool oldRouteBlocked;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *oldRouteID;
@property (nonatomic, retain) NSMutableArray *oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime;

+ (bool)isValid:(id)arg1;
+ (Class)oldRouteIncidentsType;

- (void).cxx_destruct;
- (void)_addNoFlagsOldRouteIncidents:(id)arg1;
- (void)_readDirectionResponseID;
- (void)_readOldRouteID;
- (void)_readOldRouteIncidents;
- (void)_readReroutedRouteID;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionResponseID;
- (bool)hasDirectionResponseID;
- (bool)hasOldRouteBlocked;
- (bool)hasOldRouteHistoricTravelTime;
- (bool)hasOldRouteID;
- (bool)hasOldRouteTravelTime;
- (bool)hasReroutedRouteHistoricTravelTime;
- (bool)hasReroutedRouteID;
- (bool)hasReroutedRouteTravelTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)oldRouteBlocked;
- (unsigned int)oldRouteHistoricTravelTime;
- (id)oldRouteID;
- (id)oldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (unsigned int)oldRouteTravelTime;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reroutedRouteHistoricTravelTime;
- (id)reroutedRouteID;
- (unsigned int)reroutedRouteTravelTime;
- (void)setDirectionResponseID:(id)arg1;
- (void)setHasOldRouteBlocked:(bool)arg1;
- (void)setHasOldRouteHistoricTravelTime:(bool)arg1;
- (void)setHasOldRouteTravelTime:(bool)arg1;
- (void)setHasReroutedRouteHistoricTravelTime:(bool)arg1;
- (void)setHasReroutedRouteTravelTime:(bool)arg1;
- (void)setOldRouteBlocked:(bool)arg1;
- (void)setOldRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setOldRouteID:(id)arg1;
- (void)setOldRouteIncidents:(id)arg1;
- (void)setOldRouteTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteID:(id)arg1;
- (void)setReroutedRouteTravelTime:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end