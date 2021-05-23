/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPRouteBookmark : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
}

@property (nonatomic, readonly) _Bool hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
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
