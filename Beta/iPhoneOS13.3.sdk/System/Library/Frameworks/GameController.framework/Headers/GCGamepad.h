/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, GCMotion;

@interface GCGamepad : NSObject

{
    _Bool _dpadFlippedY;
    GCMotion *_motion;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerButtonInput *_button2;
    GCControllerButtonInput *_button3;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_leftShoulder;
    GCControllerButtonInput *_rightShoulder;
    GCControllerButtonInput *_buttonMenu;
}

@property (weak, nonatomic) GCController *controller;
@property (retain, nonatomic) GCControllerDirectionPad *dpad;
@property (retain, nonatomic) GCControllerButtonInput *buttonA;
@property (retain, nonatomic) GCControllerButtonInput *buttonB;
@property (retain, nonatomic) GCControllerButtonInput *buttonX;
@property (retain, nonatomic) GCControllerButtonInput *buttonY;
@property (retain, nonatomic) GCControllerButtonInput *leftShoulder;
@property (retain, nonatomic) GCControllerButtonInput *rightShoulder;
@property (retain, nonatomic) GCControllerButtonInput *buttonMenu;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)allowsRotation;
- (void)setAllowsRotation:(_Bool)arg1;
- (id)saveSnapshot;
- (void)setPlayerIndex:(long long)arg1;
- (id)initWithController:(id)arg1;
- (id)_motion;
- (id)button2;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (id)productCategory;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setButton:(id)arg1 value:(double)arg2;
- (_Bool)isBluetoothAndUSBMirrored;
- (void)set_motion:(id)arg1;
- (void)setButton:(id)arg1 pressed:(_Bool)arg2;
- (_Bool)reportsAbsoluteDpadValues;
- (void)setControllerForElements;
- (id)button0;
- (id)button1;
- (id)button3;
- (void)setReportsAbsoluteDpadValues:(_Bool)arg1;

@end
