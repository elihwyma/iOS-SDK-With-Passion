/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ETPAnger : PBCodable

{
    NSData *_delays;
    float _duration;
    float _normalizedCenterX;
    float _normalizedCenterY;
    NSData *_points;
    struct {
        unsigned int duration:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
    } _has;
}

@property (nonatomic) _Bool hasDuration;
@property (nonatomic) float duration;
@property (nonatomic) _Bool hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) _Bool hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (nonatomic, readonly) _Bool hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (nonatomic, readonly) _Bool hasPoints;
@property (retain, nonatomic) NSData *points;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
