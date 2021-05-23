/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineQuadNodes : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_regions;
}

@property (retain, nonatomic) NSMutableArray *regions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)regionType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (unsigned long long)regionsCount;
- (id)regionAtIndex:(unsigned long long)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
