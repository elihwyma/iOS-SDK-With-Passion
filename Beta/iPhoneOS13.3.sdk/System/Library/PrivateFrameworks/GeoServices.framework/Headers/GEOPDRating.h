/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRating : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _maxScore;
    double _score;
    int _numRatingsUsedForScore;
    int _ratingType;
    struct {
        unsigned int has_maxScore:1;
        unsigned int has_score:1;
        unsigned int has_numRatingsUsedForScore:1;
        unsigned int has_ratingType:1;
    } _flags;
}

@property (nonatomic) _Bool hasRatingType;
@property (nonatomic) int ratingType;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic) _Bool hasMaxScore;
@property (nonatomic) double maxScore;
@property (nonatomic) _Bool hasNumRatingsUsedForScore;
@property (nonatomic) int numRatingsUsedForScore;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)ratingForPlaceData:(id)arg1 type:(int)arg2;

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
- (id)ratingTypeAsString:(int)arg1;
- (int)StringAsRatingType:(id)arg1;

@end
