/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProtocolBuffer/PBCodable.h>

@class PETAggregationKey, PETDistribution;

@interface PETAggregatedMessage : PBCodable

{
    unsigned int _count;
    PETDistribution *_distribution;
    PETAggregationKey *_key;
    struct {
        unsigned int count:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) PETAggregationKey *key;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic, readonly) _Bool hasDistribution;
@property (retain, nonatomic) PETDistribution *distribution;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
