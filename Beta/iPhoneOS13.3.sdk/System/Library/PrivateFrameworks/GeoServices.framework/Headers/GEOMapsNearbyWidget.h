/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapsServerMetadata;

@interface GEOMapsNearbyWidget : PBCodable

{
    GEOMapsServerMetadata *_serverMetadata;
    int _tappedItemIndex;
    struct {
        unsigned int has_tappedItemIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasServerMetadata;
@property (retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) _Bool hasTappedItemIndex;
@property (nonatomic) int tappedItemIndex;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
