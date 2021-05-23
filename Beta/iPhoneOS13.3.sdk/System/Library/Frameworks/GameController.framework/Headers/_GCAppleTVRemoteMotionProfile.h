/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <GameController/GCMotion.h>

@class CMMotionManager, GCController;

@interface _GCAppleTVRemoteMotionProfile : GCMotion

{
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _prevGravity;
    CDStruct_31142d93 _userAcceleration;
    struct GCQuaternion _attitude;
    struct GCQuaternion _prevAttitude;
    CDStruct_27cd59c8 _eulerAngles;
    CDStruct_27cd59c8 _prevEulerAngles;
    CDStruct_31142d93 _rotationRate;
    float _tip;
    float _tilt;
    CMMotionManager *_motionMgr;
    _Bool _linkedOnOrAfterCompassFeature;
    _Bool _motionLite;
    _Bool _compassEnabled;
    CDUnknownBlockType _valueChangedHandler;
    CDUnknownBlockType _internalValueChangedHandler;
    _Bool _emulatedMotionEnabled;
    _Bool _motionUpdatedEnabled;
    _Bool _paused;
    GCController *_controller;
}

- (CDStruct_39925896)gravity;
- (id)controller;
- (struct GCQuaternion)attitude;
- (float)_tilt;
- (float)_tip;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDStruct_39925896)userAcceleration;
- (CDStruct_39925896)rotationRate;
- (id)initWithController:(id)arg1;
- (void)_setCompassEnabled:(_Bool)arg1;
- (void)_setAttitude:(struct GCQuaternion)arg1;
- (_Bool)hasAttitudeAndRotationRate;
- (CDUnknownBlockType)valueChangedHandler;
- (void)_setMotionLite:(_Bool)arg1;
- (_Bool)isEmulatedMicroGamepad;
- (void)_setGravity:(CDStruct_39925896)arg1;
- (void)_setUserAcceleration:(CDStruct_39925896)arg1;
- (void)_setRotationRate:(CDStruct_39925896)arg1;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (_Bool)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(_Bool)arg1;
- (void)setInternalValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)internalValueChangedHandler;
- (CDUnknownBlockType)_motionLiteFusedHandler;
- (void)_startDeviceMotionUpdatesHelper;
- (void)_stopDeviceMotionUpdatesHelper;

@end
