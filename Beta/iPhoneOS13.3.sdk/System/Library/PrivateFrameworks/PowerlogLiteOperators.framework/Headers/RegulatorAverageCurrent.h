/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface RegulatorAverageCurrent : PBCodable

{
    unsigned int _averageCurrentMa;
    unsigned int _duration64ms;
    unsigned int _regulatorId;
    unsigned int _sampleCount;
    struct {
        unsigned int averageCurrentMa:1;
        unsigned int duration64ms:1;
        unsigned int regulatorId:1;
        unsigned int sampleCount:1;
    } _has;
}

@property (nonatomic) _Bool hasRegulatorId;
@property (nonatomic) unsigned int regulatorId;
@property (nonatomic) _Bool hasSampleCount;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) _Bool hasDuration64ms;
@property (nonatomic) unsigned int duration64ms;
@property (nonatomic) _Bool hasAverageCurrentMa;
@property (nonatomic) unsigned int averageCurrentMa;

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
