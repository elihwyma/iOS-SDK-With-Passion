/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingPrecisionAtKPair : PBCodable

{
    unsigned long long _k;
    float _precision;
    struct {
        unsigned int k:1;
        unsigned int precision:1;
    } _has;
}

@property (nonatomic) _Bool hasK;
@property (nonatomic) unsigned long long k;
@property (nonatomic) _Bool hasPrecision;
@property (nonatomic) float precision;

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
