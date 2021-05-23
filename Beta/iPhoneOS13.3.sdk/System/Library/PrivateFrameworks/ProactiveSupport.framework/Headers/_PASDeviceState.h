/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@interface _PASDeviceState : NSObject

+ (_Bool)isClassCLocked;
+ (int)lockState;
+ (_Bool)isUnlocked;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks *)arg1;
+ (void)setDefaultSystemCallbacks;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(CDUnknownBlockType)arg1;
+ (id)registerForLockStateChangeNotifications:(CDUnknownBlockType)arg1;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;
+ (_Bool)isDeviceFormattedForProtection;
+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;

@end
