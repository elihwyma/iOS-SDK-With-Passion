/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement

{
    _Bool _flipped;
    float _value;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerButtonInput *_positive;
    GCControllerButtonInput *_negative;
}

@property (nonatomic) float value;
@property (retain, nonatomic) GCControllerButtonInput *positive;
@property (retain, nonatomic) GCControllerButtonInput *negative;
@property (nonatomic, getter=isFlipped) _Bool flipped;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;

- (id)description;
- (_Bool)_setValue:(float)arg1;
- (int)getAndResetTimesPressed;
- (_Bool)isAnalog;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithCollection:(id)arg1 flipped:(_Bool)arg2;

@end
