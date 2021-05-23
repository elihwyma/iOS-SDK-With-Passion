/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableSet, NSString, SBHardwareDefaults, SpringBoard;

@protocol SBProximitySensorControlling;

@interface SBProximitySensorManager : NSObject

{
    NSMutableSet *_clientsWantingDetectionEnabled;
    id <SBProximitySensorControlling> _hidInterface;
    SBHardwareDefaults *_hardwareDefaults;
    _Bool _proximityDetectionEnabled;
    _Bool _proximityDetectionPermitted;
    _Bool _objectInProximity;
    int _backboardNotificationToken;
    NSHashTable *_observers;
    SpringBoard *_interfaceOrientationProvider;
}

@property (nonatomic, getter=isObjectInProximity, setter=_setObjectInProximity:) _Bool objectInProximity;
@property (nonatomic, getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:) _Bool proximityDetectionEnabled;
@property (nonatomic, getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:) _Bool proximityDetectionPermitted;
@property (retain, nonatomic, getter=_interfaceOrientationProvider, setter=_setInterfaceOrientationProvider:) SpringBoard *interfaceOrientationProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_destroy;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)_proximityDidChange:(id)arg1;
- (id)initWithHIDInterface:(id)arg1 hardwareDefaults:(id)arg2 interfaceOrientationProvider:(id)arg3;
- (void)client:(id)arg1 wantsProximityDetectionEnabled:(_Bool)arg2;
- (void)resetProximityCalibration;
- (void)_reloadDefaults;
- (void)_updateProxState;
- (_Bool)_clientsWantDetectionEnabled;
- (void)_enableProx;
- (void)_disableProx;

@end
