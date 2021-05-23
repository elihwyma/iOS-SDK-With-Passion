/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PPM2NamedEntitiesPerDonation : PBCodable

{
    int _algorithm;
    int _source;
    struct {
        unsigned int algorithm:1;
        unsigned int source:1;
    } _has;
}

@property (nonatomic) _Bool hasSource;
@property (nonatomic) int source;
@property (nonatomic) _Bool hasAlgorithm;
@property (nonatomic) int algorithm;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (int)StringAsSource:(id)arg1;
- (id)algorithmAsString:(int)arg1;
- (int)StringAsAlgorithm:(id)arg1;

@end
