/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _resultFeature;
    struct {
        unsigned int has_resultFeature:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultFeature;
@property (nonatomic) int resultFeature;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)resultFeatureAsString:(int)arg1;
- (int)StringAsResultFeature:(id)arg1;

@end
