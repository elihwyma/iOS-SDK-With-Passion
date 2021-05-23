/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, GCMotion;

@interface GCExtendedGamepad : NSObject

{
    _Bool _dpadFlippedY;
    _Bool _leftFlippedY;
    _Bool _rightFlippedY;
    long long _buttonHomeUsage;
    long long _buttonMenuUsage;
    long long _buttonOptionsUsage;
    GCMotion *_motion;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerButtonInput *_button2;
    GCControllerButtonInput *_button3;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_buttonMenu;
    GCControllerButtonInput *_buttonOptions;
    GCControllerDirectionPad *_leftThumbstick;
    GCControllerDirectionPad *_rightThumbstick;
    GCControllerButtonInput *_leftShoulder;
    GCControllerButtonInput *_rightShoulder;
    GCControllerButtonInput *_leftTrigger;
    GCControllerButtonInput *_rightTrigger;
    GCControllerButtonInput *_leftThumbstickButton;
    GCControllerButtonInput *_rightThumbstickButton;
    GCControllerButtonInput *__buttonHome;
}

@property (retain, nonatomic) GCControllerButtonInput *_buttonHome;
@property (weak, nonatomic, readonly) GCController *controller;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property (nonatomic, readonly) GCControllerDirectionPad *dpad;
@property (nonatomic, readonly) GCControllerButtonInput *buttonA;
@property (nonatomic, readonly) GCControllerButtonInput *buttonB;
@property (nonatomic, readonly) GCControllerButtonInput *buttonX;
@property (nonatomic, readonly) GCControllerButtonInput *buttonY;
@property (nonatomic, readonly) GCControllerButtonInput *buttonMenu;
@property (nonatomic, readonly) GCControllerButtonInput *buttonOptions;
@property (nonatomic, readonly) GCControllerDirectionPad *leftThumbstick;
@property (nonatomic, readonly) GCControllerDirectionPad *rightThumbstick;
@property (nonatomic, readonly) GCControllerButtonInput *leftShoulder;
@property (nonatomic, readonly) GCControllerButtonInput *rightShoulder;
@property (nonatomic, readonly) GCControllerButtonInput *leftTrigger;
@property (nonatomic, readonly) GCControllerButtonInput *rightTrigger;
@property (nonatomic, readonly) GCControllerButtonInput *leftThumbstickButton;
@property (nonatomic, readonly) GCControllerButtonInput *rightThumbstickButton;

+ (_Bool)supportsSecureCoding;

- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setController:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (_Bool)allowsRotation;
- (void)setAllowsRotation:(_Bool)arg1;
- (id)saveSnapshot;
- (void)setPlayerIndex:(long long)arg1;
- (id)initWithController:(id)arg1;
- (id)_motion;
- (id)button2;
- (id)productCategory;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setButton:(id)arg1 value:(double)arg2;
- (id)initWithController:(id)arg1 initInfo:(const struct GCExtendedGamepadInitWithControllerInitInfo *)arg2;
- (_Bool)isBluetoothAndUSBMirrored;
- (void)set_motion:(id)arg1;
- (void)setButton:(id)arg1 pressed:(_Bool)arg2;
- (void)setStateFromExtendedGamepad:(id)arg1;
- (_Bool)reportsAbsoluteDpadValues;
- (void)setHapticMotor:(int)arg1 frequency:(float)arg2;
- (void)setEnableTimeForHaptics:(_Bool)arg1;
- (void)initAuxiliaryButtonsWithInitInfo:(const struct GCExtendedGamepadInitWithControllerInitInfo *)arg1;
- (void)setControllerForElements;
- (id)button0;
- (id)button1;
- (id)button3;
- (void)setReportsAbsoluteDpadValues:(_Bool)arg1;
- (void)setLightbarColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

@end
