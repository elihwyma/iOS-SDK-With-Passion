/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NightModeControl;

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface BLControl : NSObject

{
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _ignoreBrightnessKey;
    _Bool _overrideIgnoreBrightness;
    _Bool _ignoreALSEvents;
    CDUnknownBlockType _callback;
    void *_callbackContext;
    _Bool _monitorALSOnly;
    _Bool _useMultiCurves;
    int _ecoModeNotificationToken;
    CDUnknownBlockType _ecoModeNotificationHandler;
    int _ecoModePreferencesUpdateNotificationToken;
    CDUnknownBlockType _ecoModePreferencesUpdateNotificationHandler;
    NSMutableDictionary *_clientDisplayMap;
    NSMutableArray *_displayContainers;
    NSMutableArray *_hidServiceClients;
    NSObject<OS_os_log> *_logHandle;
    unsigned long long _builtInDisplayCount;
    NightModeControl *_nightModeControl;
}

- (id)init;
- (void)dealloc;
- (void)stop;
- (_Bool)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (_Bool)setPropertyWithKey:(id)arg1 property:(id)arg2 client:(id)arg3;
- (id)copyPropertyWithKey:(id)arg1 client:(id)arg2;
- (void)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (void)waitForALSArrival;
- (_Bool)startHIDSystemClient;
- (_Bool)findDisplays;
- (_Bool)findBacklight;
- (_Bool)setPropertyInternalWithKey:(id)arg1 property:(id)arg2 client:(id)arg3;
- (void)cancelHIDSystemClient;
- (void)stopDisplayLookup;
- (void)sendNotificationFor:(id)arg1 withValue:(id)arg2;
- (void)addDisplayContainer:(id)arg1;
- (void)handleCADisplay:(id)arg1;
- (void)handleCADisplayArrival:(id)arg1;
- (void)handleCADisplayRemoval:(id)arg1;
- (void)removeDisplayContainer:(id)arg1;
- (void)removeHIDService:(struct __IOHIDServiceClient *)arg1;
- (id)newDevicePariMatchingDictionaryWithPage:(unsigned int)arg1 andUsage:(unsigned int)arg2;
- (void)hidServiceArrival:(struct __IOHIDServiceClient *)arg1;
- (id)copyDisplayList;
- (id)copyDisplayInfo;
- (id)copyStatusInfo;
- (id)copyBLControlPropertyWithkey:(id)arg1;
- (id)copyPropertyInternalWithKey:(id)arg1 forClient:(id)arg2;
- (_Bool)setBLControlPropertyWithKey:(id)arg1 property:(id)arg2;
- (void)handleNotificationInternalForKey:(id)arg1 withValue:(id)arg2;

@end
