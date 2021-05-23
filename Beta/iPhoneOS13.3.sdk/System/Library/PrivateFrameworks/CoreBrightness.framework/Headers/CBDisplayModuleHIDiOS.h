/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBDisplayModule.h>

@class NSArray, NSObject, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBDisplayModuleHIDiOS : CBDisplayModule

{
    struct __IOHIDDevice *_hidDisplayDevice;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_containerID;
    struct __IOHIDElement *_brightnessElement;
    struct __IOHIDElement *_durationElement;
    NSArray *_elements;
    float _minNits;
    float _maxNits;
    float _currentNits;
    float _nitsScaler;
    float _minLinearBrightness;
    NSObject<OS_dispatch_queue> *_brightnessUpdateQueue;
    unsigned long long _brighntessUpdateCounter;
    float _brightnessUpdateTarget;
    _Bool _noHID;
    unsigned long long _VID;
    unsigned long long _PID;
}

@property (readonly) unsigned long long VID;
@property (readonly) unsigned long long PID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (_Bool)setSlider:(float)arg1;
- (_Bool)setNits:(float)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (float)getLinearBrightness;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDevice:(unsigned int)arg1 andQueue:(id)arg2;
- (_Bool)getNits:(float *)arg1;
- (id)newDisplayBrightnessData;
- (float)getUserBrightnessForNits:(float)arg1;
- (_Bool)handleDisplayBrightnessProperty:(id)arg1;
- (_Bool)handleDisplayLinearBrightnessProperty:(id)arg1;
- (_Bool)setLinearBrightness:(float)arg1;
- (float)getNitsForUserBrightness:(float)arg1;
- (_Bool)setNits:(float)arg1 withPeriod:(float)arg2;

@end
