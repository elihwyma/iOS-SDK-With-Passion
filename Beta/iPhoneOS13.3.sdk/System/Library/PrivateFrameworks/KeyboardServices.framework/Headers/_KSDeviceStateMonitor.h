/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@interface _KSDeviceStateMonitor : NSObject

{
    _Bool _isContentProtectionAvailable;
}

@property (nonatomic) _Bool isContentProtectionAvailable;

+ (_Bool)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;

- (id)init;
- (void)dealloc;
- (_Bool)isDataAvailableForClassC;
- (void)handleKeyBagLockNotification;
- (_Bool)deviceHasBeenUnlockedSinceBoot;
- (_Bool)deviceIsPasswordConfigured;

@end
