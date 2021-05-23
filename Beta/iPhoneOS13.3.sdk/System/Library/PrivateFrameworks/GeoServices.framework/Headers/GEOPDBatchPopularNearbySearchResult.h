/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchPopularNearbySearchResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_popularNearbyResults;
}

@property (retain, nonatomic) NSMutableArray *popularNearbyResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)popularNearbyResultType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)popularNearbyResultsCount;
- (id)popularNearbyResultAtIndex:(unsigned long long)arg1;
- (void)addPopularNearbyResult:(id)arg1;
- (void)clearPopularNearbyResults;

@end
