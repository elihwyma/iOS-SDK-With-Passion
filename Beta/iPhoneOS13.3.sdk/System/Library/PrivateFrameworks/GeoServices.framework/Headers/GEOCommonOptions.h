/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable

{
    PBUnknownFields *_unknownFields;
    _Bool _excludeGuidance;
    _Bool _includeSnapScoreMetadataDebug;
    _Bool _includeSummaryForPredictedDestination;
    _Bool _includeTravelTimeAggressive;
    _Bool _includeTravelTimeConservative;
    _Bool _includeTravelTimeEstimate;
    struct {
        unsigned int has_excludeGuidance:1;
        unsigned int has_includeSnapScoreMetadataDebug:1;
        unsigned int has_includeSummaryForPredictedDestination:1;
        unsigned int has_includeTravelTimeAggressive:1;
        unsigned int has_includeTravelTimeConservative:1;
        unsigned int has_includeTravelTimeEstimate:1;
    } _flags;
}

@property (nonatomic) _Bool hasIncludeTravelTimeAggressive;
@property (nonatomic) _Bool includeTravelTimeAggressive;
@property (nonatomic) _Bool hasIncludeTravelTimeEstimate;
@property (nonatomic) _Bool includeTravelTimeEstimate;
@property (nonatomic) _Bool hasIncludeTravelTimeConservative;
@property (nonatomic) _Bool includeTravelTimeConservative;
@property (nonatomic) _Bool hasExcludeGuidance;
@property (nonatomic) _Bool excludeGuidance;
@property (nonatomic) _Bool hasIncludeSummaryForPredictedDestination;
@property (nonatomic) _Bool includeSummaryForPredictedDestination;
@property (nonatomic) _Bool hasIncludeSnapScoreMetadataDebug;
@property (nonatomic) _Bool includeSnapScoreMetadataDebug;
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
