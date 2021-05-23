/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CMMotionAlarmManagerInternal : NSObject

{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSMutableDictionary *fAlarms;
    _Bool fListening;
}

+ (id)instance;

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startListeners;
- (void)_stopListeners;
- (void)_handleAlarmFire:(id)arg1;
- (_Bool)_registerAlarm:(id)arg1 error:(id *)arg2;
- (_Bool)_unregisterAlarm:(id)arg1 error:(id *)arg2;
- (_Bool)_acknowledgeAlarm:(id)arg1 error:(id *)arg2;
- (_Bool)_launchRemoteAppWithError:(id *)arg1 delegate:(id)arg2;

@end
