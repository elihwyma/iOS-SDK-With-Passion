/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@interface HKCodableQuantitySeriesDatum : PBCodable <Swift>

{
    double _timeInterval;
    double _value;
    float _duration;
    struct {
        unsigned int timeInterval:1;
        unsigned int value:1;
        unsigned int duration:1;
    } _has;
}

@property (nonatomic) _Bool hasTimeInterval;
@property (nonatomic) double timeInterval;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) double value;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) float duration;

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
