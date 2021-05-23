/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxCategories;
    unsigned int _maxResultsPerCategory;
    struct {
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxCategories:1;
        unsigned int has_maxResultsPerCategory:1;
    } _flags;
}

@property (nonatomic) _Bool hasMaxCategories;
@property (nonatomic) unsigned int maxCategories;
@property (nonatomic) _Bool hasMaxResultsPerCategory;
@property (nonatomic) unsigned int maxResultsPerCategory;
@property (nonatomic) _Bool hasBlurredHourOfDay;
@property (nonatomic) unsigned int blurredHourOfDay;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) unsigned int dayOfWeek;
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

@end
