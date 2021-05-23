/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOPredictedCommuteDestination : PBCodable

{
    double _confidenceScore;
    int _destinationType;
    _Bool _chosen;
    struct {
        unsigned int has_confidenceScore:1;
        unsigned int has_destinationType:1;
        unsigned int has_chosen:1;
    } _flags;
}

@property (nonatomic) _Bool hasDestinationType;
@property (nonatomic) int destinationType;
@property (nonatomic) _Bool hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) _Bool hasChosen;
@property (nonatomic) _Bool chosen;

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
- (id)destinationTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(id)arg1;

@end
