/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTransitRouteUpdate, NSData, PBDataReader;

@interface GEOCompanionRouteUpdate : PBCodable

{
    PBDataReader *_reader;
    double _lastUpdated;
    NSData *_routeID;
    GEOTransitRouteUpdate *_transitRouteUpdate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    struct {
        unsigned int has_lastUpdated:1;
        unsigned int has_type:1;
        unsigned int read_routeID:1;
        unsigned int read_transitRouteUpdate:1;
        unsigned int wrote_lastUpdated:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_transitRouteUpdate:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasLastUpdated;
@property (nonatomic) double lastUpdated;
@property (nonatomic, readonly) _Bool hasTransitRouteUpdate;
@property (retain, nonatomic) GEOTransitRouteUpdate *transitRouteUpdate;

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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readRouteID;
- (id)initWithTransitRouteUpdate:(id)arg1;
- (void)_readTransitRouteUpdate;

@end
