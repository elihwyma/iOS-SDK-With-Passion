/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    _Bool _navigationInterrupted;
    struct {
        unsigned int navigationInterrupted:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic) _Bool hasNavigationInterrupted;
@property (nonatomic) _Bool navigationInterrupted;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
