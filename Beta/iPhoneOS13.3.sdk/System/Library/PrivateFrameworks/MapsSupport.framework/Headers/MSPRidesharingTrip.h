/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOComposedWaypoint, PBUnknownFields;

@interface MSPRidesharingTrip : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOComposedWaypoint *_endWaypoint;
    GEOComposedWaypoint *_startWaypoint;
}

@property (nonatomic, readonly) _Bool hasStartWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) _Bool hasEndWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *endWaypoint;
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
