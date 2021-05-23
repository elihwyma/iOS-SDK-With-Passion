/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapItemStorage, NSString, PBUnknownFields;

@interface MSPPlaceDisplay : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_placeMapItemStorage;
    NSString *_supersededSearchIdentifier;
}

@property (nonatomic, readonly) _Bool hasPlaceMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *placeMapItemStorage;
@property (nonatomic, readonly) _Bool hasSupersededSearchIdentifier;
@property (retain, nonatomic) NSString *supersededSearchIdentifier;
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
