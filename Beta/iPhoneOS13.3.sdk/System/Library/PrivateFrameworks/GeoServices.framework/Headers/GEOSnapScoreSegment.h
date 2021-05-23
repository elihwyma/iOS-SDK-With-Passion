/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSnapScoreSegment : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    NSMutableArray *_categoryScores;
    unsigned long long _geoId;
    GEOLatLng *_pointOnLine;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _overallScore;
    struct {
        unsigned int has_geoId:1;
        unsigned int has_overallScore:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributes:1;
        unsigned int read_categoryScores:1;
        unsigned int read_pointOnLine:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributes:1;
        unsigned int wrote_categoryScores:1;
        unsigned int wrote_geoId:1;
        unsigned int wrote_pointOnLine:1;
        unsigned int wrote_overallScore:1;
    } _flags;
}

@property (nonatomic) _Bool hasGeoId;
@property (nonatomic) unsigned long long geoId;
@property (nonatomic, readonly) _Bool hasPointOnLine;
@property (retain, nonatomic) GEOLatLng *pointOnLine;
@property (nonatomic) _Bool hasOverallScore;
@property (nonatomic) float overallScore;
@property (retain, nonatomic) NSMutableArray *categoryScores;
@property (retain, nonatomic) NSMutableArray *attributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (_Bool)isValid:(id)arg1;
+ (Class)categoryScoreType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readAttributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (void)_readPointOnLine;
- (void)_readCategoryScores;
- (void)_addNoFlagsCategoryScore:(id)arg1;
- (void)_addNoFlagsAttribute:(id)arg1;
- (unsigned long long)categoryScoresCount;
- (void)clearCategoryScores;
- (id)categoryScoreAtIndex:(unsigned long long)arg1;
- (void)addCategoryScore:(id)arg1;

@end
