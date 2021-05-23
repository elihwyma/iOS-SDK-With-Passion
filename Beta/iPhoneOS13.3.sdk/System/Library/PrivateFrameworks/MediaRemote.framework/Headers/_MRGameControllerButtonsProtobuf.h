/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRGameControllerButtonsProtobuf : PBCodable

{
    float _a;
    float _b;
    float _dPadX;
    float _dPadY;
    float _leftShoulder;
    float _leftThumbstickX;
    float _leftThumbstickY;
    float _leftTrigger;
    float _pause;
    float _rightShoulder;
    float _rightThumbstickX;
    float _rightThumbstickY;
    float _rightTrigger;
    float _x;
    float _y;
    struct {
        unsigned int a:1;
        unsigned int b:1;
        unsigned int dPadX:1;
        unsigned int dPadY:1;
        unsigned int leftShoulder:1;
        unsigned int leftThumbstickX:1;
        unsigned int leftThumbstickY:1;
        unsigned int leftTrigger:1;
        unsigned int pause:1;
        unsigned int rightShoulder:1;
        unsigned int rightThumbstickX:1;
        unsigned int rightThumbstickY:1;
        unsigned int rightTrigger:1;
        unsigned int x:1;
        unsigned int y:1;
    } _has;
}

@property (nonatomic) _Bool hasDPadX;
@property (nonatomic) float dPadX;
@property (nonatomic) _Bool hasDPadY;
@property (nonatomic) float dPadY;
@property (nonatomic) _Bool hasA;
@property (nonatomic) float a;
@property (nonatomic) _Bool hasB;
@property (nonatomic) float b;
@property (nonatomic) _Bool hasX;
@property (nonatomic) float x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) float y;
@property (nonatomic) _Bool hasLeftShoulder;
@property (nonatomic) float leftShoulder;
@property (nonatomic) _Bool hasRightShoulder;
@property (nonatomic) float rightShoulder;
@property (nonatomic) _Bool hasLeftThumbstickX;
@property (nonatomic) float leftThumbstickX;
@property (nonatomic) _Bool hasLeftThumbstickY;
@property (nonatomic) float leftThumbstickY;
@property (nonatomic) _Bool hasRightThumbstickX;
@property (nonatomic) float rightThumbstickX;
@property (nonatomic) _Bool hasRightThumbstickY;
@property (nonatomic) float rightThumbstickY;
@property (nonatomic) _Bool hasLeftTrigger;
@property (nonatomic) float leftTrigger;
@property (nonatomic) _Bool hasRightTrigger;
@property (nonatomic) float rightTrigger;
@property (nonatomic) _Bool hasPause;
@property (nonatomic) float pause;

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
