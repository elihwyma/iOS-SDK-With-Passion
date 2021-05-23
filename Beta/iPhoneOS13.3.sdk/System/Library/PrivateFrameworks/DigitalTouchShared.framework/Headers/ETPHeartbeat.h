/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ETPHeartbeat : PBCodable

{
    float _beatsPerMinute;
    unsigned int _duration;
    float _heartbreakTime;
    float _normalizedCenterX;
    float _normalizedCenterY;
    float _rotation;
    struct {
        unsigned int beatsPerMinute:1;
        unsigned int duration:1;
        unsigned int heartbreakTime:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
        unsigned int rotation:1;
    } _has;
}

@property (nonatomic) _Bool hasBeatsPerMinute;
@property (nonatomic) float beatsPerMinute;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) _Bool hasNormalizedCenterX;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) _Bool hasNormalizedCenterY;
@property (nonatomic) float normalizedCenterY;
@property (nonatomic) _Bool hasRotation;
@property (nonatomic) float rotation;
@property (nonatomic) _Bool hasHeartbreakTime;
@property (nonatomic) float heartbreakTime;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
