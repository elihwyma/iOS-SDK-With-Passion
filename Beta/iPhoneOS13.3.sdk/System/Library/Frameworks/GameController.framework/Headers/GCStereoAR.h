/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerTouchpad, GCMotion;

@interface GCStereoAR : NSObject

{
    CDStruct_0e8a9a91 _controllerReportedAttitude;
    CDStruct_0e8a9a91 _arcStart;
    CDStruct_0e8a9a91 _arcEnd;
    _Bool _measuringArc;
    GCMotion *_motion;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerTouchpad *_touchpad;
    CDUnknownBlockType _arcHandler;
    GCControllerButtonInput *_systemButton;
    GCControllerButtonInput *_triggerButton;
    GCControllerButtonInput *_touchpadButton;
}

@property (copy, nonatomic) CDUnknownBlockType arcHandler;
@property (retain, nonatomic) GCControllerButtonInput *systemButton;
@property (retain, nonatomic) GCControllerButtonInput *triggerButton;
@property (retain, nonatomic) GCControllerButtonInput *touchpadButton;
@property (weak, nonatomic, readonly) GCController *controller;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property (nonatomic, readonly) GCControllerTouchpad *touchpad;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setController:(id)arg1;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (void)initCommon;
- (id)initWithController:(id)arg1;
- (void)setAttitude:(struct)arg1;
- (id)_motion;
- (id)productCategory;
- (_Bool)isBluetoothAndUSBMirrored;
- (void)set_motion:(id)arg1;
- (void)setStateFromStereoAR:(id)arg1;
- (void)setControllerForElements;
- (void)setAttitudeWithControllerUpdate:(struct)arg1;
- (void)setForwardQuaternion:(struct)arg1;
- (void)setControllerAttitude:(struct)arg1;
- (void)setDigitizerX:(float)arg1 digitizerY:(float)arg2 timeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)handleMotionEvent:(struct __IOHIDEvent *)arg1;
- (struct)controllerReportedAttitude;

@end
