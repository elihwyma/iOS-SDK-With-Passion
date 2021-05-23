/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBDataReader, PBUnknownFields;

@interface GEOOriginalRoute : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_originalDirectionsResponseID;
    NSData *_routeHandle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _originalRoutePurpose;
    unsigned int _routeIndex;
    struct {
        unsigned int has_originalRoutePurpose:1;
        unsigned int has_routeIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_originalDirectionsResponseID:1;
        unsigned int read_routeHandle:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_originalDirectionsResponseID:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_originalRoutePurpose:1;
        unsigned int wrote_routeIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasOriginalRoutePurpose;
@property (nonatomic) int originalRoutePurpose;
@property (nonatomic, readonly) _Bool hasRouteHandle;
@property (retain, nonatomic) NSData *routeHandle;
@property (nonatomic, readonly) _Bool hasOriginalDirectionsResponseID;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (nonatomic) _Bool hasRouteIndex;
@property (nonatomic) unsigned int routeIndex;
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
- (void)_readRouteHandle;
- (void)_readOriginalDirectionsResponseID;
- (id)originalRoutePurposeAsString:(int)arg1;
- (int)StringAsOriginalRoutePurpose:(id)arg1;

@end
