/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, GCMotion;

@interface GCMicroGamepad : NSObject

{
    _Bool _dpadFlippedY;
    _Bool _reportsAbsoluteDpadValues;
    _Bool _allowsRotation;
    GCMotion *_motion;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_buttonMenu;
    long long _deviceType;
}

@property (nonatomic) long long deviceType;
@property (weak, nonatomic, readonly) GCController *controller;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property (retain, nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (retain, nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (retain, nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCControllerButtonInput *buttonMenu;
@property (nonatomic) _Bool reportsAbsoluteDpadValues;
@property (nonatomic) _Bool allowsRotation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setController:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)saveSnapshot;
- (void)setPlayerIndex:(long long)arg1;
- (id)buttonB;
- (id)initWithController:(id)arg1;
- (id)_motion;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (id)productCategory;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setButton:(id)arg1 value:(double)arg2;
- (_Bool)isBluetoothAndUSBMirrored;
- (void)set_motion:(id)arg1;
- (void)setButton:(id)arg1 pressed:(_Bool)arg2;
- (void)setStateFromMicroGamepad:(id)arg1;
- (void)setControllerForElements;
- (id)button0;
- (id)button1;
- (_Bool)supportsDpadTaps;
- (void)microControllerWithDigitizerX:(float)arg1 digitizerY:(float)arg2 timestamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;

@end
