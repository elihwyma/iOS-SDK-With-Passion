/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput, NSString;

@interface GCControllerDirectionPad : GCControllerElement

{
    NSString *_descriptionName;
    _Bool _wasZeroed;
    int _timesPressed;
    _Bool _nonAnalog;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerAxisInput *_xAxis;
    GCControllerAxisInput *_yAxis;
}

@property (retain, nonatomic) GCControllerAxisInput *xAxis;
@property (retain, nonatomic) GCControllerAxisInput *yAxis;
@property _Bool nonAnalog;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property (nonatomic, readonly) GCControllerButtonInput *up;
@property (nonatomic, readonly) GCControllerButtonInput *down;
@property (nonatomic, readonly) GCControllerButtonInput *left;
@property (nonatomic, readonly) GCControllerButtonInput *right;

- (id)description;
- (int)getAndResetTimesPressed;
- (_Bool)isAnalog;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2 descriptionName:(id)arg3;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2;
- (void)_fireValueChanged;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2;

@end
