/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBDataReader;

@interface GEOURLRouteHandle : PBCodable

{
    PBDataReader *_reader;
    NSData *_directionsResponseID;
    NSData *_routeID;
    NSData *_transitData;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_directionsResponseID:1;
        unsigned int read_routeID:1;
        unsigned int read_transitData:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_directionsResponseID:1;
        unsigned int wrote_routeID:1;
        unsigned int wrote_transitData:1;
        unsigned int wrote_zilchPoints:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDirectionsResponseID;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (nonatomic, readonly) _Bool hasRouteID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic, readonly) _Bool hasZilchPoints;
@property (retain, nonatomic) NSData *zilchPoints;
@property (nonatomic, readonly) _Bool hasTransitData;
@property (retain, nonatomic) NSData *transitData;

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
- (void)_readDirectionsResponseID;
- (void)_readRouteID;
- (void)_readZilchPoints;
- (void)_readTransitData;

@end
