//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying>
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

@property(nonatomic) float pause; // @synthesize pause=_pause;
@property(nonatomic) float rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(nonatomic) float leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(nonatomic) float rightThumbstickY; // @synthesize rightThumbstickY=_rightThumbstickY;
@property(nonatomic) float rightThumbstickX; // @synthesize rightThumbstickX=_rightThumbstickX;
@property(nonatomic) float leftThumbstickY; // @synthesize leftThumbstickY=_leftThumbstickY;
@property(nonatomic) float leftThumbstickX; // @synthesize leftThumbstickX=_leftThumbstickX;
@property(nonatomic) float rightShoulder; // @synthesize rightShoulder=_rightShoulder;
@property(nonatomic) float leftShoulder; // @synthesize leftShoulder=_leftShoulder;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(nonatomic) float b; // @synthesize b=_b;
@property(nonatomic) float a; // @synthesize a=_a;
@property(nonatomic) float dPadY; // @synthesize dPadY=_dPadY;
@property(nonatomic) float dPadX; // @synthesize dPadX=_dPadX;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPause;
@property(nonatomic) BOOL hasRightTrigger;
@property(nonatomic) BOOL hasLeftTrigger;
@property(nonatomic) BOOL hasRightThumbstickY;
@property(nonatomic) BOOL hasRightThumbstickX;
@property(nonatomic) BOOL hasLeftThumbstickY;
@property(nonatomic) BOOL hasLeftThumbstickX;
@property(nonatomic) BOOL hasRightShoulder;
@property(nonatomic) BOOL hasLeftShoulder;
@property(nonatomic) BOOL hasY;
@property(nonatomic) BOOL hasX;
@property(nonatomic) BOOL hasB;
@property(nonatomic) BOOL hasA;
@property(nonatomic) BOOL hasDPadY;
@property(nonatomic) BOOL hasDPadX;

@end

