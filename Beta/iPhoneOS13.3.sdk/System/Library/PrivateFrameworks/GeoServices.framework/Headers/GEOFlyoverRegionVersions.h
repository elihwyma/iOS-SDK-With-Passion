/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOFlyoverRegionVersions : PBCodable

{
    struct GEOFlyoverRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
}

@property (nonatomic, readonly) unsigned long long regionsCount;
@property (nonatomic, readonly) struct GEOFlyoverRegion *regions;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRegion:(struct GEOFlyoverRegion)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (struct GEOFlyoverRegion)regionAtIndex:(unsigned long long)arg1;
- (void)setRegions:(struct GEOFlyoverRegion *)arg1 count:(unsigned long long)arg2;

@end
