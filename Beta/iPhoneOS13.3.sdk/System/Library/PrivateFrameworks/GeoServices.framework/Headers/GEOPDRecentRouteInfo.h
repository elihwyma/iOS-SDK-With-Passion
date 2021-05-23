/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRecentRouteInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_routeId;
    NSData *_sessionState;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_routeId:1;
        unsigned int read_sessionState:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeId:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_zilchPoints:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasZilchPoints;
@property (retain, nonatomic) NSData *zilchPoints;
@property (nonatomic, readonly) _Bool hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic, readonly) _Bool hasRouteId;
@property (retain, nonatomic) NSData *routeId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readZilchPoints;
- (void)_readSessionState;
- (void)_readRouteId;

@end
