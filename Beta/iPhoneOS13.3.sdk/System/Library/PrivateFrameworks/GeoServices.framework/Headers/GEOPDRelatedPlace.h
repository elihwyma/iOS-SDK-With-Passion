/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRelatedPlace : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _type;
    CDStruct_3af5a977 _flags;
}

@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)mapsIdType;
+ (id)relatedPlacesForPlaceData:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addMapsId:(id)arg1;
- (unsigned long long)mapsIdsCount;
- (void)clearMapsIds;
- (id)mapsIdAtIndex:(unsigned long long)arg1;

@end
