/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <Swift>

{
    HDCodableCodedQuantity *_denominator;
    HDCodableCodedQuantity *_numerator;
}

@property (nonatomic, readonly) _Bool hasNumerator;
@property (retain, nonatomic) HDCodableCodedQuantity *numerator;
@property (nonatomic, readonly) _Bool hasDenominator;
@property (retain, nonatomic) HDCodableCodedQuantity *denominator;

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
