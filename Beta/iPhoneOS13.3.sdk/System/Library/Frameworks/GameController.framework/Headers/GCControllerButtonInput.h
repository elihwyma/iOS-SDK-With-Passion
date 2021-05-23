/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCControllerElement.h>

@class NSString;

@interface GCControllerButtonInput : GCControllerElement

{
    NSString *_descriptionName;
    int _pressCounter;
    _Bool _nonAnalog;
    float _value;
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _pressedChangedHandler;
}

@property _Bool nonAnalog;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType pressedChangedHandler;
@property (nonatomic, readonly) float value;
@property (nonatomic, readonly, getter=isPressed) _Bool pressed;

- (id)description;
- (void)setValue:(float)arg1;
- (_Bool)_setValue:(float)arg1;
- (int)getAndResetTimesPressed;
- (_Bool)isAnalog;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithDescriptionName:(id)arg1;

@end
