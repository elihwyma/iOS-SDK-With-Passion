/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class GCController;

@interface GCMotion : NSObject

{
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    struct GCQuaternion _attitude;
    struct GCQuaternion _prevAttitude;
    CDStruct_27cd59c8 _eulerAngles;
    CDStruct_27cd59c8 _prevEulerAngles;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    _Bool _motionLite;
    _Bool _compassEnabled;
    CDUnknownBlockType _valueChangedHandler;
    GCController *_controller;
}

@property (weak, nonatomic, readonly) GCController *controller;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler;
@property (nonatomic, readonly) CDStruct_39925896 gravity;
@property (nonatomic, readonly) CDStruct_39925896 userAcceleration;
@property (nonatomic, readonly) _Bool hasAttitudeAndRotationRate;
@property (nonatomic, readonly) struct GCQuaternion attitude;
@property (nonatomic, readonly) CDStruct_39925896 rotationRate;

- (void)setGravity:(CDStruct_39925896)arg1;
- (float)_tilt;
- (float)_tip;
- (id)initWithController:(id)arg1;
- (void)setRotationRate:(CDStruct_39925896)arg1;
- (void)setUserAcceleration:(CDStruct_39925896)arg1;
- (void)setAttitude:(struct GCQuaternion)arg1;
- (void)_setCompassEnabled:(_Bool)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (void)_setMotionLite:(_Bool)arg1;
- (_Bool)isEmulatedMicroGamepad;
- (void)_setGravity:(CDStruct_39925896)arg1;
- (void)_setUserAcceleration:(CDStruct_39925896)arg1;
- (void)_setRotationRate:(CDStruct_39925896)arg1;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (_Bool)_isUpdatingDeviceMotion;
- (void)setStateFromMotion:(id)arg1;
- (void)_pauseMotionUpdates:(_Bool)arg1;

@end
