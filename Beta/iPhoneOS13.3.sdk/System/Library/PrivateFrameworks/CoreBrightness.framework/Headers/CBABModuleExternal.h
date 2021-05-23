/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBModule.h>

@class CBABCurve, CBABRamp, CBDisplayModule, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CBABModuleExternal : CBModule

{
    NSMutableArray *_ALSServices;
    NSString *_containerID;
    _Bool _enabled;
    _Bool _available;
    _Bool _presetDisableAB;
    CBABCurve *_curve;
    CBABRamp *_ramp;
    _Bool _updatesFrozen;
    _Bool _suspendAutoBrightness;
    _Bool _fastRamp;
    CBDisplayModule *_displayModule;
}

@property (readonly) CBDisplayModule *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (void)updateAvailability;
- (id)copyPropertyForKey:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;
- (void)updateAutoBrightnessState:(_Bool)arg1;
- (void)userBrightnessCommitHandler;
- (void)userBrightnessChangingHandler;
- (void)updateBrightnessForce:(_Bool)arg1 periodOverride:(_Bool)arg2 period:(float)arg3;
- (void)storeCurveToPreferences;
- (_Bool)getAggregatedLux:(float *)arg1;
- (void)endFastRamp;
- (_Bool)newALSService:(struct __IOHIDServiceClient *)arg1;
- (void)updateBrightness;

@end
