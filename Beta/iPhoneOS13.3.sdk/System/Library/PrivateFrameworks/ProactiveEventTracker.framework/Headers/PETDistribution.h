/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProtocolBuffer/PBCodable.h>

@interface PETDistribution : PBCodable

{
    double _max;
    double _mean;
    double _min;
    double _variance;
    struct {
        unsigned int max:1;
        unsigned int mean:1;
        unsigned int min:1;
        unsigned int variance:1;
    } _has;
}

@property (nonatomic) _Bool hasMin;
@property (nonatomic) double min;
@property (nonatomic) _Bool hasMax;
@property (nonatomic) double max;
@property (nonatomic) _Bool hasMean;
@property (nonatomic) double mean;
@property (nonatomic) _Bool hasVariance;
@property (nonatomic) double variance;

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
